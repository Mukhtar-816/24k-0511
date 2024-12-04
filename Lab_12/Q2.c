#include <stdio.h>
#include <stdlib.h>

void findMultiplication(int **mat1, int **mat2, int **mat, int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            mat[i][j] = 0;
            for (int k = 0; k < m; ++k)
            {
                mat[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}

int main()
{
    int m, n, **mat1, **mat2, **mat;

    printf("Enter the number of rows and columns for matrices : ");
    scanf("%d %d", &m, &n);

    mat1 = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; ++i)
    {
        mat1[i] = (int *)malloc(n * sizeof(int));
    }

    mat2 = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i)
    {
        mat2[i] = (int *)malloc(m * sizeof(int));
    }

    mat = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; ++i)
    {
        mat[i] = (int *)malloc(m * sizeof(int));
    }

    printf("\nEnter the Elemets for matrix 1: \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the Elemets for matrix 2: \n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    findMultiplication(mat1, mat2, mat, m, n);

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);
    free(mat1);
    free(mat2);
}