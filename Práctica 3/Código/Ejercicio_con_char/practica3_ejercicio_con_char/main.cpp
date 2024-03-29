#include <iostream>
#include "manejo_archivos.h"
#include "method1.h"
#include "method2.h"

using namespace std;


int main() {
    char original_file[30] = "original.txt";
    char unencoded_binary_file[30] = "undecoded_binary.dat";
    char encoded_binary_file[30] = "encoded_binary.dat";
    char decoded_file[30] = "decoded.dat";
    unsigned long long int file_size = 1;
    unsigned long long int *ptr_file_size = &file_size;
    char *data_file = new char[file_size];
    unsigned int seed = 4;
    unsigned short int op = 0;
    char op2 = '0';

    //===========================================================
    //Encoded
    cout<<"Enter the name of the .txt file with de original information"<<endl;
    cin>>original_file;
    cout<<"Enter the name of the .dat file where the encoded information will go"<<endl;
    cin>>encoded_binary_file;
    //============================================================
    create(encoded_binary_file,2);
    create(unencoded_binary_file,2);
    /*Dynamic memory reservation*/
    data_file=dynamic_data_memory(data_file,ptr_file_size,original_file);
    read(original_file,data_file,*ptr_file_size);
    cout<<data_file<<endl;
    //=========================================================
    text_to_bin(data_file,unencoded_binary_file,ptr_file_size);
    char *bin_data_file=new char[8*file_size];
    cout<<"which methods do you want to be encoded?, Enter 1 o 2: "<<endl;
    cin>>op;
    if(op==1){
        bin_data_file=encodedM1(unencoded_binary_file,bin_data_file,encoded_binary_file,file_size, seed);
    }
    else if(op==2){
      encodedM2(unencoded_binary_file,bin_data_file,encoded_binary_file,file_size, seed);
    }
    else
        cout<<"The option is not acceptable. try again"<<endl;
    //===========================================================
    //Decoded
    //==========================================================
    create(decoded_file,2);
    cout<<"Do you want to decode the information of the encoded file? Enter y/n "<<endl;
    cin>>op2;
    if(op2=='y' ||  op2=='Y'){
        cout<<"which methods do you want to be decoded?, Enter 1 o 2: "<<endl;
        cin>>op;
        if(op==1){
            decodedM1(bin_data_file,encoded_binary_file,decoded_file,file_size,seed);
        }
        else if(op==2){
          encodedM2(unencoded_binary_file,bin_data_file,encoded_binary_file,file_size, seed);
        }
        else
            cout<<"The option is not acceptable. try again"<<endl;
    }
    else if(op2=='n' ||  op2=='N'){
      encodedM2(unencoded_binary_file,bin_data_file,encoded_binary_file,file_size, seed);
    }
    else
        cout<<"The option is not acceptable. try again"<<endl;
    //==========================================================
    delete [] data_file;
    delete [] bin_data_file;
    return 0;
}


//#include <iostream>
//#include "manejo_archivos.h"
//#include "method1.h"
//#include "method2.h"
//using namespace std;

//int main()
//{
//    char original_file[30]="original.txt";
//    char unencoded_binary_file[30]="undecoded_binary.dat";
//    char encoded_binary_file[30]="encoded_binary.dat";
//    unsigned long long int file_size=1;
//    unsigned long long int *ptr_file_size=&file_size;
//    char *data_file=new char[file_size];
//    unsigned int seed=4;
//    unsigned short int op=0;
////    cout<<"Enter the name of the .txt file with de original information"<<endl;
////    cin>>original_file;
////    cout<<"Enter the name of the .dat file where the encoded information will go"<<endl;
////    cin>>encoded_binary_file;
//    //============================================================
//    create(encoded_binary_file,2);
//    /*Dynamic memory reservation*/
//    data_file=dynamic_data_memory(data_file,ptr_file_size,original_file);
//    read(original_file,ptr_file_size,data_file);
//    cout<<data_file<<endl;
//    //=========================================================
//    text_to_bin(data_file,unencoded_binary_file,ptr_file_size);
//    char *bin_data_file=new char[8*file_size+1];
//    cout<<"which methods do you want to be encoded?, Enter 1 o 2: "<<endl;
//    cin>>op;
//    if(op==1){
//        encodedM1(unencoded_binary_file,bin_data_file,encoded_binary_file,file_size, seed);
//    }
//    else if(op==2){
//      encodedM2(unencoded_binary_file,bin_data_file,encoded_binary_file,file_size, seed);
//    }
//    else
//        cout<<"The option is not acceptable. try again"<<endl;
//    //==========================================================
//    delete [] data_file;
//    delete [] bin_data_file;

//    return 0;
//}
