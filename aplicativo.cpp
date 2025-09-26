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


void PrintService(string message){

    cout<<message<<endl;

};

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


void Welcome(){

    MessageDecorationService(1);
    PrintService("Hola, Bienvenido a tu super aplicativo de notas");
    MessageDecorationService(1);


};


int main(){

    Welcome();

    return 0;

};