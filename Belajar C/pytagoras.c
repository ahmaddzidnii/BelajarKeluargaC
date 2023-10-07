#include <stdio.h>
#include <math.h>

int main()
{
    float sisi_tinggi, sisi_alas, sisi_miring;
    printf("Masukkan sisi alas: ");
    scanf("%f", &sisi_alas);
    printf("Masukkan sisi tinggi: ");
    scanf("%f", &sisi_tinggi);

    sisi_miring = sqrt(sisi_alas * sisi_alas + sisi_tinggi * sisi_tinggi);
    printf("sisi miring adalah: %f\n", sisi_miring);
}