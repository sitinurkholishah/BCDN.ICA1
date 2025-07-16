#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nomor, tanggal;
    int harga, total;
    char pilihan;

    cout << "=== Program Reservasi Hotel ===\n";
    cout << "Masukkan Nama Pemesan: ";
    getline(cin, nama);
    cout << "Masukkan nomor kamar: ";
    getline(cin, nomor);
    cout << "Masukkan Tanggal Reservasi: ";
    getline(cin, tanggal);
    cout << "Masukkan Harga Kamar: Rp ";
    cin >> harga;
    cout << "Apakah Anda ingin menambahkan sarapan? (y/n): ";
    cin >> pilihan;

    switch (pilihan) {
        case 'y':
            cout << "\n=== Welcom To Hotel Dejavu! ===\n";
            cout << "================================\n";
            cout << "nama: " << nama << endl;
            cout << "nomor kamar: " << nomor << endl;
            cout << "Tanggal Reservasi: " << tanggal << endl;
            cout << "Sarapan ditambahkan dengan biaya tambahan Rp 50.000.\n";
            cout << "Harga kamar: Rp " << harga << endl;
            total = harga + 50000; 
            cout << "Total Harga dengan Sarapan: Rp " << total << endl; 
            cout << "================================\n";
            cout << "Terima kasih telah memilih Hotel Dejavu!\n";
            break;
        case 'n':
            cout << "\n=== Welcom To Hotel Dejavu! ===\n";
            cout << "================================\n";
            cout << "nama: " << nama << endl;
            cout << "nomor kamar: " << nomor << endl;
            cout << "Tanggal Reservasi: " << tanggal << endl;
            cout << "Sarapan tidak ditambahkan.\n";
            cout << "Total Harga: Rp " << harga << endl;
            cout << "================================\n";
            cout << "Terima kasih telah memilih Hotel Dejavu!\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
    }
}