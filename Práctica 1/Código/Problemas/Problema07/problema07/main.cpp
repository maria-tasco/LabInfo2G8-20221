#include <iostream>

using namespace std;

int main()
{
    int n=0, rta=0,sumas_pares=0;
    int serie_fibo[]={0,1};
    cout << "Ingrese un numero mayor que 1 para hallar la suma de todos los números pares en la serie de Fibonacci menores a n" << endl;
    cin>>n;

    if(n<=1) return 0;

    else {
        while (rta<n) {
            if(rta%2==0){
                sumas_pares+=rta;
            }
            rta=serie_fibo[0]+serie_fibo[1];
            serie_fibo[0]=serie_fibo[1];
            serie_fibo[1]=rta;
        }
    }
    cout<<"el resultado de la suma es: "<< sumas_pares <<endl;
    return 0;
}
