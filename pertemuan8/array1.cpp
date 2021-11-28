#include <iostream>
#include <string>
using namespace std;

int main()
{
    int angka[5]={10,20,30,40,50};
    int batas;
    cout << "Masukan array yang ingin dipilih : ";
    cin >> batas;
    for(int i = 0; i< batas; i++)
    {
        cout << "Nilai dari index ke- ["<<i<<"] : " << angka[i];
        cout << endl;
    }
}