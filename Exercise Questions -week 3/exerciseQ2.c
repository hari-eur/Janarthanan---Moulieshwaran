#include <stdio.h>
void replace(int mat[][100], int n, int m) {
    int i, j;
    for (i = n-1; i > 0; i--) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] == m) 
            {
                mat[i][j] = mat[i-1][j];
            }
        }
    }
}

void display(int mat[][100], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[100][100], n, m, i, j;
    printf("Enter the size of matrix (odd number): ");
    scanf("%d", &n);
    printf("Enter the elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter the element to be replaced: ");
    scanf("%d", &m);
    replace(mat, n, m);
    printf("Matrix after replacement:\n");
    display(mat, n);
    return 0;
}
