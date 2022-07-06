#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        unsigned int num=0, num2=0, num_mayor=0, index=0, mcm=1, div_primo=2, band=0;
        cout<<"ingrese dos numeros enteros positivos para hallar el MCM entre ellos dos: "<<endl;
        cin>>num; cin>>num2;
        unsigned int numeros[2]={num,num2};
        /*! Para colocar el tope máximo de numeros primos a usar*/
        if(num>num2)
            num_mayor=num;
        else if(num2>num)
            num_mayor=num;
        else
            num_mayor=num;
        /*! se va a tomar todos los numeros primos mientras que sean menores que el numero mayor*/
        while(div_primo <= num_mayor) {
            /*! Verifico si el factor primo puede dividir primera y nuevamente los numeros*/
            while(band == 0) {
                if(numeros[index++] % div_primo == 0) {
                    band++;
                    mcm *= div_primo;
                 }
                if(index == 2) break;
            }
            /*! Empiezo a hacer las diviciones con el factor primo revisando que si sirva*/
            for(unsigned i=0; i < 2; i++){
                if(numeros[i] % div_primo == 0){
                    numeros[i] = numeros[i] / div_primo;
                }
            }
            /*! si el factor primo que esta ya no divide más los numeros se aumenta*/
            if(band == 0) {
                 div_primo++;
            }

            band = 0, index = 0;
        }

        cout<<endl<<"El MCM de "<<num<<" y "<<num2<<" es: "<< mcm << endl;


        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
