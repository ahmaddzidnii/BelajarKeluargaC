/*MEMBUAT PROGRAM SEDERHANA UNTUK MENAMPILKAN NILAI MINIMUM
DALAM UJIAN MHS

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
    int i, jum;
    float data, min;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jum);

    printf("Masukkan data ke-1: "); // Tampilkan pesan untuk data pertama
    scanf("%f", &min);              // Inisialisasi min dengan data pertama

    for (i = 2; i <= jum; i++)
    {
        printf("Masukkan data ke-%d: ", i);
        scanf("%f", &data);

        if (data < min)
        {
            min = data;
        }
    }

    printf("Nilai minimum dari data adalah: %f\n", min);

    return 0;
}
