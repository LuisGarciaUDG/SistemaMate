/*
Programa_9 sistema matematico
Estructura doble anidada
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 10 de febrero de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

float opcion1, opcion,a, b, c;

int main ()

{
system ("cls");
    cout << "\t\n **** SISTEMA MATEMATICO ****" << endl;
    cout<<"\n\n 1.- Operaciones basicas         ";
    cout<<"\n\n 2.- Area de figuras geometricas ";
    cout<<"\n\n 3.- Salir  ";
    cout<<"\n\n Elige una opcion                ";
    cin>>opcion1;

        if (opcion1==1)
        {
            system ("cls");
            cout << "\t\n **** OPERACIONES BASICAS ****" << endl;
            cout<<"\n\n 1.- Suma           ";
            cout<<"\n\n 2.- Resta          ";
            cout<<"\n\n 3.- multiplicacion ";
            cout<<"\n\n 4.- Division       ";
            cout<<"\n\n 5.- Atras          ";
            cout<<"\n\n Elige una opcion   ";
            cin>>opcion;

            if (opcion==1)
            {
            system ("cls");
            cout<<"\tLa suma";
            cout<<endl<<endl<<endl;
            cout<<"Dame el valor de A: ";
            cin>>a;
            cout<<endl;
            cout<<"Dame el valor de B: ";
            cin>>b;
            cout<<endl<<endl<<endl;
            c=a+b;
            cout<<"El resultado es:    ";
            cout<<c;
            cout<<endl<<endl;
            system ("pause");
            return main();
            }

            if(opcion==2)
            {
            system ("cls");
            cout<<"\tLa resta";
            cout<<endl<<endl<<endl;
            cout<<"Dame el valor de A: ";
            cin>>a;
            cout<<endl;
            cout<<"Dame el valor de B: ";
            cin>>b;
            cout<<endl<<endl<<endl;
            c=a-b;
            cout<<"El resultado es:    ";
            cout<<c;
            cout<<endl<<endl;
            system ("pause");
            return main();
            }
            if(opcion==3)
            {
            system ("cls");
            cout<<"\tLa Multiplicacion";
            cout<<endl<<endl<<endl;
            cout<<"Dame un numero:     ";
            cin>>a;
            cout<<endl;
            cout<<"Dame otro numero:   ";
            cin>>b;
            cout<<endl;
            c=a*b;
            cout<<endl<<endl;
            cout<<"El resultado es:    ";
            cout<<c;
            cout<<endl<<endl<<endl<<endl;
            system ("pause");
            return main();
            }

            if(opcion==4)

            {
            system ("cls");
            cout<<"\tLa Division       ";
            cout<<endl<<endl<<endl;
            cout<<"Dame un numero:     ";
            cin>>a;
            cout<<endl;
            cout<<"Dame otro numero:   ";
            cin>>b;
            cout<<endl;
            c=a/b;
            cout<<endl<<endl;
            cout<<"El resultado es:    ";
            cout<<c;
            cout<<endl<<endl<<endl<<endl;
            system ("pause");
            return main();
            }
            if (opcion==5)
                {
                return main();
                }

        }
        else;

        if (opcion1==2)
            {
            system ("cls");
            cout << "\t\n **** Area de figuras geometricas ****" << endl;
            cout<<"\n\n 1.- Area rectangulo  ";
            cout<<"\n\n 2.- Area cuadrado    ";
            cout<<"\n\n 3.- Atras            ";
            cout<<"\n\n Elige una opcion     ";
            cin>>opcion;

            if (opcion==1)
            {
            system ("cls");
            cout<<endl;
            cout<<"Calculadora del area de un rectangulo"<<endl<<endl;
            cout<<"Base del rectangulo:    ";
            cin>>a;
            cout<<endl;
            cin.ignore();
            cout<<"Altura del rectangulo:  ";
            cin>>b;
            cout<<endl;
            cin.ignore();
            c=a*b;
            cout<<"Area del rectangulo=    ";
            cout<<c;
            cout<<endl<<endl;
            system ("pause");
            return main();
            }

            else

            if(opcion==2)
            {
            system ("cls");
            cout<<endl;
            cout<<"Calculadora del area de un cuadrado"<<endl<<endl;
            cout<<"Base del cuadrado:    ";
            cin>>a;
            cout<<endl;
            cin.ignore();
            cout<<"Altura del cuadrado:  ";
            cin>>b;
            cout<<endl;
            cin.ignore();
            c=a*b;
            cout<<"Area del cuadrado=    ";
            cout<<c;
            cout<<endl<<endl;
            system ("pause");
            return main();
            }

            if (opcion==3)
            {
                return main();
            }
        }
    system ("pause");
    return 0;
}
