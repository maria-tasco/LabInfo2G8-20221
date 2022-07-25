/*! Link tinkercad: https://www.tinkercad.com/things/cnn340lsXts*/
#include <iostream>

using namespace std;
int cantElementosArray ( char *array);
int main()
{
    unsigned short int op=1;
    do {
        char cadena_original[15]{' '}, cad_num[15]{' '}, cad_aux[15]{' '};;
        int tam=0, indcNum=0, indcAux = 0;

        cout<<"Ingrese una cadena de tamanio maximo 15m, con diferentes caracteres: "<<endl; cin>>cadena_original;

        tam=cantElementosArray(cadena_original);
        for(int i=0; i<tam; i++){
            if(cadena_original[i]>=48 && cadena_original[i]<=57)
                cad_num[indcNum++]=cadena_original[i];
            else
                cad_aux[indcAux++]=cadena_original[i];
        }
        cout<<"Original: "<<cadena_original<<endl<<"Texto: "<<cad_aux<<endl<<"Numeros: "<<cad_num<<endl;

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
