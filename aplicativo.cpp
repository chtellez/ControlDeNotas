#include <iostream>
#include <list>
using namespace std;


class Estudiante {

    public:
        string Nombre;
        float Nota;

};

class Materia
{
    public:
        string Nombre;
        float Nota;
        string Tematica;
};

/// @brief Imprime en consola un mensaje.
/// @param message Mensaje que se desea imprimir en consola.
void PrintService(string message){

    cout<<message<<endl;

};


/// @brief Este servicio imprime una lista de mensajes
/// @param messages debe ser de tipo list<string>{}
void PrintService(const list<string>& messages) {
    for (const auto& porCadaMensajes : messages) {
        cout << porCadaMensajes;
    }
    cout << endl;
}


/// @brief Formatos de decoracion para el texto. 
/// @param type 1:"=", 2:"*"
void MessageDecorationService(int type) {

    switch (type)
    {
    case 1:
        cout<<"================================================================="<<endl;
        break;
    case 2:
        cout<<"*****************************************************************"<<endl;
        break;
    default:
        break;
    }

};

/// @brief "Da la bienvenida al programa."
void Welcome(){

    MessageDecorationService(1);
    PrintService("Hola, Bienvenido a tu super aplicativo de notas");
    MessageDecorationService(1);


};

float PromedioNotas(Materia a1, Materia a2, Materia a3){

    return (a1.Nota + a2.Nota + a3.Nota)/3;
    
}


int main(){

    Estudiante estudiante1;
    Materia asignatura1, asignatura2, asignatura3;

    asignatura1.Nombre = "Español";
    asignatura2.Nombre = "Matematicas";
    asignatura3.Nombre = "Ingles";


    Welcome();
    PrintService("Ingrese el nombre del estudiante");
    cin>>estudiante1.Nombre;
    PrintService({"Ingrese la nota de ", asignatura1.Nombre});
    cin>>asignatura1.Nota;
    PrintService({"Ingrese la nota de ", asignatura2.Nombre});
    cin>>asignatura2.Nota;
    PrintService({"Ingrese la nota de ", asignatura3.Nombre});
    cin>>asignatura3.Nota;
    PrintService(list<string>{"El promedio del estudiante ", 
        estudiante1.Nombre, 
        " es: ", 
        to_string(PromedioNotas(asignatura1,asignatura2,asignatura3))});


    
    return 0;

};