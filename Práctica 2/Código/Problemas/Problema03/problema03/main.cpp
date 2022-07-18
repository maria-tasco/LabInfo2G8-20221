#include <iostream>

using namespace std;
int cantElementosArray ( char *array);
bool compare_tow_char(char *cad1, char *cad2);
int main()
{
    unsigned short int op=1;
    do {
        char *cad1=new char, *cad2=new char;
        cout <<"Ingrese una cadena de caracteres: "<< endl; cin>>cad1;
        cout <<"Ingrese otra cadena de caracteres para compararla con la primera: "<< endl; cin>>cad2;

        if(compare_tow_char(cad1,cad2))
            cout<<"Las cadenas de caracteres son iguales"<<endl;
        else
            cout<<"Las cadenas no son iguales"<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
int cantElementosArray ( char *array) {
    //mientras que array[i]!='\0' sea direferente al caracter de fin de cadena
    int n=0;
    for (int i=0;array[i]!='\0';i++ )
            n++;
    return n;
}
bool compare_tow_char(char *cad1, char *cad2){
    int cont=0;
    if(cantElementosArray(cad1) == cantElementosArray(cad2)){
        for(int i=0; i<cantElementosArray(cad1); i++)
            if(cad1[i]==cad2[i])
                cont++;
        if(cont==cantElementosArray(cad1))
            return true;
        else
            return false;
    }
    else{
        cout<<"Las cadenas de caracteres no tienen el mismo tamaño"<<endl;
        return false;
    }

}
