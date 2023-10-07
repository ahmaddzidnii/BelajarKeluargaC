#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    char nama[100];
    char nim[10];
    int semester;
    float nilai_algoritma, nilai_kalkulus, nilai_basis_data, nilai_olahraga;

    cout << "     Hitung Nilai Mahasiswa     " << endl;
    cout << "Masukkan nama\t:";
    cin.getline(nama, sizeof(nama));
    cout << "Masukkan NIM\t:";
    cin.getline(nim, sizeof(nim));

    cout << "Semester\t:";
    cin >> semester;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan buffer

    cout << "Nilai Algoritma\t:";
    cin >> nilai_algoritma;
    cout << "Nilai Kalkulus\t:";
    cin >> nilai_kalkulus;
    cout << "Nilai Basis Data:";
    cin >> nilai_basis_data;
    cout << "Nilai Olahraga\t:";
    cin >> nilai_olahraga;
    cout << endl;

    cout << "Nilai Mahasiswa" << endl;
    cout << "Nama\t:" << nama << endl;
    cout << "NIM\t:" << nim << endl;
    cout << "Semester:"
         << semester;
    if (semester % 2 == 0)
    {
        cout << " (genap)" << endl;
    }
    else
    {
        cout << " (ganjil)" << endl;
    }
    cout << endl;

    cout << "    ====    NILAI    ====    " << endl;
    cout << "Nilai Algoritma\t:" << nilai_algoritma << endl;
    cout << "Nilai Kalkulus\t:" << nilai_kalkulus << endl;
    cout << "Nilai Basis Data:" << nilai_basis_data << endl;
    cout << "Nilai Olahraga\t:" << nilai_olahraga << endl;

    float total_nilai = nilai_algoritma + nilai_kalkulus + nilai_basis_data + nilai_olahraga;
    cout << "Total nilai\t:" << total_nilai << endl;
    float rata_rata = total_nilai / 4;
    cout << "Rata rata\t:" << rata_rata << endl;

    return 0;
}
