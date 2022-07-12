#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num1=0;
        cout <<"Este programa genera un arreglo de 200 letras Mayusculas e imprime cuántas veces"
               "se repiten las letras"<< endl;
        int arrayCont [26]{0};
        srand(time(NULL));
        for (int rango = 0; rango < 200; rango ++ ){
            num1=65+rand()%(91-65);
            cout << (char)num1 << " ";
            switch ((char)num1) {
                case 'A': arrayCont [0] +=1; break;
                case 'B': arrayCont [1] +=1; break;
                case 'C': arrayCont [2] +=1; break;
                case 'D': arrayCont [3] +=1; break;
                case 'E': arrayCont [4] +=1; break;
                case 'F': arrayCont [5] +=1; break;
                case 'G': arrayCont [6] +=1; break;
                case 'H': arrayCont [7] +=1; break;
                case 'I': arrayCont [8] +=1; break;
                case 'J': arrayCont [9] +=1; break;
                case 'K': arrayCont [10] +=1; break;
                case 'L': arrayCont [11] +=1; break;
                case 'M': arrayCont [12] +=1; break;
                case 'N': arrayCont [13] +=1; break;
                case 'O': arrayCont [14] +=1; break;
                case 'P': arrayCont [15] +=1; break;
                case 'Q': arrayCont [16] +=1; break;
                case 'R': arrayCont [17] +=1; break;
                case 'S': arrayCont [18] +=1; break;
                case 'T': arrayCont [19] +=1; break;
                case 'U': arrayCont [20] +=1; break;
                case 'V': arrayCont [21] +=1; break;
                case 'W': arrayCont [22] +=1; break;
                case 'X': arrayCont [23] +=1; break;
                case 'Y': arrayCont [24] +=1; break;
                case 'Z': arrayCont [25] +=1; break;
            }
        }
        for (int lcont = 0; lcont < 25; lcont++){
            switch (lcont) {
                case 0: cout<< "A: " <<arrayCont[lcont] << endl;; break;
                case 1: cout<< "B: " <<arrayCont[lcont] << endl;; break;
                case 2: cout<< "C: " <<arrayCont[lcont] << endl;; break;
                case 3: cout<< "D: " <<arrayCont[lcont] << endl;; break;
                case 4: cout<< "E: " <<arrayCont[lcont] << endl;; break;
                case 5: cout<< "F: " <<arrayCont[lcont] << endl;; break;
                case 6: cout<< "G: " <<arrayCont[lcont] << endl; break;
                case 7: cout<< "H: " <<arrayCont[lcont] << endl; break;
                case 8: cout<< "I: " <<arrayCont[lcont] << endl; break;
                case 9: cout<< "J: " <<arrayCont[lcont] << endl; break;
                case 10: cout<< "K: " <<arrayCont[lcont] << endl; break;
                case 11: cout<< "L: " <<arrayCont[lcont] << endl; break;
                case 12: cout<< "M: " <<arrayCont[lcont] << endl; break;
                case 13: cout<< "N: " <<arrayCont[lcont] << endl; break;
                case 14: cout<< "O: " <<arrayCont[lcont] << endl; break;
                case 15: cout<< "P: " <<arrayCont[lcont] << endl; break;
                case 16: cout<< "Q: " <<arrayCont[lcont] << endl; break;
                case 17: cout<< "R: " <<arrayCont[lcont] << endl; break;
                case 18: cout<< "S: " <<arrayCont[lcont] << endl; break;
                case 19: cout<< "T: " <<arrayCont[lcont] << endl; break;
                case 20: cout<< "U: " <<arrayCont[lcont] << endl; break;
                case 21: cout<< "V: " <<arrayCont[lcont] << endl; break;
                case 22: cout<< "W: " <<arrayCont[lcont] << endl; break;
                case 23: cout<< "X: " <<arrayCont[lcont] << endl; break;
                case 24: cout<< "Y: " <<arrayCont[lcont] << endl; break;
                case 25: cout<< "Z: " <<arrayCont[lcont] << endl; break;
            }

        }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
