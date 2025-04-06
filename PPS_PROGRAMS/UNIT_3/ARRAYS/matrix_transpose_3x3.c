// matrix transpose 3x3

#include <stdio.h>

int main()
{
    int matrix[3][3];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
