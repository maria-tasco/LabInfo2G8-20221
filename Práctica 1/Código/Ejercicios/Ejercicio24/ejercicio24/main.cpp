#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int tam=0;
        cout <<"Ingrese un numero entero positivo para hacer un cuadrado de dicho tamaño"<< endl;
        cin>>tam;
        char matriz[tam][tam];

        for(int i=0; i<tam;i++){
            for(int j=0; j<tam;j++){
                if(i==0)
                    matriz[i][j]='+';
                else if(i==tam-1)
                    matriz[i][j]='+';
                else
                    matriz[i][j]=' ';
            }
        }
        for(int j=0;j<tam;j++){
            for(int i=0;i<tam;i++){
                if(j==0)
                    matriz[i][j]='+';
                if(j==tam-1)
                    matriz[i][j]='+';
                cout<<matriz[i][j];
            }
            cout<<endl;
        }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
