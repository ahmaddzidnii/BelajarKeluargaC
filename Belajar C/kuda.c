#include <stdio.h>

int main()
{
    int speeds[5]; // Membuat array untuk menampung kecepatan kuda-kuda
    int i;

    // Meminta pengguna untuk memasukkan kecepatan masing-masing kuda
    for (i = 0; i < 5; i++)
    {
        printf("Masukkan kecepatan kuda %d dalam (km/h): ", i + 1);
        scanf("%d", &speeds[i]);
    }

    int maxSpeed = speeds[0]; // Mengasumsikan kuda pertama memiliki kecepatan tertinggi
    int winner = 1;           // Mengasumsikan kuda pertama sebagai pemenang

    // Mencari kuda dengan kecepatan tertinggi
    for (i = 1; i < 5; i++)
    {
        if (speeds[i] > maxSpeed)
        {
            maxSpeed = speeds[i];
            winner = i + 1; // Pemenang adalah nomor kuda (indeks + 1)
        }
    }

    // Menampilkan pemenang dengan menggunakan switch
    switch (winner)
    {
    case 1:
        printf("Kuda 1 adalah pemenang dengan kecepatan %d\n", maxSpeed);
        break;
    case 2:
        printf("Kuda 2 adalah pemenang dengan kecepatan %d\n", maxSpeed);
        break;
    case 3:
        printf("Kuda 3 adalah pemenang dengan kecepatan %d\n", maxSpeed);
        break;
    case 4:
        printf("Kuda 4 adalah pemenang dengan kecepatan %d\n", maxSpeed);
        break;
    case 5:
        printf("Kuda 5 adalah pemenang dengan kecepatan %d\n", maxSpeed);
        break;
    default:
        printf("Tidak ada pemenang yang valid.\n");
    }

    return 0;
}
