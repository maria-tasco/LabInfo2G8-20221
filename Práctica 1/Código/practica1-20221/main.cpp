#include <iostream>

using namespace std;

int factorial (int num1);
int main ()
{
  int op=1;
  int num1 = 0, num2 = 0; // Se decide usar variavble globales en este caso para el ahorro de memoria //¿Lo que se define en un case luego se borra como pasa en las funciones.
  while ( op != 0)
  {
      cout<<"Ingrese un numero del 1-18 para elegir un problema: "<<endl;
      cout<<"1.Programa que identifica si una caracter ingresado es una vocal, consonante o ninguna de las dos"<<endl;
      cout<<"2.Programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada."<<endl;
      cout<<"3.Programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos."<<endl;
      cout<<"4.Programa para saber cual numero es mayor"<<endl;
      cout<<"6.Programa que encuentre el valor aproximado del número de euler en basea la siguiente suma innita:"<<endl;
      cout<<"9.Para la potenciacion"<<endl;
      cout<<"10.Programa que reciba un número n e imprima el enésimo número primo"<<endl;
      cout<<"11.Para la potenciacion"<<endl;
      cout<<"13.Para la potenciacion"<<endl;
      cout<<"15.Para la potenciacion"<<endl;
      cout<<"16.Para la potenciacion"<<endl;
      cout<<"0.Para salir"<<endl;
      cin>>op;
      switch (op)
      {
        case 1:{
          char caracter = '\0';
          cout<<"Ingrese cualquier caracter de la tabla ascii: "<<endl; cin>>caracter;
          if((caracter >=65 && caracter <=90) || (caracter >=97 && caracter<=122)){
              if(caracter==65 || caracter==97 || caracter==69 || caracter==101 ||
                 caracter==73 || caracter==105 || caracter==79 || caracter==111 ||
                 caracter==85 || caracter==117){
                  cout<<"El caracter ingresado es una vocal"<<endl<<endl;
              }
              else
                  cout<<"El caracter ingresado es una consonante"<<endl<<endl;
          }
          else
              cout << "el caracter ingresado no es una vocal ni una consonante"<<caracter<<endl<<endl;
          break;
          }

        case 2:
            cout<< "Ingrese la cantidad deseada para determinar la mínima combinación de billetes y monedas: "<< endl;
            cin >> num1;
            num2 = 10000;
                for (int i=0; i<3; i++)
                {
                    for ( int j=0; j<3; j++)
                    {
                    cout << (j*j-4*j+5)*num2 << " = "<< num1/((j*j-4*j+5)*num2) << endl ;
                    num1 = num1 % ((j*j-4*j+5)*num2);
                    }
                    num2/=10;
                }
            cout << "50 = " << num1/50 << endl << "Faltante = "<< num1 % 50 << endl;
            break;

          case 3:

              cout << "Ingrese el numero de un mes 1-12: "<< endl; cin >> num1;

              if ( (num1 > 12) || (num1 < 1))
              {
                  cout << num1 <<" Es un mes invalido "<< endl;
                  return 0;
              }

              cout << "Ingrese el día del mes:  " << endl; cin >> num2;

              if ( (num1 == 1) || (num1 == 3) || (num1 == 5) || (num1 == 7) || (num1 == 8) || (num1 == 10) || (num1 == 12) )
              {
                  if (num2 <= 31 && num2 >=1)
                      cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
                  else
                      cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
              }
              else if ( num1 == 2)
              {
                  if ( num2 <=28 && num2 >=1)
                      cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
                  else if (num2 == 29)
                      cout << num2 << " / " << num1 << " Es una fecha valida en bisiesto" << endl;
                  else
                      cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
              }
              else
              {
                  if ( num2 <= 30 && num2 >=1)
                      cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
                  else
                      cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
              }
              break;

          case 4:
          {
            cout << "Ingrese la hora inicial : "<< endl; cin >> num1;
            cout << "Ingrese el tiempo que tarda: " << endl; cin >> num2;
            int min1 = 0, min2 = 0, h1 = 0, h2 = 0, minf = 0, hf = 0, horafinal = 0;

             h1 = num1 / 100 ;
             cout << h1 << endl;
             min1 = num1 % 100 ;
             cout << min1 << endl;

             h2 = num2 / 100 ;
             cout << h2 << endl;
             min2 = num2 % 100 ;
             cout << min2 << endl;

            if ( h1 > 24 )
                return 0 ;
            else
            {
                minf = min1 + min2;
                hf = h1 + h2;
                if (minf > 60)
                {
                    minf -= 60;
                    hf += 1;
                    cout << hf<< minf << endl;
                    if ( hf >= 24)
                    {
                        hf -= 24;
                        horafinal = (hf*100) + minf ;
                        cout << "La hora es: "<< horafinal << " del otro dia" << endl;
                        return 0;
                    }
                }
            }
            horafinal = (hf*100) + minf;
            cout << "La hora es: "<< horafinal << endl;

             break;
          }

          case 6:
          {
            float suma = 0.0;
            cout << "Ingrese el numero de elemento que quiere usar para la aproximacion del numero de euler: " << endl; cin >> num1;
            num1 -- ;

            for (int i=num1; i>=0; i--)
            {
                num2 = factorial(num1);
                suma += 1/(float)num2;
                num1 -- ;
            }

            cout << "e es aproximadamente: " <<  suma << endl;
            break;
          }
          case 9:
          {
                int num=0, rtamodulo=0, suma=0, aux=0, potencia=1;
                  cout << "ingrese un numero: "<< endl;
                  cin>> num;
                  while (num > 0 )
                  {
                      rtamodulo = num % 10;
                      num= num/10;
                      cout << "rtamodulo "<<rtamodulo << endl;
                      cout<< "num "<< num << endl;
                      //aqui hacer una función o colocar el código que me eleve cada rtamodulo así mismo para luego ser sumado
                      if (rtamodulo == 0)
                          suma+=0; //¿Debería ser cero o que salga del programa con un break aquí.
                      else
                      {
                          aux=rtamodulo;
                          for (aux; aux > 0; aux --)
                          {
                              potencia*=rtamodulo;
                              //cout<< "potencia del exponente "<< rtamodulo << " = "<< potencia << endl;

                          }
                          suma+=potencia;
                          //cout<< "suma del exponente "<< rtamodulo << " = "<< suma << endl;
                      }
                      potencia=1;
                  }
                  cout << "El resultado de la suma es:  "<< suma << endl;
          break;
          }
          case 10:
          {
            num2 = 1;
            cout << "Ingrese un numero: " << endl; cin>> num1; // Numero base de prueba --> Enesimo primo
            if (num1 < 0)
            {
                cout << "El conteo se hace a partir de 0 o 1" << endl;
                return 0;
            }

            //num2 lo usaremos como posible numero primo y es el que al final se sacará
            int cont = 0, i = 1, div = 0, aux = 0;
            while (cont != num1)
            {
                do
                {
                    div = num2 % i;
                    if ( div == 0)
                        aux ++; // Me cuenta cuántos divisores tiene el numero
                    i ++;
                } while ( i <= num2);
                i=1; num2 ++;
                if ( aux == 2)
                {
                    cont ++; // cuenta los numeros primos
                }
                aux = 0;
            }
            num2 -- ;
            cout <<"El primo numero " << num1 << " Es: "<<num2 << endl;
            break;
          }
          case 11 :
          {
            num2 = 1;
            num1 = 8; //Numero de prueba
            //cout << "Ingrese un numero : " << endl; cin >> num1;

            /*
            int  i = 2, div = 0, aux = 0, rta = 1, numAux = 0;
            while (num2 <= num1)
            {
                if ( num2 % 2 == 0 ) // Si es par
                {
                        i=2;
                        do
                        {
                            div = num2 / i;
                            cout << num2 << "/ " << i << " = " << div << endl;
                            if ( div != 0)
                            {
                                aux ++; // Me cuenta cuántos divisores tiene el numero
                                rta *=i;
                            }
                            i ++;
                            num2 = num2 - div;
                        } while ( div != 1);
                    cout <<"La multiplicacion de los multiplos soy par " << rta << endl;
                }
                else
                {
                    do
                        {
                            i = num2;
                            div = num2 / i;
                            cout << num2 << "/ " << i << " = " << div << endl;
                            if ( div != 0)
                            {
                                aux ++; // Me cuenta cuántos divisores tiene el numero
                                rta *=i;
                            }
                            i ++;
                        } while ( div != 1);
                    cout <<"La multiplicacion de los multiplos soy impar " << rta << endl;
                }
                aux = 0;
                num2 ++ ;
                cout << "NUm2: "<< num2 << endl;
            }*/
            int  i = 1, div = 0, aux = 0, divAux = 1, numAux = 0;
            int contAux = 0, iAux = 1, divAux2 = 1, auxAux = 0, num2Aux = 1;
            //num2 va a tener los factores primos, num1 es el primer numero que se va a descomponer en factores primos e irá disminuyendo hasta llegar a 1
            while (num1 != 1)
            {
                do
                {
                    div = num2 % i;
                    if ( div == 0)
                        aux ++; // Me cuenta cuántos divisores tiene el numero
                    i ++;
                } while ( i <= num2);

                if ( aux == 2)
                {
                    cout << num2 << endl; //Factor primo el cuál va a dividir el num1 en el que se encuentre
                    cout << "num1: "<< num1 << endl;
                    numAux = num1;

                    while ( numAux > 1)
                    {

                        cout << "numAUx antes de la división: "<< numAux << endl;
                        divAux = numAux / num2 ;
                        cout << "La division : " << numAux << " / " << num2 << " = " << divAux << endl;
                        if (numAux % num2 == 0 ) //SI se produce una división entera
                        {
                            numAux  = divAux;
                            cout << "numAux toma el valor de la división:  " << numAux << endl;

                        }
                         else
                        {
                            num2Aux = num2; //Toma el valor del primo anterior
                            while (auxAux != 2)
                            {
                                do
                                {
                                    divAux2 = num2Aux % iAux;
                                    if ( divAux2 == 0)
                                        auxAux ++; // Me cuenta cuántos divisores tiene el numero
                                    iAux ++;
                                }while ( iAux <= num2Aux);
                                iAux =1; num2Aux ++;
                                if ( auxAux == 2)
                                {
                                    contAux ++; // cuenta los numeros primos
                                }
                            }
                            num2 = num2Aux; //Toma el valor del siguiente primo
                            cout << "nuevo numero primo: " << num2 << endl;
                        }
                    }
                    num1 --;
                }
                aux = 0; i=1; num2 ++;
            }

            num2 -- ;
            break;
          }

          case 13 :
          {
          num2 = 0;
          //num2 lo usaremos como posible numero primo y es el que al final se sacará
          cout << "ingrese un numero: " << endl; cin>> num1;
          if (num1 < 0)
          {
              cout << "La suma empieza conun numero mayor que 0: " << endl;
              return 0;
          }
          int  i = 1, div = 0, aux = 0, suma = 0;
          while (num2 != num1)
          {
              do
              {
                  div = num2 % i;
                  if ( div == 0)
                      aux ++; // Me cuenta cuántos divisores tiene el numero
                  i ++;
              } while ( i <= num2);

              if ( aux == 2)
              {
                  cout << num2 << endl;
                  suma+= num2;
              }
              aux = 0; i=1; num2 ++;
          }
          num2 -- ;
          cout <<"La resultado de la suma es:" << suma<< endl;
            break;
          }
          case 15 :
          {
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
                        g = num1 -1-f;
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
            cout << "En una espiral de: "<< num1 << "x" << num1 << "La suma de la diagonal es: " << suma;
            break;
          }
          case 16:
          {
              break;
          }
      }

  }

  return 0;
}

int factorial (int num1)
{
    int rta=1;
    for (int aux= 1; aux<=num1; aux++)
    {
        rta*=aux;
    }
    cout << num1 << "! = "<< rta << endl;
    return rta;
}
/*
unsigned short int op=1;
unsigned int num1=0, num2=0;

do {

    cout<<"ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
}while(op!=0);
*/
