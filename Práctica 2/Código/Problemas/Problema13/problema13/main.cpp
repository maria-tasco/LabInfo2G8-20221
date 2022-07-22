#include <iostream>

using namespace std;
void mostrar_matriz(int fil, int col, int *matriz[]);
int find_stars(int *g[]);
int main()
{
    unsigned short int op=1;
    do {
        cout <<"Este programa tiene la representación digital de la galaxia NGC 1300"
               "y mostrará en pantalla cuántas estrellas tiene"<< endl;
        int galaxy[6][8]={{0,3,4,0,0,0,6,8},
                          {5,13,6,0,0,0,2,3},
                          {2,6,2,7,3,0,10,0},
                          {0,0,4,15,4,1,6,0},
                          {0,0,7,12,6,9,10,4},
                          {5,0,6,10,6,4,8,0}};
        int *ptr[6]={galaxy[0],galaxy[1],galaxy[2],galaxy[3],galaxy[4],galaxy[5]};
        mostrar_matriz(6,8,ptr);
        cout<<"La galaxia tiene "<<find_stars(ptr)<<" estrellas."<<endl;
        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
void mostrar_matriz(int fil, int col, int *matriz[]){
    for(int i=0; i<fil;i++){
        for(int j=0; j<col; j++)
            cout<<matriz[i][j]<<" ";
        cout<<endl;
    }
}
int find_stars(int *g[]){
    int cont=0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            if((g[i][j]+g[i][j-1]+g[i][j+1]+g[i-1][j]+g[i+1][j])/5 > 6)
                cont++;
        }
    }
    return cont;
}
