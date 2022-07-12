#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int fil =2, colum =2, total=0, aux=0;
        cout << "Ingrese una matriz cuadrada minimo de 2x2: " << endl;
        cout << "¿De que tamaño va a ser la matriz, ejemplo si es 3x3 ESCRIBE SOLO 3?" << endl;
        cin >> fil;
        colum = fil;

        /*! Se usa el new int y esta forma de declarar un matriz porque su tamaño es variable*/
        int **matrizcuadrada= new int* [fil]; //guardo espacio para las filas
        for (int i=0;i<fil;i++)
            matrizcuadrada[i]  = new int [colum]; //guardo espacio para las columnas

        for (int i=0; i<fil;i++) {
            for (int j=0; j<colum;j++) {
                cout<<" Ingrese un numero y no lo repita: ["<<i<<"]"<<"["<<j<<"]"<< endl;
                cin>>matrizcuadrada[i][j];
            }
        }

        for (int i=0; i<fil;i++) {
            for (int j=0; j<colum;j++) {
                cout << matrizcuadrada[i][j] <<" ";
            }
            cout <<"\n";
        }

        for (int i=0; i<fil;i++) {
            for (int j=0; j<colum;j++){
                //en cada iteración estoy sumando los elementos de una fila
                if (i == 0)
                    total += matrizcuadrada[i][j];
                else if (i>0)
                    aux += matrizcuadrada[i][j];                
            }
            if (i>0){
                if (total != aux){
                    cout << "La matriz no es un cuadrado magico"<< endl;
                    op=1;
                }
            }
            aux=0;
        }

        total=0;
        aux = 0;
        for (int j=0; j<fil;j++) {
            for (int i=0; i<colum;i++){
                //en cada iteración estoy sumando los elementos de una columna
                if (j == 0)
                    total += matrizcuadrada[i][j];
                else if (j>0)
                    aux += matrizcuadrada[i][j];                
            }
            if (j>0){
                if (total != aux){
                    cout << "La matriz no es un cuadrado magico"<< endl;
                    op=1;
                }
            }
            aux=0;
        }

        aux = 0;
        for (int i=0; i<fil;i++) {
            for (int j=0; j<colum;j++){
                //en cada iteración estoy sumando los elementos de la diagonal principal
                if (i == j)
                    aux += matrizcuadrada[i][j];
            }
        }
        if(total != aux ) {
            cout << "La matriz no es un cuadrado magico"<< endl;
            op=1;
        }
        else {
            cout << "La matriz es un cuadrado magico"<< endl;
            op=1;
        }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
