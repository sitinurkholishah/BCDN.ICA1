#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, kelas;
    float jam;

    cout << "=== program jam datang siswa ===\n";
    cout << "Masukkan Nama Siswa: ";
    getline(cin, nama);
    cout << "Masukkan Kelas Siswa: ";
    getline(cin, kelas);            
    cout << "Masukkan Jam Datang Siswa: ";
    cin >> jam;
    cout << "=================================\n";

    if (jam <= 7.30) {
        cout << "siswa " << nama << " dari kelas " << kelas << " datang tepat waktu.\n";
    } else {
        cout << "siswa " << nama << " dari kelas " << kelas << " datang terlambat.\n";
    }
}