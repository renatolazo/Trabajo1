#include <iostream>

using namespace std;

/*int main()
{
    int n;
    cin >> n;
    int c=0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            c++;
            }
        }
    if(c>2)
        cout << "El numero no es primo" << endl;
    else
        cout << "El numero es primo" << endl;
    return 0;
}*/

/*int main()
{
    int c, n, p;
    for(n = 1 ; n <= 100 ; n++){
        p = 1;
        c = 2;
        while(c <= n / 2){
            if (n % c == 0)
                p = 0;
            c++;
        }
        if(p)
            cout << n << endl;
    }
    return 0;
}*/

/*int main()
{
    int n;
    cin >> n;
    int d = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            d += i;
        }
    if(n == d)
        cout << n << " es perfecto" << endl;
    else
        cout << n << " no es perfecto" << endl;
    return 0;
}*/
