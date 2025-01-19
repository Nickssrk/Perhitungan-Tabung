// Judul: Tabung
#include <iostream>
#include <cmath>
using namespace std;

//kamus

// Abstract Data Type (ADT) untuk tabung
struct Tabung {
    double r;  // Jari-jari
    double t;  // Tinggi
    double phi = 3.14;  // Konstanta phi
};

// Fungsi untuk menghitung volume tabung
double hitung_volume(Tabung tabung) {
    return tabung.phi * pow(tabung.r, 2) * tabung.t;
}

// Fungsi untuk menghitung keliling lingkaran dasar tabung
double hitung_keliling(Tabung tabung) {
    return 2 * tabung.phi * tabung.r;
}

// Fungsi untuk menghitung luas permukaan tabung
double hitung_luas(Tabung tabung) {
    return 2 * tabung.phi * tabung.r * (tabung.r + tabung.t);
}

// Fungsi untuk menghitung luas kedua tutup tabung
double hitung_luas_tutup(Tabung tabung) {
    return 2 * tabung.phi * pow(tabung.r, 2);
}
//fungsi validasi input
double validasi_input(const string& prompt)
{
    double nilai;
    while (true){
        cout<<prompt;
        cin>> nilai;

        //validasi input
        if(cin.fail()|| nilai<0)
        {
            cin.clear();
            cin.ignore();
            cout<< "input tidak valid"<<endl;
        }
        else {
            return nilai;
        }
    }
}

// Prosedur untuk mencetak hasil
void cetak_hasil(double volume, double keliling, double luas, double luas_tutup) {
    cout << "Hasil Perhitungan Tabung: " << endl;
    cout << "Volume Tabung         : " << volume << endl;
    cout << "Keliling Lingkaran    : " << keliling << endl;
    cout << "Luas Permukaan Tabung : " << luas << endl;
    cout << "Luas Kedua Tutup      : " << luas_tutup << endl;
}
//deskripsi:

int main() {
    Tabung tabung;//deklarasi lokal

    // Input jari-jari dan tinggi tabung
    cout << "Menghitung Tabung" << endl;
    tabung.r= validasi_input("Masukkan jarijari(r): ");
    tabung.t= validasi_input("Masukkan tinggi(t): ");

    // Hitung nilai-nilai yang diperlukan
    double volume = hitung_volume(tabung);
    double keliling = hitung_keliling(tabung);
    double luas = hitung_luas(tabung);
    double luas_tutup = hitung_luas_tutup(tabung);

    // memanggil prosedur Cetak_hasil
    cetak_hasil(volume, keliling, luas, luas_tutup);

    return 0;
}
