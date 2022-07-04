#include <iostream>

using namespace std;
bool mutlb_is_in_multa(int multb, int multa[]);
int main()
{
    unsigned short int op=1;

    do {
        int a=5,b=7,c=36, multiplicador=1, ind=0, cont=0, multiplo=0, suma=0;
        int multiplos[]={0};
        //cout << "Ingrese 3 numeros para calcular la suma de los multiplos de los 2 primeros numeros, menores que el tercer numero: " << endl;
        //cin>>a; cin>>b; cin>>c;
        while ((multiplo=a*multiplicador<c)) {
            multiplo=a*multiplicador++;
            multiplos[ind++]=multiplo;
            cont++;
        }
        multiplicador=1;
        while((multiplo=b*multiplicador<c)){
            multiplo=b*multiplicador++;
            if(mutlb_is_in_multa(multiplo, multiplos)==false){
                //es decir no hay multiplo comun
                multiplos[ind++]=multiplo;
                cont++;
            }
        }

        for(int i=0; i<cont; i++){
            cout<<multiplos[i]<<" + ";
            suma+=multiplos[i];
        }
        cout<< " = "<< suma<<endl;

        cout<<"ingrese 1 para seguir prbando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
bool mutlb_is_in_multa(int multb, int multa[]){
    int ind=0;
    bool band=true;
    while (multa[ind] != '\0') {
        if(multb != multa[ind]){
            band=false;
            ind++;
        }
        else return band;
    }
    return band;
}
