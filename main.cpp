#include <iostream>

using namespace std;

class Empleado
{
private:
    string nombre;
    string apellido;
    double salario;
public:
    Empleado(string, string, double);
    void ObtenerNombre();
    void ObtenerApellido();
    double ObtenerSalario();
    double ComprobarSalario();
};

Empleado::Empleado(string _nombre, string _apellido, double _salario)
{
    nombre = _nombre;
    apellido = _apellido;
    salario = _salario;
}

void Empleado::ObtenerNombre()
{
    cout << nombre <<endl;
}

void Empleado::ObtenerApellido()
{
    cout << apellido << endl;
}

double Empleado::ObtenerSalario()
{
    cout << salario << endl;
}

double Empleado::ComprobarSalario()
{
    if (salario < 1)
        return 0;
    else
        return salario;
}

int main()
{
    Empleado e1("Raul", "Valdivia", 12000.00);
    Empleado e2("Fernando", "Rodriguez", 14000.50);
    e1.ObtenerNombre();
    e1.ObtenerApellido();
    e1.ObtenerSalario();
    e2.ObtenerNombre();
    e2.ObtenerApellido();
    e2.ObtenerSalario();
    return 0;
}
