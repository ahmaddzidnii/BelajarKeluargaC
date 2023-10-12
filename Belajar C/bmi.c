/*MEMBUAT PROGRAM SEDERHANA UNTUK MENGHITUNG BMI( Body Mass Index )
NILAI MHS

======================================================

TUGAS ALGORITMA INI MENGGUNAKAN BAHASA C


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
    // Mendeklaaraasikan variabel yang dibutuhkan
    float tinggi_badan, berat_badan, bmi;

    // Membuat input berupa tinggi badan dan berat badan
    printf("Masukkan tinggi badan anda dalam meter (m) :");
    scanf("%f", &tinggi_badan);
    printf("Masukkan berat badan anda dalam kilogram (Kg) :");
    scanf("%f", &berat_badan);

    // Melakukan operasi perhitungan dengan menggunakan rumus BMI
    float tinggi_badan_kuadrat = tinggi_badan * tinggi_badan;
    bmi = berat_badan / tinggi_badan_kuadrat;

    // Memunculkan output hasil perhitungan kedalam console terminal
    printf("BMI (Body Mass Index) anda adalah : %f\n", bmi);
}