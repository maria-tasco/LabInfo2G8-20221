#include <iostream>

using namespace std;


int main() {
    unsigned short int op = 1;

    do {
        unsigned int num = 0, index = 0, mcm = 1, div_primo = 2, band = 0;
        cout << "ingrese un numero entero positivo para hallar el MCM entre 1 y ese numero: " << endl;
        cin >> num;
        int numeros[num - 1];

        for(unsigned int i=2; i <= num; i++)
            numeros[i - 2] = i;

        while(div_primo <= num) {

            while(band == 0) {
                if(numeros[index++] % div_primo == 0) {
                    band++;
                    mcm *= div_primo;
                 }
                if(index == num-1) break;
            }

            for(unsigned i=0; i < (num-1); i++){
                if(numeros[i] % div_primo == 0){
                    numeros[i] = numeros[i] / div_primo;
                }
            }

            if(band == 0) {
                 div_primo++;
            }

            band = 0, index = 0;
        }

        cout << endl << mcm << endl;
        cout << "Ingrese 1 para seguir probando o ingrese 0 para salir" << endl;
        cin >> op;
    } while (op!=0);

    return 0;
}
