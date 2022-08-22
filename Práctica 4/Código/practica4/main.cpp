#include "enrutador.h"
#include "red.h"

int main()
{
    enrutador prueba;
    red mi_red;
//    /*!
//     * El metodo agragar_enrutador recibe como parametro un entero el cuál si es 1 será para agregar
//     * el enrutador manualmente (los nodos de enlace y sus costos) y la opción 2 para agregar un enrutador
//     * por medio de la lectura de un archivo: lista de adyacencia.
//    */
//    prueba.agregar_enrutador(1);
//    prueba.imprimir_enrutador();
//    prueba.agregar_enrutador(1);
//    prueba.imprimir_enrutador();
//    prueba.modificar_nodo("A","H");
//    prueba.imprimir_enrutador();
//    prueba.modificar_costo("B",-1);
//    prueba.imprimir_enrutador();

    unsigned short int op = 0;
    do{
        cout <<"\tMenu para la creación de enrutadores y redes: " << endl;
        cout <<"1. Agregar enrutador indivudual " <<endl;
        cout <<"2. Modificar nodo de un enrutador" << endl;
        cout <<"3. Modificar costo del nodo de un enrutador "<<endl;
        cout <<"4. Imprimir enrutador "<<endl;
        cout <<"5. Agregar enrutadores a la red"<<endl;
        cout <<"6. Remover enrutadores a la red"<<endl;
        cout <<"7. Actualizar tabla de enrutamiento"<<endl;
        cout <<"8. Configurar red a partir de un archivo"<<endl;
        cout <<"9. Para cerrar"<<endl;
        cin>>op;
        switch (op) {
            case 1: {
                prueba.agregar_enrutador();
                break;
                }
            case 2:{
                string nodo_actual, nodo_nuevo;
                cout<<"Ingrese el nodo que quiere modificar: " << endl; cin>>nodo_actual;
                cout<<"Ingrese el nombre del nodo nuevo: " << endl; cin>>nodo_nuevo;
                prueba.modificar_nodo(nodo_actual,nodo_nuevo);
                break;
                }
            case 3:{
                string nodo_actual;
                int costo_nuevo;
                cout<<"Ingrese el nodo al que quiere modificar el costo: " << endl; cin>>nodo_actual;
                cout<<"Ingrese el nuevo costo: " << endl; cin>>costo_nuevo;
                prueba.modificar_costo(nodo_actual,costo_nuevo);
                break;
                }
            case 4:
                prueba.imprimir_enrutador();
                break;
            case 5: {
                enrutador enr;
                mi_red.agregar_enrutador_red(enr);
                break;
            }

        }
    }while(op!=7);

    return 0;
}
