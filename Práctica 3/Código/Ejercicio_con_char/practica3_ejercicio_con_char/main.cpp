#include <iostream>
#include "manejo_archivos.h"
using namespace std;

int main()
{
    char original_file[]="original.txt";
    char unencoded_binary_file[]="undecoded_binary.dat";
    char encoded_binary_file[]="encoded_binary.dat";
    unsigned long long int file_size=1;
    char *data_file=new char[file_size];
    char *data_file_aux=new char[file_size];
    cout<<"Enter the name of the .txt file with de original information"<<endl;
    cin>>original_file;
    //cout<<"Enter the name of the .dat file where the encoded information will go"<<endl;
    //cin>>encoded_binary_file;

    create(encoded_binary_file,2);
    for(unsigned long long int i=0; i<file_size; i++){
        data_file_aux[i]=data_file[i];
    }
    delete [] data_file;
    file_size=size(original_file);
    cout<<file_size<<endl;
    data_file=new char[file_size];
    for(unsigned long long int i=0; i<file_size; i++){
        data_file[i]=data_file_aux[i];
    }
    delete [] data_file_aux;

    read(original_file,file_size,data_file);
    cout<<data_file;
    delete [] data_file;
    return 0;
}
