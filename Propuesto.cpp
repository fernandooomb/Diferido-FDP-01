#include <iostream>
using namespace std;
#include<windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int edad;
        cout<<"Ingrese una edad: ";
        cin>>edad;
            if (edad>=0 && edad<13){
                cout<<"Niño";
            }
            else if(edad>=13 && edad<18){
                cout<<"Adolecente";
            }
            else if(edad>=18 && edad<=64){
                cout<<"Adulto";
            }
            else{ 
                cout<<"Anciano";
            }

            
        
return 0;
}