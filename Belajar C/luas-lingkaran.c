#include <stdio.h>
#include <math.h>

int main()
{
    double luasLingkaran;
    int jari_jari;
    double pi;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%d", &jari_jari);

    // Memeriksa apakah pi adalah kelipatan 7
    if (jari_jari % 7 == 0)
    {
        pi = 22.0 / 7.0;
    }
    else
    {
        pi = 3.14;
    }

    // Menghitung luas lingkaran
    luasLingkaran = pi * jari_jari * jari_jari;

    printf("Luas lingkaran adalah: %lf\n", luasLingkaran);

    return 0;
}