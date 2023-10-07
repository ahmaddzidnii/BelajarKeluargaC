#include <stdio.h>

int main()
{
    int i, jum, data, min;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jum);

    printf("Masukkan data ke-1: "); // Tampilkan pesan untuk data pertama
    scanf("%d", &min);              // Inisialisasi min dengan data pertama

    for (i = 2; i <= jum; i++)
    {
        printf("Masukkan data ke-%d: ", i);
        scanf("%d", &data);

        if (data < min)
        {
            min = data;
        }
    }

    printf("Nilai minimum dari data adalah: %d\n", min);

    return 0;
}
