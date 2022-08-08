#include "method1.h"
#include "manejo_archivos.h"


void text_to_bin(char *data_file, char *unenconded_binary, unsigned long long *file_size)
{
    /*Function for go to over text to binary. Get array data, unencoded
     *binary file and original file size*/
    fstream text_unencoded;
    text_unencoded.open(unenconded_binary, fstream::out);
    for (unsigned long long i=0; i<*file_size; i++){
        for (unsigned long long j=0; j<=7; j++) text_unencoded << ((data_file
                                                          [i]<<j)&128)/128;
    }
    text_unencoded<<'\0';
    text_unencoded.close();
}


char *encoded(char *unencode_binary, char *bin_data, char *encoded_binary,
              unsigned long long int size, unsigned int seed)
{
    /*Leer el archivo binario sin codificar y pasar los datos a un arreglo*/
    unsigned long long int bin_size=size*8+1;
    read(unencode_binary,&bin_size,bin_data);
    cout<<bin_data;
    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
    for(unsigned long long int i=0; i<size+1; i++){
        for(unsigned int j=0; j<seed-1; j++){
        /*primer bloque todos 1 por 0 y viceversa*/
        }
    }
}
