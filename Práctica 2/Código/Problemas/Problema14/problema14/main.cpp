#include <iostream>

using namespace std;
void mostrar_matriz(int fil, int col, int *matriz[]);
void rotar_matriz(int fil, int col, int *matriz1[], int *matriz2[]);
int main()
{
    unsigned short int op=1;
    do {
        cout <<"Este programa rota una matriz de 5x5 a 90, 180 y 270 grados"<< endl;
        int matriz_1[5][5]={{1,2,3,4,5},
                            {6,7,8,9,10},
                            {11,12,13,14,15},
                            {16,17,18,19,20},
                            {21,22,23,24,25}};
        int matriz_2[5][5]{{0}};
        int *ptr_m1[5]={matriz_1[0],matriz_1[1],matriz_1[2],matriz_1[3],matriz_1[4]};
        int *ptr_m2[5]={matriz_2[0],matriz_2[1],matriz_2[2],matriz_2[3],matriz_2[4]};
        cout<<"Matriz original: "<<endl;
        mostrar_matriz(5,5,ptr_m1);
        cout<<"Matriz rotada 90 grados: "<<endl;
        rotar_matriz(4,4,ptr_m1,ptr_m2);
        cout<<"Matriz rotada 180 grados: "<<endl;
        rotar_matriz(4,4,ptr_m1,ptr_m2);
        cout<<"Matriz rotada 270 grados: "<<endl;
        rotar_matriz(4,4,ptr_m1,ptr_m2);

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
void rotar_matriz(int fil, int col, int *matriz1[], int *matriz2[]){
    for(int j=col; j>=0; j--){ //primero me quedo quieto en las columnas y me voy moviendo por filas
        for(int i=0; i<=fil; i++)
            matriz2[j][fil-i]=matriz1[i][j];
    }
    for(int i=0; i<=fil; i++){ //Igualo las matriz1 a la 2 para tener una base para rotar y cambiar la matriz 2
        for(int j=0;j<=col; j++)
            matriz1[i][j]=matriz2[i][j];
    }
    mostrar_matriz(5,5,matriz2);
}
