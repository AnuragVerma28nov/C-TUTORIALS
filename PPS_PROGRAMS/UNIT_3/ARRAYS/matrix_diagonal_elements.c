// matrix diagonal element


#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal elements of matrix:\n");
    for (int i = 0; i < m && i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    return 0;
}