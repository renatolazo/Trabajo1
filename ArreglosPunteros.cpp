#include <iostream>

using namespace std;

void imprimirArreglos(int *arr, int tam)
{
    while(tam--){
        cout << *arr << " ";
        arr ++;
    }
    cout << endl;
}

/*int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int tam = 5;
    imprimirArreglos(x, tam);
}*/

/*int sumar(int *arr, int tam)
{
    int suma = 0;
    while(tam--){
        suma += *arr;
        arr++;
    }
    return suma;
}

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    cout << sumar(x, 5) << endl;
}*/

/*int sumar2(int *arr, int tam)
{
    if(tam == 1)
        return *arr;
    return *arr + sumar2(arr + 1, tam - 1);
}

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    cout << sumar2(x, 5) << endl;
}*/

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int invertir(int *arr, int tam)
{
    if(tam/2 == 0){
        cout << *arr << " ";
    }
    else{
        swap(*arr, arr[tam-1]);
        *arr++;
        tam--;
    }
}

int main()
{
    int x[5] = {1, 2, 3, 4, 5}
    imprimirArreglos(arr, 5);
    invertir(arr, 5);
    imprimirArreglos(arr, 5);
}
