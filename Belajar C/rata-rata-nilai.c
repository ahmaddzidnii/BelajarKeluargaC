/*MEMBUAT PROGRAM SEDERHANA UNTUK MENGHITUNG RATA RATA
NILAI MHS

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

int main()
{
    int nilai_UTS, nilai_UAS, nilai_tugas, nilai_kuis;
    printf("Masukkan Nilai UTS: ");
    scanf("%d", &nilai_UTS);
    printf("Masukkan Nilai UAS: ");
    scanf("%d", &nilai_UAS);
    printf("Masukkan Nilai Tugas: ");
    scanf("%d", &nilai_tugas);
    printf("Masukkan Nilai Kuis: ");
    scanf("%d", &nilai_kuis);

    float rata_rata = (float)(nilai_UTS + nilai_UAS + nilai_tugas + nilai_kuis) / 4;

    // %d digunakan untuk memberi tahu fungsi printf bahwa ingin mencetak nilai dari variabel nilai sebagai bilangan bulat desimal (integer).
    printf("Rata-rata Nilai: %f\n", rata_rata);
}