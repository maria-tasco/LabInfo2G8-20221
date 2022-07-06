#include <iostream>

using namespace std;
bool es_palindromo(int n);
int main()
{
    unsigned short int op=1;
    do {
        int num=0;
        cout <<"Ingrese un numero para saber si es palindromo: "<<endl; cin>>num;
        if(es_palindromo(num))
            cout<<num<<" es palindromo"<<endl;
        else
            cout<<num<<" NO es palindromo"<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
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
