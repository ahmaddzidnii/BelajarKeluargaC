#include <stdio.h>

int main()
{
    int i, jum, data, min;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jum);

    for (i = 1; i <= jum; i++)
    {
        printf("Masukkan data ke-%d: ", i);
        scanf("%d", &data);

        min = data;

        if (data < min)
        {
            min = data;
        }
    }

    printf("Nilai minimum dari data adalah: %d\n", min);

    return 0;
}
