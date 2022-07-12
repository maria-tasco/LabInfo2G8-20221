#include <iostream>

using namespace std;
int cantElementosArray ( char *array);

int main()
{
    unsigned short int op=1;

    do {
        int num1 = 0, total=0;
        char numRomano[10]{" "};
        int arrayRoman[7][2] = { {77,1000},
                                 {68,500},
                                 {67,100},
                                 {76,50},
                                 {88,10},
                                 {86,5},
                                 {73,1}};

        cout << "Ingrese un numero romano de maximo 10 caracteres: (Ejem: DCLXVI)" << endl;
        cin >> numRomano;

        num1 = cantElementosArray(numRomano);
        cout<<"El numero ingresado fue: ";
        for (int i=0; i<num1; i++){
            if(numRomano[i]>=97 && numRomano[i]<=122)
                numRomano[i]-=32;
            cout<<numRomano[i];
        }

        for (int i=0; i<num1; i++){
            for(int j=0; j<7;j++){
                if(numRomano[i] == arrayRoman[j][0]){
                    for(int k=0;k<7;k++){
                        if(numRomano[i+1]!='\0' && numRomano[i+1] == arrayRoman[k][0]){
                            if(arrayRoman[k][1] <= arrayRoman[j][1])
                                total += arrayRoman[j][1];
                            else
                                total -= arrayRoman[j][1];
                        }
                        else if(numRomano[i+1]=='\0'){
                            total += arrayRoman[j][1];
                            cout<<endl<<"Que corresponde a: "<<total;
                            break;
                        }
                    }
                }
            }
        }


        cout<<endl<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}

int cantElementosArray ( char *array){
    //mientras que array[i]!='\0' sea direferente al caracter de fin de cadena
    int n=0;
    for (int i=0;array[i]!='\0';i++ ){
            n++;
    }
    return n;
}

