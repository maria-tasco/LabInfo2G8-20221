#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int k=0, semilla=1,indc=0,cont=0,num_elem=0,n=0, semilla_mayor=0;
        int serie[50]={0}, serie_mas_larga[50]={0};

        cout << "Ingrese un numero entero positivo para hallar la serioe de Collatz "
                "más larga con una semilla menor al numero ingresado: " << endl; cin>>k;

        while(semilla<k){
            n=semilla;
            while (n!=1) {
                if(n%2==0){ // si n es par
                    serie[indc++]=n/2;
                    n=n/2; cont++;
                }
                else{ // si n es impar
                    serie[indc++]=(3*n)+1;
                    n=(3*n)+1; cont++;
                }
            }
            if(cont>num_elem){ // se revisa los numeros de elem de la serie para cambiarlos si es mayor
                               // que el anterior. Se cambian el num de elem, la semilla, y la serie
                num_elem=cont;
                semilla_mayor=semilla;
                for(int i=0;i<cont;i++)
                    serie_mas_larga[i]=serie[i];
            }
            semilla++; indc=0; cont=0;
        }

        cout<<"la serie mas larga es con la semilla "<<semilla_mayor<<" teniendo "<<num_elem<<" elementos"<<endl;
        cout<<"La serie es la siguiente: "<<endl;
        for(int i=0;i<num_elem;i++)
            cout<<serie_mas_larga[i]<<",";

        cout<<endl;
        cout<<"==========Ingrese 1 para seguir probando o ingrese 0 para salir====="<<endl; cin>>op;
    } while (op!=0);


    return 0;
}
