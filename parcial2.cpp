#include<iostream>
#include<mysql.h>
#include"conexion.h"
#include"estudiante.h"
using namespace std;
int main()
{
    int op;
    cout << "********** Bienvenido **********" << endl;
    cout << "1. Mostrar Datos" << endl;
    cout << "2. Ingresar Nuevo Dato" << endl;
    cout << "3. Modificar Datos" << endl;
    cout << "4. Eliminar Datos" << endl;
    cout << "Opcion: ";
    cin >> op;
    if (op == 1) {
        estudiante e = estudiante();
        e.leer();
    }
    if (op == 2) {
        string nombre, apellido, direccion, genero, fecha, email;
        int telefono, id, carnet;
        cout << "Ingrese Nombre" << endl;
        cin >> nombre;
        cout << "Ingrese Apellido" << endl;
        cin >> apellido;
        cout << "Ingrese Direccion" << endl;
        cin >> direccion;
        cout << "Ingrese Email" << endl;
        cin >> email;
        cout << "Ingrese N°. de Telefono" << endl;
        cin >> telefono;
        cout << "Ingrese N°. de Carnet" << endl;
        cin >> carnet;
        cout << "Ingrese el Genero (Mascululino, Femenino) " << endl;
        cin >> genero;
        cout << "Ingrese la Fecha de Nacimiento" << endl;
        cin >> fecha;
        estudiante e = estudiante(nombre, apellido, direccion, genero, email, fecha, telefono, carnet);
        e.crear();
        system("PAUSE");
    }
    if (op == 3) {
        string nombre, apellido, direccion, genero, fecha, email;
        int telefono, id, carnet;
        cout << "Ingresar id que desea modificar" << endl;
        cin >> id;
        cout << "Ingrese Nombre" << endl;
        cin >> nombre;
        cout << "Ingrese Apellido" << endl;
        cin >> apellido;
        cout << "Ingrese Direccion" << endl;
        cin >> direccion;
        cout << "Ingrese Email" << endl;
        cin >> email;
        cout << "Ingrese N°. de Telefono" << endl;
        cin >> telefono;
        cout << "Ingrese N°. de carnet" << endl;
        cin >> carnet;
        cout << "Ingrese el Genero (Mascululino, Femenino) " << endl;
        cin >> genero;
        cout << "Ingrese la Fecha de Nacimiento" << endl;
        cin >> fecha;
        estudiante e = estudiante(nombre, apellido, direccion, genero, email, fecha, telefono, carnet);
        e.actualizar(id);
        system("PAUSE");
    }
    if (op == 4) {
        string nombre, apellido, direccion, genero, fecha, email;
        int telefono, id, carnet;
        cout << "Ingresar id que desea eliminar" << endl;
        cin >> id;
        estudiante e = estudiante();
        e.Eliminar(id);
        system("PAUSE");
    }
}
