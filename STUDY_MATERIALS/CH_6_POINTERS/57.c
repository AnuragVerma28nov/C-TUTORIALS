// implementation of pointer to pointer variables

#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;
    int **pptr = &ptr;
    // printing value
    printf("\nprinting value age:\n");
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", **(pptr));

    return 0;
}