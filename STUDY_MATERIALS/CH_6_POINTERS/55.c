// implementation of pointer variables

#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d", _age);
    // printing address
    printf("\nprinting address\n");
    printf("\n%p", &age);
    printf("\n%u", &age);
    printf("\n%p", &_age);
    printf("\n%u", &_age);
    printf("\n%p", &ptr);
    printf("\n%u", &ptr);
    // printing value
    printf("\nprinting value\n");
    printf("%d\n", age);
    printf("%d\n",*ptr);
    printf("%d\n", *(&age));

    return 0;
}