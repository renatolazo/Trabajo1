#include <iostream>
#include <string>

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
	double ObtenerSalarioAnual();
	double ReducirSalario();
	double ReducirSalarioAnual();
	/*void tostring();*/
};

Empleado::Empleado(string _nombre, string _apellido, double _salario){
	nombre = _nombre;
	apellido = _apellido;
	salario = _salario;
}

void Empleado::ObtenerNombre(){
    cout << nombre << endl;
}

void Empleado::ObtenerApellido(){
    cout << apellido << endl;
}

double Empleado::ObtenerSalario(){
    cout << salario << endl;
}

double Empleado::ObtenerSalarioAnual(){
	cout << salario * 12 << endl;
}

double Empleado::ReducirSalario(){
	cout << salario * 0.9 << endl;
}

double Empleado::ReducirSalarioAnual(){
	cout << salario*0.9*12 << endl;
}

int main()
{
	Empleado e1("Mauricio", "Perez", 500.50);
	Empleado e2("Fernanda", "Monroy", 800.75);
	e1.ObtenerNombre();
	e1.ObtenerApellido();
	e1.ObtenerSalario();
	cout << endl;
	e2.ObtenerNombre();
	e2.ObtenerApellido();
	e2.ObtenerSalario();
	cout << endl;
	e1.ObtenerSalarioAnual();
	e2.ObtenerSalarioAnual();
	cout << endl;
	e1.ReducirSalario();
	e2.ReducirSalario();
	cout << endl;
	e1.ReducirSalarioAnual();
	e2.ReducirSalarioAnual();
}
