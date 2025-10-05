#include <stdio.h>
#include <stdlib.h>

int* choosing;
int* number;
int num_job;
int shared_data = 0; 

int max(int arr[], int n) {
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

void lock(int id) {
    choosing[id] = 1;
    number[id] = 1 + max(number, num_job);
    choosing[id] = 0;

    for (int j = 0; j < num_job; j++) {
        while (choosing[j]); 
        while (number[j] != 0 && (number[j] < number[id] ||
              (number[j] == number[id] && j < id))); 
    }
}

void unlock(int id) {
    number[id] = 0;
}

void read_operation(int id) {
    lock(id);
    printf("Job %d (Reader) is reading data: %d\n", id, shared_data);
    for (volatile int i = 0; i < 10000000; i++); 
    printf("Jobs %d (Reader) finished reading\n", id);
    unlock(id);
}

void write_operation(int id) {
    lock(id);
    shared_data++; 
    printf("Job %d (Writer) is writing data: %d\n", id, shared_data);
    for (volatile int i = 0; i < 15000000; i++);
    printf("Job %d (Writer) finished writing\n", id);
    unlock(id);
}

void display_menu() {
    printf("1. Set number of jobs\n");
    printf("2. Run reader jobs\n");
    printf("3. Run writer job\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    
    do {
        display_menu();
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                printf("Enter number of Jobs: ");
                scanf("%d", &num_job);
                
                if (choosing) free(choosing);
                if (number) free(number);
                
                choosing = (int*)calloc(num_job, sizeof(int));
                number = (int*)calloc(num_job, sizeof(int));
                break;
                
            case 2: 
                if (num_job <= 0) {
                    printf("Please set number of jobs first!\n");
                    break;
                }
                printf("Running %d reader jobs...\n", num_job);
                for (int i = 0; i < num_job; i++) {
                    read_operation(i);
                }
                break;
                
            case 3: 
                if (num_job <= 0) {
                    printf("Please set number of jobs first!\n");
                    break;
                }
                printf("Running %d writer jobs...\n", num_job);
                for (int i = 0; i < num_job; i++) {
                    write_operation(i);
                }
                break;
                
            case 4: 
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);
    

    if (choosing) free(choosing);
    if (number) free(number);
    
    return 0;
}