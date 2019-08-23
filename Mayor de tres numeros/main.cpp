#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "numero a: " << endl;
    cin >> a;
    cout << "numero b: " << endl;
    cin >> b;
    cout << "numero c: " << endl;
    cin >> c;
    if (a >= b and a >= c)
        cout << "el mayor es " << a << endl;

    if (b >= a and b >= c)
        cout << "el mayor es " << b << endl;

    if (c >= a and c >=b)
        cout << "el mayor es " << a << endl;

    return 0;
}
