#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    int num1=0;

    do {
        int g=0, suma = 0;
        //cout << "Ingrese un numero impar: " << endl ; cin >> num1 ;
        num1 = 5;
        for ( unsigned short f=0, ts=0, ti = 0; f<num1; f++)
        {
            for (unsigned short c = 0; c < num1 ; c++)
            {
                if (f <= c && f <= num1-1-c ) // Triangulo superior
                {
                     cout << (num1-2*f)*(num1-2*f)-(num1-2*f-1)+ts << '\t';
                     ts ++;
                }
                else if (f > c && f > num1-1-c) //Triangulo inferior
                {
                    g = num1-1-f;
                    ts ++;
                    cout << (num1-2*g)*(num1-2*g)-2*(num1-2*g-1)-ts << '\t';
                }
                else if (f>c && f <= num1-1-c)// Triangulo izquierdo
                {
                    cout << (num1-2*c)*(num1-2*c)-(num1-2*c-1)-ti+c << '\t';
                }
                else
                {
                    g = num1 -c;
                    cout << (num1-2*g)*(num1-2*g)+ti-(g-1) << '\t';

                }
            }
            ts = 0;
            ti++;
            cout << endl << endl << endl;
        }
        suma --;

        cout << "En una espiral de: "<< num1 << "x" << num1 << " La suma de la diagonal es: " << suma<<endl;

        cout<<"ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    }while(op!=0);
    return 0;
}
