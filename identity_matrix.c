#include <stdio.h>

int main() {
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    int isIdentity = 1;

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);

            if(i == j && mat[i][j] != 1)
                isIdentity = 0;

            if(i != j && mat[i][j] != 0)
                isIdentity = 0;
        }
    }

    if(isIdentity)
        printf("Matrix is Identity Matrix\n");
    else
        printf("Matrix is NOT Identity Matrix\n");

    return 0;
}
