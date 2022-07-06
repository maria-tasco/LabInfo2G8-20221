#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int seg=0,hr=0,min=0;
        cout <<"Ingrese una cantidad entera de segundos para convertirla en formato horas:minutos:segundos"<< endl;
        cin>>seg;
        hr=seg/3600;
        seg-=(hr*3600);
        min=seg/60;
        seg-=(min*60);
        cout<<hr<<":"<<min<<":"<<seg<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
