#include "method2.h"
#include "manejo_archivos.h"


void text_to_binM2(char *data_file, char *unenconded_binary, unsigned long long *file_size)
{
    /*Function for go to over text to binary. Get array data, unencoded
     *binary file and original file size*/
    fstream text_unencoded;
    text_unencoded.open(unenconded_binary, fstream::out);
    for (unsigned long long i=0; i<*file_size; i++){
        for (unsigned long long j=0; j<=7; j++) text_unencoded << ((data_file
                                                          [i]<<j)&128)/128;
    }
    //text_unencoded<<'\0';
    text_unencoded.close();
}


char *encodedM2(char *unencode_binary, char *bin_data, char *encoded_binary,
              unsigned long long int size, unsigned int seed)
{
    /*Leer el archivo binario sin codificar y pasar los datos a un arreglo*/
    unsigned long long int bin_size=size*8;
    read(unencode_binary,bin_data,bin_size);
    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
    for(unsigned long long int i=0; i<bin_size; i+=seed){
        char data_bin_aux[seed+1];
        char bin_trans [seed+1];
        for(unsigned int j=i; j<i+seed; j++){
                data_bin_aux[j-i]=bin_data[j];
                if(j==i+seed-1){
                    for(unsigned int k=0; k<seed; ++k){
                        bin_trans[k+1]=data_bin_aux[k];
                        if(k>seed/2){
                            bin_trans[0]=data_bin_aux[k];
                        }
                    }

                }
        }//fin del primer for
        //data_bin_aux[seed]='\0';
        //bin_trans[seed]='\0';
        write(encoded_binary,bin_trans,seed,true);
        cout<<data_bin_aux<<"\t"<<bin_trans<<endl;
        }
    return encoded_binary;
}


//#include "method2.h"
//#include "manejo_archivos.h"


//void text_to_binM2(char *data_file, char *unenconded_binary, unsigned long long *file_size)
//{
//    /*Function for go to over text to binary. Get array data, unencoded
//     *binary file and original file size*/
//    fstream text_unencoded;
//    text_unencoded.open(unenconded_binary, fstream::out);
//    for (unsigned long long i=0; i<*file_size; i++){
//        for (unsigned long long j=0; j<=7; j++) text_unencoded << ((data_file
//                                                          [i]<<j)&128)/128;
//    }
//    //text_unencoded<<'\0';
//    text_unencoded.close();
//}


//char *encodedM2(char *unencode_binary, char *bin_data, char *encoded_binary,
//              unsigned long long int size, unsigned int seed)
//{
//    /*Leer el archivo binario sin codificar y pasar los datos a un arreglo*/
//    unsigned long long int bin_size=size*8;
//    read(unencode_binary,&bin_size,bin_data);
//    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
//    for(unsigned long long int i=0; i<bin_size; i+=seed){
//        char data_bin_aux[seed+1];
//        char bin_trans [seed+1];
//        for(unsigned int j=i; j<i+seed; j++){
//                data_bin_aux[j-i]=bin_data[j];
//                if(j==i+seed-1){
//                    for(unsigned int k=0; k<seed; ++k){
//                        bin_trans[k+1]=data_bin_aux[k];
//                        if(k>seed/2){
//                            bin_trans[0]=data_bin_aux[k];
//                        }
//                    }

//                }
//        }//fin del primer for
//        data_bin_aux[seed]='\0';
//        bin_trans[seed]='\0';
//        write(encoded_binary,bin_trans,seed,true);
//        cout<<data_bin_aux<<"\t"<<bin_trans<<endl;
//        }
//    return encoded_binary;
//}
