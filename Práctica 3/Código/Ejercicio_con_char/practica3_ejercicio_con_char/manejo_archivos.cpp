#include "manejo_archivos.h"
using namespace std;

void create(char *name, unsigned short op_txt_bin)
{
    if(op_txt_bin==1){
        fstream text(name, fstream::out | fstream::binary); //se crea el archivo en moto txt
        text.close();
    }
    if(op_txt_bin==2){
        fstream text(name, fstream::out | fstream::binary); //se crea el archivo en modo binario
        text.close();
    }
}

void write(char *nombre, char *datos, unsigned long long tam, bool tipo)
{

}

bool read(char *name, unsigned long long *size, char *data)
{
    fstream text(name, fstream::in | fstream::binary);
    bool confirmar=text.is_open();
    if(confirmar){
        try {
            /*traversing file and get characters to file one to one.
             after reading and go over to information in array
             data put in the last position the end line character.*/
            for(unsigned long long int i=0; i<*size; i++)
                data[i]=text.get();

            data[*size]='\0';
        }  catch (bad_alloc) {
            cout<<"The file input is heavy for the program."<<endl;
        }
    }
    else
        cout<<"The file can not open"<<endl;
    text.close();
    return confirmar;
}

unsigned long long size(char *name)
{
    unsigned long long size_file=0;
    /*I'm creating a variable type file and it's opening in mode
     * read | position starts at the end of the file. | Operations
     * are performed in binary mode rather than text.*/
    fstream text(name, fstream::in | fstream::ate | fstream::binary);
    /*tellg give me the position where is the cursor*/
    if(text.is_open())
        size_file=text.tellg();
    else
        cout<<"The file can not open"<<endl;
    text.close();
    return size_file;
}

char *dynamic_data_memory(char *data_file,
                          unsigned long long *file_size, char *original_file)
{
    char *data_file_aux=new char[*file_size];
    for(unsigned long long int i=0; i<*file_size; i++){
        data_file_aux[i]=data_file[i];
    }
    delete [] data_file;
    *file_size=size(original_file);
    cout<<*file_size<<endl;
    data_file=new char[*file_size+1];
    for(unsigned long long int i=0; i<*file_size+1; i++){
        data_file[i]=data_file_aux[i];
    }
    delete [] data_file_aux;

    return data_file;

    delete []data_file;
}
