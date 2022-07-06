#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        short int num=0;
        cout <<"Ingrese un numero para hallar su valor elevado a 1 y hasta 5: "<< endl; cin>>num;
        int aux_num=num;

        cout<<aux_num<<"^"<<1<<"="<<num<<endl;
        for(int i=2; i<=5;i++){
            num*=aux_num;
            cout<<aux_num<<"^"<<i<<"="<<num<<endl;
         }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
