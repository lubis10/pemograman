#include <iostream>
using namespace std;
void kd_matakuliah(){
    string kd_matakuliah;
    cout << "Masukan Kode Mata Kuliah : ";
    getline(cin, kd_matakuliah);
    cout << "Masukan Kode Mata Kuliah : " << kd_matakuliah << endl;
};

void nama_matakul(){
    string nama_matkul;
    cout << "Masukan Nama Mata Kuliah: ";
    getline(cin, nama_matkul);
    cout << "Masukan Nama Mata Kuliah: " << nama_matkul << endl;
};

int main(){
    kd_matakuliah();
    nama_matakul();
   return 0;
}