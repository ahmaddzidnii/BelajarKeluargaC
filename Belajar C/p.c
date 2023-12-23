// #include <stdio.h>
// int main()
// {
//     int A[3][3], B[3][3], C[3][3];
//     int i, j;
//     printf("\n\t\tMasukkan elemen matriks A:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     printf("\n\t\tMasukkan elemen matriks B:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &B[i][j]);
//         }
//     }
//     // Penjumlahan matriks
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
//     printf("\n\t\tHasil penjumlahan matriks:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d", C[i][j]);
//         }
//         printf("\n");
//     }
//     // Pengurangan matriks
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             C[i][j] = A[i][j] - B[i][j];
//         }
//     }
//     printf("\n\t\tHasil pengurangan matriks:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d", C[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    // Input matriks A
    printf("\n\t\tMasukkan elemen matriks A:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matriks B
    printf("\n\t\tMasukkan elemen matriks B:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan matriks
    printf("\n\t\tHasil penjumlahan matriks:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Pengurangan matriks
    printf("\n\t\tHasil pengurangan matriks:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}