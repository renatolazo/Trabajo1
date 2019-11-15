#include <iostream>

using namespace std;

class Estudiante
{
private:
    string nombre;
    string apellido;
    string codigo;
public:
    Estudiante(string, string, string);
    void ObtenerNombre();
    void ObtenerApellido();
    void ObtenerCodigo();
};

Estudiante::Estudiante(string _nombre, string _apellido, string _codigo)
{
    nombre = _nombre;
    apellido = _apellido;
    codigo = _codigo;
}

void Estudiante::ObtenerNombre()
{
    cout << nombre << endl;
}

void Estudiante::ObtenerApellido()
{
    cout << apellido << endl;
}

void Estudiante::ObtenerCodigo()
{
    cout << codigo << endl;
}

int main()
{
    Estudiante e1("Raul", "Lopez", "191-10-45293");
    Estudiante e2("Diana", "Valencia", "191-10-44607");
    e1.ObtenerNombre();
    e1.ObtenerApellido();
    e1.ObtenerCodigo();
    cout << endl;
    e2.ObtenerNombre();
    e2.ObtenerApellido();
    e2.ObtenerCodigo();
}
