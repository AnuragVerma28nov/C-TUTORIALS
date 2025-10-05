#include <stdio.h>
#include <stdlib.h>

// Global variables for Bakery algorithm
int* choosing;
int* number;
int num_processes;
int shared_data = 0;  // Shared resource

// Function to find maximum ticket number
int find_max_number() {
    int max = 0;
    for (int i = 0; i < num_processes; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }
    return max;
}

// Bakery algorithm lock
void bakery_lock(int id) {
    choosing[id] = 1;
    number[id] = 1 + find_max_number();
    choosing[id] = 0;

    for (int j = 0; j < num_processes; j++) {
        // Wait while process j is choosing a number
        while (choosing[j]) {}

        // Wait while process j has a smaller number, or same number but lower ID
        while (number[j] != 0 && 
              ((number[j] < number[id]) || 
               (number[j] == number[id] && j < id))) {}
    }
}

// Bakery algorithm unlock
void bakery_unlock(int id) {
    number[id] = 0;
}

// Read operation (multiple readers can read simultaneously)
void read_data(int id) {
    bakery_lock(id);
    printf("Process %d (Reader) reading data: %d\n", id, shared_data);
    // Simulate reading time
    for (volatile int i = 0; i < 10000000; i++);
    printf("Process %d (Reader) finished reading\n", id);
    bakery_unlock(id);
}

// Write operation (exclusive access)
void write_data(int id) {
    bakery_lock(id);
    shared_data++;  // Modify shared data
    printf("Process %d (Writer) writing data: %d\n", id, shared_data);
    // Simulate writing time
    for (volatile int i = 0; i < 15000000; i++);
    printf("Process %d (Writer) finished writing\n", id);
    bakery_unlock(id);
}

// Display menu options
void display_menu() {
    printf("1. Set number of processes\n");
    printf("2. Run reader processes\n");
    printf("3. Run writer processes\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    
    do {
        display_menu();
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:  // Set number of processes
                printf("Enter number of processes: ");
                scanf("%d", &num_processes);
                
                // Free previous allocations if they exist
                free(choosing);
                free(number);
                
                // Allocate memory for bakery algorithm variables
                choosing = (int*)calloc(num_processes, sizeof(int));
                number = (int*)calloc(num_processes, sizeof(int));
                break;
                
            case 2:  // Run reader processes
                if (num_processes <= 0) {
                    printf("Please set number of processes first!\n");
                    break;
                }
                printf("Running %d reader processes...\n", num_processes);
                for (int i = 0; i < num_processes; i++) {
                    read_data(i);
                }
                break;
                
            case 3:  // Run writer processes
                if (num_processes <= 0) {
                    printf("Please set number of processes first!\n");
                    break;
                }
                printf("Running %d writer processes...\n", num_processes);
                for (int i = 0; i < num_processes; i++) {
                    write_data(i);
                }
                break;
                
            case 4:  // Exit
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
    
    free(choosing);
    free(number);
    
    return 0;
}