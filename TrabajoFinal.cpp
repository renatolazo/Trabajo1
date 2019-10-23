#include <iostream>

using namespace std;

//Base de Datos de "Mi Biblioteca"
//En este programa se intenta crear un software que permita a una persona buscar un libro, la
//persona podra usar filtros para poder encontrar mas rapido el libro deseado, ademas el usuario tendra
//la posibilidad de tener en una biblioteca virtual los libros que haya adquirido anteriormente

int main()
{
    int n, opcion;

    do
    {
        cout << "\n   1. Ingresar" << endl;
        cout << "\n   2. Calcular la mitad de un numero entero" << endl;
        cout << "\n   3. Calcular el cuadrado de un numero entero" << endl;
        cout << "\n   4. Salir" << endl;
        cout << "\n\n   Introduzca opcion (1-4): " << endl;

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: cout << "\n   Introduzca su nombre " << endl;
                    string a;
                    cin >> a;
                    if (a == "Renato")
                        cout << "Bienvenido Renato" << endl;
                    else
                        cout << "Ese nombre no esta registrado en la base de datos" << endl;
                    break;

            case 2: cout << "\n   Introduzca un numero entero " << endl;
                    int b;
                    cin >> b;
                    cout << "\n   La mitad de " << b << " es " << b / 2 << endl;
                    break;

            case 3: cout << "\n   Introduzca un numero entero " << endl;
                    int c;
                    cin >> c;
                    cout << "\n   El cuadrado de " << c << " es " << pow( c, 2 ) << endl;
                    break;
         }

         /* Fin del anidamiento */

    } while ( opcion != 4 );

    return 0;
}

class Libro
{
private:
    int fecha;
    string autor;
    string genero;
    string editorial;
public:
    Libro(int, string, string, string);
    void personaje();
    void paginas();
};

class Persona
{
private:
    int edad;
    string nombre;
public:
    Persona(int , string);
    int ObtenerEdad();
    void leer();
    void obtener();
};

class Libreria
{
private:
    string calle;
    string ciudad;
public:
    Libreria(string, string);
    void sitio();
    void lugar();
};

Libro::Libro(int _fecha, string _autor, string _genero, string _editorial)
{
    fecha = _fecha;
    autor = _autor;
    genero = _genero;
    editorial = _editorial;
}

void Libro::personaje()
{
    cout << "El personaje del libro es Arturo" << endl;
}

void Libro::paginas()
{
    cout << "El libro contiene " << 500 << " paginas" << endl;
}

Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << nombre << " esta leyendo el libro" << endl;
}

void Persona::obtener()
{
    cout << "La persona de edad " << edad << " obtuvo el libro" << endl;
}

int Persona::ObtenerEdad()
{
    return edad;
}

Libreria::Libreria(string _calle, string _ciudad)
{
    calle = _calle;
    ciudad = _ciudad;
}

void Libreria::sitio()
{
    cout << "El libro se encuentra en la calle " << calle << endl;
}

void Libreria::lugar()
{
    cout << "El libro se encuentra en la ciudad " << ciudad << endl;
}

int main()
{
    int p1_int;
    string p1_str;
    cout << "escriba su edad y su nombre: ";
    cin >> p1_int;
    cin >> p1_str;
    Libreria li1 = Libreria("calle1", "ciudad1");
    Libreria li2 = Libreria("calle2", "ciudad2");
    Persona p1 = Persona(p1_int, p1_str);
    Persona p2(15, "Sophia");
    Libro l1 = Libro(2001, "Renato", "Accion", "CSIC");
    Libro l2(1999, "Maria", "Comedia", "CSIC");
    Libro l3(1999, "Maria", "Comedia", "CSIC");
    Libro l4(1999, "Maria", "Comedia", "CSIC");
    Libro l5(1999, "Maria", "Comedia", "CSIC");
    Libro l6(1999, "Maria", "Comedia", "CSIC");
    Libro l7(1999, "Maria", "Comedia", "CSIS");
    Libro l8(1999, "Maria", "Comedia", "CSIC");
    Libro l9(1999, "Maria", "Comedia", "CSIC");
    Libro l10(1999, "Maria", "Comedia", "CSIC");
    li1.sitio();
    li2.lugar();
    if (p1.edad <= 60){
        p1.leer();
        p1.obtener();
    }
    p1.leer();
    p2.obtener();
    l1.personaje();
    l2.paginas();
    l3.personaje();
    l4.paginas();
    l5.personaje();
    l6.paginas();
    l7.personaje();
    l8.paginas();
    l9.personaje();
    l10.paginas();
    /*if(Libro(_fecha)<1800 and Libro(_fecha)>2019)
        cout << "Fecha incorrecta" << endl;*/
    return 0;
}
