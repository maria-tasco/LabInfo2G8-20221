#include "manejo_archivos.h"

using namespace std;


void create(char *name, unsigned short op_txt_bin) {
    if (op_txt_bin == 1) {
        fstream text(name, fstream::out | fstream::binary); // Se crea el archivo en modo txt
        text.close();
    }

    if (op_txt_bin == 2) {
        fstream text(name, fstream::out | fstream::binary); // Se crea el archivo en modo binario
        text.close();
    }
}


void write(char *name, char *data, unsigned long long size, bool type) {
    fstream text;
    text.open(name, fstream::app | fstream::binary);

    if (text.fail()) {
        cout << "The file could not be opened " << endl;
        exit(1);
    }

    text.write(data, size);
}


bool read(char *name, char *data, unsigned long long size) {
    fstream text(name, fstream::in | fstream::binary);

    bool is_open = text.is_open();

    if (is_open) {
        try {
            /* Traversing file and get characters to file one to one.
             * After reading and go over to information in array
             * data put in the last position the end line character.
             */
            cout<<endl;
            for (unsigned long long int i = 0; i < size; i ++) {
                data[i] = text.get();
                cout<<data[i];
            }
            cout<<endl;
            data[size] = '\0';
        } catch (bad_alloc) {
            cout << "The file input is heavy for the program" <<endl;
        }
    }
    else {
        cout << "The file can not open" << endl;
    }

    text.close();

    return is_open;
}


unsigned long long size(char *name) {
    unsigned long long size_file = 0;

    /* I'm creating a variable type file and it's opening in mode
     * read. Position starts at the end of the file.
     */
    fstream text(name, fstream::in | fstream::ate);

    /*  Tell give me the position where is the cursor  */
    if (text.is_open()) {
        try {
            size_file = text.tellg();
        }  catch (bad_alloc) {
            cout << "The file input is heavy for the program" << endl;
        }
    }

    else {
        cout << "The file can not open" << endl;
    }

    text.close();
    return size_file;
}


char *dynamic_data_memory(char *data_file,
                          unsigned long long *file_size,
                          char *original_file) {

    char *data_file_aux = new char[*file_size];

    for (unsigned long long int i = 0; i < *file_size; i ++) {
        data_file_aux[i] = data_file[i];
    }

    delete [] data_file;

    *file_size = size(original_file);

    cout << *file_size << endl;

    data_file = new char[*file_size];

    for (unsigned long long int i = 0; i < *file_size; i ++) {
        data_file[i] = data_file_aux[i];
    }

    delete [] data_file_aux;

    return data_file;

    delete []data_file;
}


//#include "manejo_archivos.h"
//using namespace std;

//void create(char *name, unsigned short op_txt_bin)
//{
//    if(op_txt_bin==1){
//        fstream text(name, fstream::out | fstream::binary); //se crea el archivo en moto txt
//        text.close();
//    }
//    if(op_txt_bin==2){
//        fstream text(name, fstream::out | fstream::binary); //se crea el archivo en modo binario
//        text.close();
//    }
//}

//void write(char *nombre, char *datos, unsigned long long tam, bool tipo)
//{
//    fstream text;
//    text.open(nombre, fstream::app | fstream::binary);
//    if(text.fail()){
//        cout<<"EL archivo no se pudo abrir"<<endl;
//        exit(1);
//    }
//    text.write(datos,tam);
//}

//bool read(char *name, unsigned long long *size, char *data)
//{
//    fstream text(name, fstream::in | fstream::binary);
//    bool confirmar=text.is_open();
//    if(confirmar){
//        try {
//            /*traversing file and get characters to file one to one.
//             after reading and go over to information in array
//             data put in the last position the end line character.*/
//            for(unsigned long long int i=0; i<*size; i++)
//                data[i]=text.get();

//            data[*size]='\0';
//        }  catch (bad_alloc) {
//            cout<<"The file input is heavy for the program."<<endl;
//        }
//    }
//    else
//        cout<<"The file can not open"<<endl;
//    text.close();
//    return confirmar;
//}

//unsigned long long size(char *name)
//{
//    unsigned long long size_file=0;
//    /*I'm creating a variable type file and it's opening in mode
//     * read | position starts at the end of the file. | Operations
//     * are performed in binary mode rather than text.*/
//    fstream text(name, fstream::in | fstream::ate);
//    /*tellg give me the position where is the cursor*/
//    if(text.is_open()){
//        try {
//            size_file=text.tellg();
//        }  catch (bad_alloc) {
//            cout<<"The file input is heavy for the program."<<endl;
//        }
//    }
//    else
//        cout<<"The file can not open"<<endl;
//    text.close();
//    return size_file;
//}

//char *dynamic_data_memory(char *data_file,
//                          unsigned long long *file_size, char *original_file)
//{
//    char *data_file_aux=new char[*file_size];
//    for(unsigned long long int i=0; i<*file_size; i++){
//        data_file_aux[i]=data_file[i];
//    }
//    delete [] data_file;
//    *file_size=size(original_file);
//    cout<<*file_size<<endl;
//    data_file=new char[*file_size];
//    for(unsigned long long int i=0; i<*file_size; i++){
//        data_file[i]=data_file_aux[i];
//    }
//    delete [] data_file_aux;

//    return data_file;

//    delete []data_file;
//}
