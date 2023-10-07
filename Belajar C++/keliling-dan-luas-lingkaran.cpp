#include <iostream>
#include <cmath>
using namespace std;

double luasLingakran(int jari_jari) {
    const double phi = 3.14;
    double luas = phi * pow(jari_jari, 2);
    return luas;
}
double KelilingLingakran(int jari_jari) {
    const double phi = 3.14;
    double keliling = phi * (jari_jari*2);
    return keliling;
}

int main() {
    int jari_jari = 10;
    double luas = luasLingakran(jari_jari);
    double keliing= KelilingLingakran(jari_jari);
    cout << "Keliling lingkaran yang ber jari jari "<<jari_jari << " adalah " << keliing <<endl;
    cout << "luas lingkaran yang ber jari jari "<<jari_jari << " adalah " << luas <<endl;

    return 0;
}
