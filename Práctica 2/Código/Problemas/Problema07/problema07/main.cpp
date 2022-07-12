#include <iostream>

using namespace std;
int cantElementosArray ( char *array);

int main()
{
    unsigned short int op=1;
    do {
        int j=0,z=0,n=0, cont=0;
        char letra;
        char arrayInicial[15]{" "},arrayAux[15]{" "},arrayFinal[15]{" "};
        cout << "Ingrese una palabra de maximo 15 caracteres y sin espacios: " << endl;
        cin >> arrayInicial;

        n = cantElementosArray(arrayInicial);
        cout << "el arreglo tiene " << n << " elementos" << endl;

        for (int i=0; i < n; i++)
        {
            cont=0;
            letra = arrayInicial [i];
            arrayAux[j]=letra; j++;

            for (int k=0; k<n; k++) {
                if (arrayAux[k] == letra)
                    cont++;
            }

            if (cont == 1){
                arrayFinal[z]=letra; z++;
            }
        }
        for (int i=0; i<n; i++){
            cout << arrayFinal[i];
        }


        cout<<endl<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
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
