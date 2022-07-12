#include <iostream>

using namespace std;
int cantElementosArray ( char *array);

int main()
{
    unsigned short int op=1;
    do {
        char cadena1=' ', cadena2=' ';
        cout <<"Ingrese una cadena de caracteres: "<< endl; cin>>cadena1;
        cout <<"Ingrese otra cadena de caracteres para compararla con la primera: "<< endl; cin>>cadena2;


        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
int cantElementosArray ( char *array) {
    //mientras que array[i]!='\0' sea direferente al caracter de fin de cadena
    int n=0;
    for (int i=0;array[i]!='\0';i++ ) {
            n++;
    }
    return n;
}
