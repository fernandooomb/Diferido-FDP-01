#include <iostream>
using namespace std;

int main(){
    float nota;

        cout<<"Ingrese la nota del examen: ";
        cin>>nota;

        if (nota >= 90){
            cout<<"Excelente, aprobado con honores!";
        }
        else if(nota>=89 || nota>=60){
            cout<<"Buen trabajo, aprobado!";
        }
        else{
            cout<<"Lo siento, no has aprobado. Necesitas estudiar mas";
        }
        
return 0;
}