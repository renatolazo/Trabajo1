#include <iostream>

using namespace std;

//Base de Datos de "Mi Biblioteca"
//En este programa se intenta crear un software que permita a una persona buscar un libro, la
//persona podra usar filtros para poder encontrar mas rapido el libro deseado, ademas el usuario tendra
//la posibilidad de tener en una biblioteca virtual los libros que haya adquirido anteriormente

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
    Libreria li1 = Libreria("calle1", "ciudad1");
    Libreria li2 = Libreria("calle2", "ciudad2");
    Persona p1 = Persona(19, "Juan");
    Persona p2(15, "Sophia");
    Libro l1 = Libro(2001, "Renato", "Accion", "Dragonforce");
    Libro l2(1999, "Maria", "Comedia", "KFC");
    Libro l3(1999, "Maria", "Comedia", "KFC");
    Libro l4(1999, "Maria", "Comedia", "KFC");
    Libro l5(1999, "Maria", "Comedia", "KFC");
    Libro l6(1999, "Maria", "Comedia", "KFC");
    Libro l7(1999, "Maria", "Comedia", "KFC");
    Libro l8(1999, "Maria", "Comedia", "KFC");
    Libro l9(1999, "Maria", "Comedia", "KFC");
    Libro l10(1999, "Maria", "Comedia", "KFC");
    li1.sitio();
    li2.lugar();
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
