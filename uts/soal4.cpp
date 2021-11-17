#include <iostream>
using namespace std;

int main()
{;
    int tahun_lahir;
    int tahun_sekarang;
    int usia;
    cout << "Masukan tahun lahir kalian = " ;
    cin >> tahun_lahir;
    cout << "Masukan tahun sekarang = " ;
    cin >> tahun_sekarang;

    usia = tahun_sekarang - tahun_lahir ;
    cout <<  "Berarti Usia kalian sekarang adalah " << usia << " tahun";
}