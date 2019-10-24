#include <iostream>

using namespace std;

int tam_cad(char cadena[])
{
    int tam = 0;
    for(int i = 0; cadena[i] != '\0'; i++)
        tam++;
    return tam;
}
/*int main()
{
    char cadena[] = "hola";
    cout << tam_cad(cadena) << endl;
}*/


/*int tam_rec(char *cadena)
{
    if(*cadena == '\0')
        return 0;
    return 1 + tam_rec(++cadena);
}
int main()
{
    char cadena[] = "hola";
    cout << tam_rec(cadena) << endl;
}*/


/*void invertir(char *cadena)
{
    char *fin = cadena + tam_cad(cadena) - 1;
    char t;
    while(fin > cadena){
        t = *cadena;
        *cadena = *fin;
        *fin = t;
        fin--;
        cadena++;
    }
}
int main()
{
    char cadena[] = "hola";
    char *fin = cadena + tam_cad(cadena) - 1;
    cout << cadena << endl;
    invertir(cadena);
    cout << cadena << endl;
}*/


/*void invertir_rec(char *cadena, char *fin)
{
    if(cadena > fin)
        return;
    char t = *cadena;
    *cadena = *fin;
    *fin = t;
    invertir_rec(++cadena, --fin);
}
int main()
{
    char cadena[] = "hola";
    char *fin = cadena + tam_cad(cadena) - 1;
    cout << tam_cad(cadena) << endl;
    invertir_rec(cadena, fin);
    cout << cadena << endl;
}*/


/*ool palindromo_it(char *cadena, char *fin)
{
    while(fin >= cadena){
        if(*fin != *cadena)
            return 0;
        fin--;
        cadena++;
    }
    return 1;
}
int main()
{
    char cadena[] = "hoh";
    char *fin = cadena + tam_cad(cadena) - 1;
    cout << palindromo_it(cadena, fin) << endl;
}*/

bool palindromo_rec(char *cadena1, char *fin1)
{
    if(*fin1 == *cadena1){
        fin1--;
        cadena1++;
        palindromo_rec(cadena1, fin1);
        return 1;
    }
    return 0;
}

int main()
{
    char cadena1[] = "reconocer";
    char *fin1 = cadena1 + tam_cad(cadena1) - 1;
    cout << palindromo_rec(cadena1, fin1) << endl;
}
