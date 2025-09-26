#include <iostream>
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



int main(){
    Estudiante Estudiante1;
    Estudiante Estudiante2;

    Estudiante1.Nombre = "Felipe";
    Estudiante2.Nombre = "Juan";

    cout << Estudiante1.Nombre << endl;
    cout << Estudiante2.Nombre << endl;

    return 0;

};