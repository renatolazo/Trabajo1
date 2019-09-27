#include <iostream>

using namespace std;

/*void imprimir(int arr[], int tam)
{
    for(int i = 0; i < tam; i++)
        cout << arr[i] << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    imprimir(arr, 5);
}*/

/*int sumar(int arr[], int tam)
{
    int suma = 0;
    for(int i = 0; i < tam; i++)
        suma += arr[i];
    return suma;
}

int main()
{
    int arr[4] = {6, 14, 8, 18};
    cout << sumar(arr, 4);
}*/

/*int sumar2(int arr[], int tam)
{
    int suma = 0;
    int i = 0;
    while(i < 5)
        suma += arr[i++];
    cout << suma << endl;
}

int main()
{
    int arr[5] = {2, 4, 18, 7, 13};
    sumar2(arr, 5);
}*/

int swap(int &x, int &y){
int a = x;
x = y;
y = a;
}

/*int invertir(int arr[], int tam)
{
    for(int i = 0; i < tam / 2; i++){
        swap(arr[i], arr[tam-1-i]);
    }
}*/

int invertir2(int arr[], int tam)
{
    int i = 0;
    while(i < tam / 2){
        swap(arr[i++], arr[tam-1-i]);
        return invertir2(arr[i], arr[tam-1+i]);
    }
}

int main()
{
    int arr[4] = {1, 2, 3, 4};

    imprimir(arr, 4);
    invertir2(arr, 4);
    imprimir(arr, 4);
}

