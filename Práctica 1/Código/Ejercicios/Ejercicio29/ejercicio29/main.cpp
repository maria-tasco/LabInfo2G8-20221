#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num_random=50, num_adivina=0, indc_mayor=25, indc_menor=25;
        char simbolos=' ';
        cout <<"Este programa intentara adivinar un numero que usted piense"<< endl;
        while(num_random!=num_adivina){
            cout<<"el numero que usted pensó es: "<<num_random<<"? use los símbolos >, < y = para responder "<<endl;
            cin>>simbolos;
            if(simbolos==62){ //num_adivina es mayor y hay que ir sumando poco a poco
                num_random+=indc_mayor;
                if(indc_mayor!=1)
                    indc_mayor/=2;
            }
            else if (simbolos==60) { //num_adivina es menor y hay que ir restando poco a poco
                num_random-=indc_menor;
                if(indc_menor!=1)
                    indc_menor/=2;
            }
            else if(simbolos==61) //es igual y se rompe el ciclo
                break;
        }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
