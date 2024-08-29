#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q, i, j, k;
    int **A, **B, **C;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }

    // Allocate memory for matrices A, B, and C(size of row)
    A = (int **)malloc(m * sizeof(int *));
    B = (int **)malloc(p * sizeof(int *));
    C = (int **)malloc(m * sizeof(int *));
    
    for (i = 0; i < m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));//(size of column in each row)
        C[i] = (int *)malloc(q * sizeof(int));
    }

    for (i = 0; i < p; i++) {
        B[i] = (int *)malloc(q * sizeof(int));
    }

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize matrix C with zeros
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrices A and B
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix C
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < m; i++) {
        free(A[i]);
        free(C[i]);
    }
    for (i = 0; i < p; i++) {
        free(B[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
