// matrix diagonal elements sum

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < m && i < n; i++)
    {
        sum += matrix[i][i];
    }
    for (int i = 0; i < m && i < n; i++)
    {
        sum += matrix[i][n - i - 1];
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
