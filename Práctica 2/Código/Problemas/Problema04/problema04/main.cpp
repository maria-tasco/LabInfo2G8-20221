#include <iostream>

using namespace std;
void caracterNumtoInt (char *array, int *ptrNum, int n);
int cantElementosArray ( char *array);

int main()
{
    unsigned short int op=1;
    do {
        char caracterNum[10]{" "};
        int num[10]{0}, num1=0;
        int *ptrNum = num;

        cout << "Ingrese hasta 10 numeros, sin espacios ni ningun otro caracter: " << endl<< endl;
        cin >> caracterNum;

        num1=0; //saber el tamaño del arreglo y puede imprimir e iterar hasta num1
        num1 = cantElementosArray(caracterNum);

        caracterNumtoInt(caracterNum,ptrNum,num1);

        for (int i=0; i<num1; i++){
            cout << num[i];
        }

        cout<<endl<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}

void caracterNumtoInt (char *array, int *ptrNum, int n) {
    for (int i=0; i<n; i++){
        ptrNum[i] = (array[i]-'0');
    }
}
int cantElementosArray ( char *array) {
    //mientras que array[i]!='\0' sea direferente al caracter de fin de cadena
    int n=0;
    for (int i=0;array[i]!='\0';i++ ) {
            n++;
    }
    return n;
}
