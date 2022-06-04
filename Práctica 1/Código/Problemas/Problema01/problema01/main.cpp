#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    char caracter = '\0';
    do {
        cout<<"Ingrese cualquier caracter de la tabla ascii: "<<endl; cin>>caracter;
        if((caracter >=65 && caracter <=90) || (caracter >=97 && caracter<=122)){
            if(caracter==65 || caracter==97 || caracter==69 || caracter==101 ||
               caracter==73 || caracter==105 || caracter==79 || caracter==111 ||
               caracter==85 || caracter==117){
                cout<<"El caracter ingresado es una vocal"<<endl<<endl;
            }
            else
                cout<<"El caracter ingresado es una consonante"<<endl<<endl;
        }
        else
            cout << "el caracter ingresado no es una vocal ni una consonante"<<caracter<<endl<<endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para finalizar: "<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
