// input & output of array

#include <stdio.h>

int main()
{
    int marks[3];

    printf("Enter Maths marks: ");
    scanf("%d", &marks[0]);

    printf("Enter Chem marks: ");
    scanf("%d", &marks[1]);

    printf("Enter Phy marks: ");
    scanf("%d", &marks[2]);

    printf("Maths marks: %d\nChem marks: %d\nPhy marks: %d\n", marks[0], marks[1], marks[2]);

    return 0;
}