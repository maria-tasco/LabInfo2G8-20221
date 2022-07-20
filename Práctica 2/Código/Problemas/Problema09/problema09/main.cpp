#include <iostream>

using namespace std;
int cantElementosArray ( char *array);
int main()
{
    unsigned short int op=1;
    do {
        char cad_num[20]{0}, cad_aux[20]{0};
        int aux=1, tam_num=0, n=0, indc=0, num_aux=0, suma=0;
        bool ban=false;
        cout <<"Ingrese un numero menor de 10 cifras: "<< endl; cin>>cad_num;
        cout<<"Ingrese un numero separar la cadena de caracteres en números de n cifras"<<endl; cin>>n;

        tam_num=cantElementosArray(cad_num);
        /*! Para quedarme con la cadena original al final*/
        for(int i=0; i<tam_num;i++)
                cad_aux[i]=cad_num[i];

        while (ban==false) {
            if(tam_num%n==0){
                while (cad_num[indc]!='\0') {
                    for(int i=0;i<n;i++)
                        num_aux=(num_aux*10)+int(cad_num[indc++]-48);
                    suma+=num_aux; num_aux=0;
                } ban=true;
            }
            else{
                for(int i=(tam_num+aux); i>0; i--) //me falta agregar el cero en la primera posición
                    cad_num[i]=cad_num[i-aux];
                tam_num=cantElementosArray(cad_num);
                aux++;
            }
        }
        cout<<"Origina: "<<cad_aux<<endl<<"Suma: "<<suma<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
int cantElementosArray ( char *array) {
    //mientras que array[i]!='\0' sea direferente al caracter de fin de cadena
    int n=0;
    for (int i=0;array[i]!='\0';i++ ) {
            n++;
    }
    return n;
}
