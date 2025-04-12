// implementation of pointer to pointer variables

#include <stdio.h>

int main()
{

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    // printing value
    printf("\nprinting value i:\n");
    printf("%d\n", i);
    printf("%d\n", *ptr);
    printf("%d\n", **(pptr));

    return 0;
}