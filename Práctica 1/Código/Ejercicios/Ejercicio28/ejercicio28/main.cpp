#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num_elem=0, cont=1, elem=1;
        float pi=0.0;
        cout <<"Ingrese un numero para hallar la aproximacion de pi"<< endl; cin>>num_elem;

        while (cont-1 != num_elem) {
            if(elem % 2 != 0){
                /*! se va intercalando la suma y la resta */
                if(cont%2==0)
                    pi-=(1/float(elem));
                else
                    pi+=(1/float(elem));

                cont++;
            }
            elem++;
        }
        pi*=4;
        cout<<"Pi es aproximadamente: "<<pi<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
