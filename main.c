#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    float A[N][N], C[N * N];
    int i, j, k, n;
    float L, M, temp, c;

    // Отпечатване на условието на задачата
    printf("Program to process a 2D array A[N][N] of real numbers in the interval [-1000, 1000].\n");

    // Отпечатване на името на автора на програмата
    printf("Author: Boris\n");

    // Въвеждане на размерността на масива
    printf("Enter the dimension of the array: ");
    scanf("%d", &n);

    // Въвеждане на елементите на масива
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            do {
                printf("A[%d][%d] = ", i, j);
                scanf("%f", &c);
            } while (c < -1000 || c>1000);
            A[i][j] = c;
        }
    }

    // Отпечатване на входните данни
    printf("Input array:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%8.2f", A[i][j]);
        }
        printf("\n");
    }

    // Въвеждане на интервала [L;M]
    printf("Enter the interval [L;M]: ");
    scanf("%f %f", &L, &M);

    // Формиране на масива C
    k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] < L || A[i][j] > M)
            {
                C[k++] = A[i][j];
            }
        }
    }

    // Сортиране на масива C по големина
    for (i = 0; i < k - 1; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (C[i] > C[j])
            {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    // Отпечатване на получените резултати
    printf("Result array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%8.2f", C[i]);
    }
    printf("\n");

    return 0;
}
