#include <iostream>
using namespace std;

int main()
{
    int masukan;
    int angka[2][2];
    angka [0][0] = 10;
    angka [0][1] = 20;
    angka [1][0] = 30;
    angka [1][1] = 40;

    cout << "===========List Angka yang mau dicari===========\n";
    cout << "1. angka [0][0] = 10\n";
    cout << "2. angka [0][1] = 20\n";
    cout << "3. angka [1][0] = 30\n";
    cout << "4. angka [1][1] = 40\n";

    cout << "Pilih Array bilangan : ";
    cin >> masukan;
    if(masukan == 1)
    {
        cout << "Angka yang keluar adalah " << angka[0][0];
    }else if(masukan == 2)
    {
        cout << "Angka yang keluar adalah " << angka [0][1];
    }else if (masukan == 3)
    {
        cout << "Angka yang keluar adalah " << angka [1][0];
    }else if (masukan == 4)
    {
        cout << "Angka yang keluar adalah " << angka [1][1];
    }else
    {
        cout << "Yang anda masukan Salah";
    }
}