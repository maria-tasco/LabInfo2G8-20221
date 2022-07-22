#include <iostream>

using namespace std;
void mostrar_matriz(int fil, int col, char *matriz[]);
int main()
{
    unsigned short int op=1;
    char sala_cine[15][20], fila=' ';
    int to_do=0, num_asiento=0;

    for(int i=0; i<=15;i++){
        for(int j=0; j<=20; j++)
            sala_cine[i][j]='-';
    }
    char *ptr[15]={sala_cine[0],sala_cine[1],sala_cine[2],sala_cine[3],sala_cine[4],sala_cine[5],sala_cine[6],sala_cine[7],sala_cine[8],sala_cine[9],sala_cine[10],sala_cine[11],sala_cine[12],sala_cine[13],sala_cine[14]};
//        for(int i=0;i<=15;i++)
//            *ptr[i]=sala_cine[i][0];
     do {
        cout<<"Sala de cine actual: "<<endl;
        mostrar_matriz(15,20,ptr);
        cout <<"Bienvenido:"<<endl<<"Para hacer reserva ingrese 1, para realizar cancelaciones ingrese 2"<<endl;
        cin>>to_do;
        switch (to_do) {
            case 1:{
                cout<<"Ingrese la fila (Letra A-O) y el numero del asiento (Numero 1-20)"<<endl;
                cin>>fila; cin>>num_asiento;
                cout<<"Sala de cine actual: "<<endl;
                mostrar_matriz(15,20,ptr);
                num_asiento--;
                if(fila>='A' && fila<='J'){
                    sala_cine[fila-17-48][num_asiento]='+';
                }
                else if (fila>='K' && fila<='O')
                    sala_cine[10+(fila-27-48)][num_asiento]='+';
               break;
            }
            case 2:{
                cout<<"Ingrese la fila (Letra A-O) y el numero del asiento (Numero 1-20)"<<endl;
                cin>>fila; cin>>num_asiento;
                cout<<"Sala de cine actual: "<<endl;
                mostrar_matriz(15,20,ptr);
                num_asiento--;
                if(fila>='A' && fila<='J'){
                    sala_cine[fila-17-48][num_asiento]='-';
                }
                else if (fila>='K' && fila<='O')
                    sala_cine[10+(fila-27-48)][num_asiento]='-';
               break;
            }

        }
        cout<<"Sala de cine con su petición, revise para cancelar/verificar: "<<endl; mostrar_matriz(15,20,ptr);

        cout<<"==Ingrese 1 para seguir reservando/cancelando o ingrese 0 para salir=="<<endl; cin>>op;
     } while (op!=0);
    return 0;
}

void mostrar_matriz(int fil, int col, char *matriz[]){
    for(int i=0; i<fil;i++){
        for(int j=0; j<col; j++)
            cout<<matriz[i][j];
        cout<<endl;
    }
}
