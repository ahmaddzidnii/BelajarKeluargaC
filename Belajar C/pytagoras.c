/*MEMBUAT PROGRAM SEDERHANA UNTUK MENGHITUNG PYTAGORAS DALAM
SEBUAH SEGITIGA

======================================================

TUGAS ALGORITMA MENGGUNAKAN BAHASA C


*/

/*
catatan:
Untuk mencetak output melalui function prinf harus menambahkan
format specifier untuk tipe data contohnya : printf("Rata-rata Nilai: %d\n", rata_rata);

1. Integer (%d)
2. Floating-point number (%f)
3. String (%s)
4. Double (%lf)

operator "&" digunakan untuk mendapatkan alamat memori dari suatu variabel.
*/

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