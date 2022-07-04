/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// prototipos
int  definirCantidad  (void);
void definirCantidad  (int* pNumEst);
void ingresarNombres  (char Arreglo[][20], int tam);
void ingresarIDs      (string Arreglo[], int tam);
void ingresarIDs2     (string* ptr, int tam);
void ingresarNotas    (float Arreglo[][3], int tam);
void imprimir         (char Nombres[][20], string IDs[], float Notas[][3], int tam);

int main()
{
    int n = 4;
    
    int opcion;
    
    // Significa que cada estudiante tiene un nombre de máximo de 20 cararacteres
    char   Nombres[10][20] = {"juan", "luis", "sebas", "david"}; 
        /*Ejemplo:  Nombres[0] = "juan";
                    Nombres[1] = "luis";
                    Nombres[2] = "sebas";
                    ...
                    Nombres[9] = "david";*/
                    
    string IDs[10] = { "123", "456", "789", "246"};
        /*Ejemplo:  IDs => { "123", "456", "789", ...}
                    0-> "123"
                    1-> "456"
                    2-> "789"
                    ...*/
              
    // Significa que cada estudiante tiene 3 notas      
    float  Notas[10][3] = {
        {3,   4,   5},
        {3.5, 2,   5},
        {3.2, 4.2, 3.1},
        {1,   4.2, 2.5}
    };
        /*Ejemplo:  Notas[0] = {3, 4, 5}
                    Notas[1] = {3.5, 2, 5}
                    Notas[2] = {1, 4.2, 3.1}
                    ...
                    Notas[9] = {1, 5, 2}*/
    
    do {
        
        
        cout << "\n\nMenu" << endl;
        cout << "1. Numero estudiantes (<=10)" << endl;
        cout << "2. Ingresar información de los estudiantes" << endl;
        cout << "3. Ingresar notas" << endl;
        cout << "4. Modificar información de un estudiante" << endl;
        cout << "5. Consultar información del curso" << endl;
        cout << "6. Matricula de honor" << endl;
        cout << "7. Salir" << endl<< endl;
        cin >> opcion;
        
        switch(opcion){
            case 1:
                n = definirCantidad(); //llamado por valor
                //definirCantidad(&n); //llamado por referencia
                break;
                
            case 2:
                /*  Los arreglos SIEMPRE se envían por referencia ya que el "nombre de un arreglo"
                    equivale a "la dirección del arreglo en la primer posición [0]" */
                ingresarNombres(Nombres, n); //Nombres = &Nombres[0]
                ingresarIDs(IDs, n);
                // ingresarIDs2(IDs, n);
                // ingresarIDs2(&IDs[0], n);
                break;
                
            case 3:
                ingresarNotas(Notas, n);
                break;
                
            case 4:
                break;
                
            case 5:
                imprimir(Nombres, IDs, Notas, n);
                break;
                
            case 6:
                break;
                
            case 7:
                cout << "Finalizando programa" << endl;
                break;
                
            default:
                cout << "Opcion invalida" << endl;
        }
    }while(opcion!=7);
}

// Implementando el llamado por valor
int definirCantidad(void){
    int numEstudiantes;
    do {
        cout << "Ingrese la cantidad de estudiantes (<=10): ";
        cin >> numEstudiantes;
    }while(numEstudiantes>10);
    
    return numEstudiantes;
}


// Implementando el llamado por referencia
void definirCantidad(int* pNumEst){
    do {
        cout << "Ingrese la cantidad de estudiantes (<=10): ";
        cin >> *pNumEst;
    }while(*pNumEst>10);
}

void ingresarNombres(char Arreglo[][20], int tam){
    cout << "\n***** INGRESANDO NOMBRES *****" << endl;
    for (int i=0; i<tam; i++) {
        cout << "Nombre del estudiante "<< i << ": ";
        cin >> Arreglo[i];
    }
}

void ingresarIDs(string Arreglo[], int tam){
    cout << "\n***** INGRESANDO IDS *****" << endl;
    for (int i=0; i<tam; i++) {
        cout << "ID del estudiante "<< i << ": ";
        cin >> Arreglo[i];
    }
}

void ingresarIDs2(string* ptr, int tam){
    cout << "\n***** INGRESANDO IDS *****" << endl;
    for (int i=0; i<tam; i++) {
        cout << "ID del estudiante "<< i << ": " <<endl;
        cin >> *(ptr+i);
        //ptr++;
    }
}

void ingresarNotas(float Arreglo[][3], int tam){
    cout << "\n***** INGRESANDO NOTAS *****" << endl;
    for (int i=0; i<tam; i++) {
        cout << "Notas del estudiante "<< i << "" << endl;
        for (int j=0; j<3; j++) {
            cout << "Nota " << j << ":";
            cin >> Arreglo[i][j];
        }
    }
}

void imprimir(char Nombres[][20], string IDs[], float Notas[][3], int tam){
    cout << "\n*** IMPRIMIENDO INFORMACION DEL CURSO ***" << endl;
    for (int i=0; i<tam; i++) {
        cout << "*     Nombre\t|\t"<< Nombres[i] << "\t\t*" <<endl;
        cout << "*     ID\t|\t"<< IDs[i] << "\t\t*" <<endl;
        cout << "*     Notas\t|\t";
        for (int j=0; j<3; j++) {
            cout << Notas[i][j] << ", ";
        }
        cout << "\t*" << endl;
        cout << "*****************************************" << endl;
    }
}