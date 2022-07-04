#include <iostream>

using namespace std;

bool es_palindromo(int n);

int main()
{
    unsigned short int op=0;
    do {
        cout << "Este programa se encargará de multiplicar todos los numeros dos numeros de tres cifras para hallar el palindromo"
                "mas grande entre el producto de los dos numeros: " << endl;

        unsigned int producto=1, max_palindromo=0, num1=0,num2=0, num1_aux=0, num2_aux=0;
        for(num1=100;num1<999;num1++){
            for(num2=100;num2<999;num2++){
                producto=num1*num2;
                if(es_palindromo(producto)==1){
                    cout<<num1<<"*"<<num2<<"="<<producto<<endl;
                    if(producto>max_palindromo){
                        max_palindromo=producto;
                        num1_aux=num1;
                        num2_aux=num2;
                    }
                }
            }
        }
        cout<<"el maximo palindromo entre numeros de 3 crifras es: "<<num1_aux<<" * "<<num2_aux<<" = "<<max_palindromo;

        cout<<endl;
        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir: "<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
bool es_palindromo(int n){
    int num_indiv=0, indc=0, aux=0, cont=0;

    aux=n;

    /*! Para saber el tamaño del numero */

    while(aux!=0){
        aux/=10;
        cont++;
    }
    /*! Empiezo a sacar las unidades del numero y a guardarlas en cada posición del arreglo */

    int arreglo_numeros[cont];
    while(n!=0){
        num_indiv=n%10;
        arreglo_numeros[indc++]=num_indiv;
        n/=10;
    }

//    for(int i=0;i<cont;i++)
//        cout<<arreglo_numeros[i];

    /*! Recorrer el arreglo para saber si el numero del producto es un palindromo*/
    int cont_aux=0;

        for(indc=0;indc<(cont/2);indc++){
            if(arreglo_numeros[indc]==arreglo_numeros[(cont-1)-indc])
                cont_aux++;
        }
        if(cont_aux==(cont/2))
            return true;
        else
            return false;
 }

