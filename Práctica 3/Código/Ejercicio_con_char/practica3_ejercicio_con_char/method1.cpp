#include "method1.h"
#include "manejo_archivos.h"


void text_to_bin(char *data_file, char *unenconded_binary, unsigned long long *file_size) {

    /* Function for go to over text to binary. Get array data, unencoded
     * binary file and original file size.
     */
    fstream text_unencoded;

    text_unencoded.open(unenconded_binary, fstream::out);

    for (unsigned long long i=0; i<*file_size; i++) {
        for (unsigned long long j=0; j<=7; j++) {
            text_unencoded << ((data_file[i] << j) & 128) / 128;
        }
    }

    //text_unencoded<<'\0';
    text_unencoded.close();
}


char *encodedM1(char *unencode_binary, char *bin_data, char *encoded_binary,
              unsigned long long int size, unsigned int seed) {
    /*Leer el archivo binario sin codificar y pasar los datos a un arreglo*/
    unsigned long long int unencoded_bin_size=size*8;
    unsigned short int cont0=0, cont1=0, cont0_aux=0, cont1_aux=0;
    read(unencode_binary,bin_data,unencoded_bin_size);
    cout<<bin_data<<endl;

    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
    for(unsigned long long int i=0; i<unencoded_bin_size; i+=seed) {
        char data_bin_aux[seed+1];
        for(unsigned int j=i; j<i+seed; j++) {
            //data_bin_aux[j-i]=bin_data[j];
            if(j<4) {
                if(bin_data[j]=='0') {
                    data_bin_aux[j-i]='1';
                    cont0++;
                }
                else {
                    data_bin_aux[j-i]='0';
                    cont1++;
                }
            }
            if(j>=4) {
                /*count the Zero y one*/
                if(bin_data[j]=='0')
                    cont0_aux++;
                else
                    cont1_aux++;
                data_bin_aux[j-i]=bin_data[j];
                if(j==i+seed-1) {
                    if(cont0==cont1) {
                        for(unsigned short int k=0; k<seed; k++){
                            if(data_bin_aux[k]=='0')
                                data_bin_aux[k]='1';
                            else
                                data_bin_aux[k]='0';
                       }
                    }
                    else if(cont0>cont1) {
                        for(unsigned short int k=1; k<seed; k+=2) {
                            if(data_bin_aux[k]=='0')
                                data_bin_aux[k]='1';
                            else
                                data_bin_aux[k]='0';
                        }
                    }
                    else if(cont1>cont0) {
                        for(unsigned short int k=2; k<seed; k+=3) {
                            if(data_bin_aux[k]=='0')
                                data_bin_aux[k]='1';
                            else
                                data_bin_aux[k]='0';
                        }
                    }
                    cont0=cont0_aux; cont1=cont1_aux;
                    cont1_aux=0; cont0_aux=0;

                }
            }

            cout<<bin_data[j];

        }//end of the first for
        data_bin_aux[seed]='\0';
        write(encoded_binary,data_bin_aux,seed,true);
        cout<<"\tHave "<<cont0<<" Zero(s) y "<<cont1<<" One(s)";
        cout<<"\tTransformation "<<data_bin_aux<<endl;
        }
    return bin_data;
}
//===========================================================================
//DECODED
void decodedM1(char *unencoded_data, char *encoded_binary_file, char *decoded_file,
               unsigned long long size, unsigned int seed) {
    /*Leer el archivo codificado y pasar los datos a un arreglo*/
    unsigned long long int encoded_size=size*8;
    unsigned short int cont0=0, cont1=0, cont0_aux=0, cont1_aux=0;
    char *encoded_data=new char[size*8];
    read(encoded_binary_file,encoded_data,encoded_size);
    cout<<encoded_data<<endl;
    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
    for(unsigned long long int i=0; i<size*8; i+=seed){
        for(unsigned int j=i; j<i+seed; j++){
            //data_bin_aux[j-i]=bin_data[j];
            if(j<4){
                if(unencoded_data[j]=='0'){
                    encoded_data[j]='1';
                    cont0++;
                }
                else{
                    encoded_data[j]='0';
                    cont1++;
                }
            }
            if(j>=4){
                /*count the Zero y one*/
                if(unencoded_data[j]=='0')
                    cont0_aux++;
                else
                    cont1_aux++;
                /*Ya cuando están contados los ceros y unos empiezo a hacer modificaciones*/
                if(j==i+seed-1){
                    if(cont0==cont1){
                        for(unsigned short int k=0; k<seed; k++){
                            if(encoded_data[k]=='0')
                                encoded_data[k]='1';
                            else
                                encoded_data[k]='0';
                       }
                    }
                    else if(cont0>cont1){
                        for(unsigned short int k=1; k<seed; k+=2){
                            if(encoded_data[k]=='0')
                                encoded_data[k]='1';
                            else
                                encoded_data[k]='0';
                        }
                    }
                    else if(cont1>cont0){
                        for(unsigned short int k=2; k<seed; k+=3){
                            if(encoded_data[k]=='0')
                                encoded_data[k]='1';
                            else
                                encoded_data[k]='0';
                        }
                    }
                    cont0=cont0_aux; cont1=cont1_aux;
                    cont1_aux=0; cont0_aux=0;

                }
            }

            cout<<unencoded_data[j];

        }//end of the first for
        encoded_data[seed]='\0';
        write(decoded_file,encoded_data,seed,true);
        cout<<"\tHave "<<cont0<<" Zero(s) y "<<cont1<<" One(s)";
        cout<<"\tTransformation "<<encoded_data<<endl;
        }
    delete [] encoded_data;
}
/*
 * esta parte del codigo funciona solo para codificar, no decodifica. Después de muchos intentos
 * lo logré entender el error que me salía
*/
//#include "method1.h"
//#include "manejo_archivos.h"


//void text_to_bin(char *data_file, char *unenconded_binary, unsigned long long *file_size)
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


//char *encodedM1(char *unencode_binary, char *bin_data, char *encoded_binary,
//              unsigned long long int size, unsigned int seed)
//{
//    /*Leer el archivo binario sin codificar y pasar los datos a un arreglo*/
//    unsigned long long int bin_size=size*8;
//    unsigned short int cont0=0, cont1=0, cont0_aux=0, cont1_aux=0;
//    read(unencode_binary,&bin_size,bin_data);
//    cout<<bin_data<<endl;
//    /*for para recorrer el arreglo de grupos de n(semilla), mientras !='\n'*/
//    for(unsigned long long int i=0; i<bin_size; i+=seed){
//        char data_bin_aux[seed+1];
//        for(unsigned int j=i; j<i+seed; j++){
//            //data_bin_aux[j-i]=bin_data[j];
//            if(j<4){
//                if(bin_data[j]=='0'){
//                    data_bin_aux[j-i]='1';
//                    cont0++;
//                }
//                else{
//                    data_bin_aux[j-i]='0';
//                    cont1++;
//                }
//            }
//            if(j>=4){
//                /*count the Zero y one*/
//                if(bin_data[j]=='0')
//                    cont0_aux++;
//                else
//                    cont1_aux++;
//                data_bin_aux[j-i]=bin_data[j];
//                if(j==i+seed-1){
//                    if(cont0==cont1){
//                        for(unsigned short int k=0; k<seed; k++){
//                            if(data_bin_aux[k]=='0')
//                                data_bin_aux[k]='1';
//                            else
//                                data_bin_aux[k]='0';
//                       }
//                    }
//                    else if(cont0>cont1){
//                        for(unsigned short int k=1; k<=3; k+=2){
//                            if(data_bin_aux[k]=='0')
//                                data_bin_aux[k]='1';
//                            else
//                                data_bin_aux[k]='0';
//                        }
//                    }
//                    else if(cont1>cont0){
//                        for(unsigned short int k=2; k<seed; k+=3){
//                            if(data_bin_aux[k]=='0')
//                                data_bin_aux[k]='1';
//                            else
//                                data_bin_aux[k]='0';
//                        }
//                    }
//                    cont0=cont0_aux; cont1=cont1_aux;
//                    cont1_aux=0; cont0_aux=0;

//                }
//            }

//            cout<<bin_data[j];

//        }//end of the first for
//        data_bin_aux[seed]='\0';
//        write(encoded_binary,data_bin_aux,seed,true);
//        cout<<"\tHave "<<cont0<<" Zero(s) y "<<cont1<<" One(s)";
//        cout<<"\tTransformation "<<data_bin_aux<<endl;
//        }
//    return encoded_binary;
//}
