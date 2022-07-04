#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    unsigned short int num_tam=0;

    do {
        cout<<"ingrese un numero para determinar el tamanio de la figura: "<<endl; cin>>num_tam;
        num_tam-=1;
        char matriz[num_tam][num_tam];
        int fil=0, col=0;

        for(fil=0;fil<=num_tam;fil++){
            for(int col=0;col<=num_tam;col++){
                matriz[fil][col]='-';
            }
        }
        for(fil=0;fil<=num_tam;fil++){
            for(int col=0;col<=num_tam;col++){
                cout<<matriz[fil][col];
            }
            cout<<endl;
        }
        cout<<endl;

        int ind_interm=num_tam/2, aux=2;


        for(fil=0;fil<=(num_tam/2);fil++){
            for(col=ind_interm-fil;col<=ind_interm+fil;++col){
                matriz[fil][col]='*';
            }
        }

        for(fil=(num_tam/2)+1;fil<=num_tam;fil++){
            for(col=ind_interm-(fil-aux);col<=ind_interm+(fil-aux);++col){
                matriz[fil][col]='*';
            }
            aux+=2;
        }

        for(fil=0;fil<=num_tam;fil++){
            for(col=0;col<=num_tam;col++){
                cout<<matriz[fil][col];
            }
            cout<<endl;
        }
        cout<<endl;

        cout<<"ingrese 1 para seguir probando o ingrese 0 para cerrar: " << endl; cin >> op;
    } while (op!=0);
    return 0;
}
