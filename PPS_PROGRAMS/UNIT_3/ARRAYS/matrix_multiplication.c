// matrix multiplication

#include <stdio.h>

int main()
{
    int m, n, p, q;
    printf("Enter number of rows (m) of matrix 1: ");
    scanf("%d", &m);
    printf("Enter number of columns (n) of matrix 1: ");
    scanf("%d", &n);
    printf("Enter number of rows (p) of matrix 2: ");
    scanf("%d", &p);
    printf("Enter number of columns (q) of matrix 2: ");
    scanf("%d", &q);
    if (n != p)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    int matrix1[m][n], matrix2[p][q], result[m][q];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}