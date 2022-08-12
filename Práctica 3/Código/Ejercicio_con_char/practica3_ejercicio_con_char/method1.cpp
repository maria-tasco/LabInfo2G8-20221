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
    //text_unencoded<<'\0';
    text_unencoded.close();
}


char *encoded(char *unencode_binary, char *bin_data, char *encoded_binary,
              unsigned long long int size, unsigned int seed)
{
    /*Leer el archivo binario sin codificar y pasar los datos a un arreglo*/
    unsigned long long int bin_size=size*8;
    bool band=true;
    read(unencode_binary,&bin_size,bin_data);
    cout<<bin_data<<endl;
    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
    for(unsigned long long int i=0; i<bin_size; i+=seed){
        char data_bin_aux[seed+1];
        char data_bin_comparasion[seed+1];
        char data_bin_transfomation[seed+1];
        unsigned short int cont0=0, cont1=0;
        for(unsigned int j=i; j<i+seed; j++){

            while(band==true){
                /*primer bloque todos 1 por 0 y viceversa*/
                for(unsigned int k=0; k<seed; k++){
                    data_bin_aux[k]=bin_data[k];
                    data_bin_transfomation[k]=data_bin_aux[k];
                    if(data_bin_transfomation[k]=='0'){
                        data_bin_transfomation[k]='1';
                        cont0++;
                     }
                    else{
                        data_bin_transfomation[k]='0';
                        cont1++;
                    }
                    cout<<data_bin_aux[k];
                }
                band=false;
            }
//            for(unsigned short int k=0; k<seed;k++){
//                data_bin_transfomation[k]=data_bin_aux[k];
//            }
            if(j>=4){
                /*estoy cogiendo los siguientes 4*/
                data_bin_aux[j-i]=bin_data[j];
                /*Aplico las reglas según los 4 anteriores*/
                if(data_bin_aux[j-i]=='0')
                    cont0++;
                else
                    cont1++;
                /*Voy verificando el cambio*/
                data_bin_transfomation[j-i]=data_bin_aux[j-i];
                cout<<data_bin_aux[j-i];
                if(j==i+seed-1){
                    if(cont0==cont1){
                        for(unsigned short int k=0; k<seed; k++){
                            if(data_bin_transfomation[k]=='0')
                                data_bin_transfomation[k]='1';
                            else
                                data_bin_transfomation[k]='0';
                       }
                    }
                    else if(cont0>cont1){
                        for(unsigned short int k=1; k<=3; k+=2){
                            if(data_bin_transfomation[k]=='0')
                                data_bin_transfomation[k]='1';
                            else
                                data_bin_transfomation[k]='0';
                        }
                    }
                    else if(cont1>cont0){
                        for(unsigned short int k=2; k<seed; k+=3){
                            if(data_bin_transfomation[k]=='0')
                                data_bin_transfomation[k]='1';
                            else
                                data_bin_transfomation[k]='0';
                        }
                    }
                }
            }
        }//fin del primer for
        data_bin_aux[seed]='\0';
        data_bin_transfomation[seed]='\0';

        cout<<"\tTiene "<<cont0<<" ceros y "<<cont1<<" unos";
        cout<<"\tTransformacion "<<data_bin_transfomation<<endl;
        }
    return encoded_binary;
}
