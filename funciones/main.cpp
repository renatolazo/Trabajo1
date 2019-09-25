#include <iostream>

using namespace std;

/*void ImprimirDigitos(int n)
{
    int a, b, c, d, e;
    a = n / 10000;
    b = (n - a * 10000) / 1000;
    c = (n - (a * 10000 + b * 1000)) / 100;
    d = (n - (a * 10000 + b * 1000 + c * 100)) / 10;
    e = n % 10;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << e << endl;
}

int main()
{
    int n;
    cin >> n;
    ImprimirDigitos(n);
}*/

/*void Digitos(int n)
{
    int x = 0;
    while(n > 0){
        n = n / 10;
        x++;
    }
    cout << "el numero posee " << x << " digitos" << endl;
}

int main()
{
    int n;
    cin >> n;
    Digitos(n);
}*/

/*int Palindromo(int n)
{
    int a, a1, b, b1, c, c1, d, d1, e;
    a = n / 10000;
    a1 = n % 10000;
    b = n % 10;
    if(a =! b)
        cout << "No es palindrome" << endl;
    else{
        c = a1 / 1000;
        c1 = a1 % 1000;
        d = c1 / 100;
        d1 = c1 % 100;
        e = d1 / 10;
    }
    if(c == e)
        cout << "Si es palindrome" << endl;
    else
        cout << "No es palindrome" << endl;
}

int main()
{
    int n;
    cin >> n;
    Palindromo(n);
}*/

/*int fibonacci(int n)
{
    if(n < 2)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    fibonacci(n);
    for(int i = 0; i <= n; i++)
        cout <<fibonacci(i) << endl;
}*/

/*void Caracter(char n)
{
    if(n > 47 and n < 58)
        cout << "Es un numero" << endl;
    else
        cout << "No es un numero" << endl;
}

int main()
{
    char n;
    cin >> n;
    Caracter(n);
}*/

/*void Caracter2(char n)
{
    int x;
    int y = static_cast<int>(n);
    if(y > 97 and y < 123){
        cout << "Es minuscula" << endl;
        x = y - 32;
        char p = static_cast<char>(x);
        cout << p << endl;
    }
    if(n > 64 and n < 91){
        cout << "Es mayuscula" << endl;
        x = y + 32;
        char p = static_cast<char>(x);
        cout << p <<endl;
    }
}

int main()
{
    char n;
    cin >> n;
    Caracter2(n);
}*/
