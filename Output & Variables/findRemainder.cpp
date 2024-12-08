#include <iostream>
using namespace std;
int main()
{
    int a, b, q, r, z;
    cin >> a >> b;
    q = a / b;
    // a=(b*q)+r
    // r=a-(b*q)
    r = a - (b * q);
    cout << r << endl;
    z = a % b; // modulus operator
    cout << z;
}