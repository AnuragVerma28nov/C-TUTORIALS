// steel's hardness, carbonate, and tensile strength using conditional statements:

#include <stdio.h>

int main()
{
    float hardness, carbonate, tensile;

    printf("Enter steel's hardness (1-10): ");
    scanf("%f", &hardness);

    printf("Enter steel's carbonate content (0-1): ");
    scanf("%f", &carbonate);

    printf("Enter steel's tensile strength (100-1000): ");
    scanf("%f", &tensile);

    if (hardness >= 8)
    {
        printf("Steel is very hard.\n");
    }
    else if (hardness >= 5)
    {
        printf("Steel is moderately hard.\n");
    }
    else
    {
        printf("Steel is soft.\n");
    }
    if (carbonate > 0.5)
    {
        printf("Steel has high carbonate content.\n");
    }
    else if (carbonate > 0.2)
    {
        printf("Steel has moderate carbonate content.\n");
    }
    else
    {
        printf("Steel has low carbonate content.\n");
    }
    if (tensile > 800)
    {
        printf("Steel has high tensile strength.\n");
    }
    else if (tensile > 500)
    {
        printf("Steel has moderate tensile strength.\n");
    }
    else
    {
        printf("Steel has low tensile strength.\n");
    }

    return 0;
}
