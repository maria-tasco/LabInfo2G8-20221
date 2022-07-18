#include <iostream>

using namespace std;
void num_to_char(long long int num, char *cad);
int main()
{
    unsigned short int op=1;
    do {
        long long int num=123;
        char *cad=new char[5];
        //cout<<"Ingrese un numero: "<<endl; cin>>num;
        num_to_char(num, cad);
        delete []cad;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
void num_to_char(long long int num, char *cad){
    long long int num_aux=0, tam=0;

    num_aux=num;
    while(num_aux!=0){
        num_aux/=10;
        tam++;
    }

    char *cad_aux=new char[tam];
    num_aux=num;

    for(int i=0;i<tam;i++){
        cad_aux[i]=num_aux%10;
        num_aux/=10;
    }

    for(int i=0;i<tam;i++){
        cad_aux[i]=cad[i];
    }

    delete [] cad_aux;
}
