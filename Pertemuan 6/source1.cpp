#include<iostream>
using namespace std;

void kali(int& a, int& b, int& c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
int x=1, y=3, z=7;
kali(x,y,z);
cout << "x= " << x << endl;
cout << "y= " << y << endl;
cout << "z= " << z << endl;
return 0;
}