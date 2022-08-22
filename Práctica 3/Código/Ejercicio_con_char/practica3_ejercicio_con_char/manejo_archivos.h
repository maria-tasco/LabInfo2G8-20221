#ifndef MANEJO_ARCHIVOS_H
#define MANEJO_ARCHIVOS_H

#include <iostream>
#include <fstream>

using namespace std;


/* Create a .h and .cpp for file handling, there are the functions to read, write and
 * create files. There is also a function to reserve memory for the data to be saved
 */
void create (char *name, unsigned short int op_txt_bin);
void write(char *name, char *data, unsigned long long int size, bool type);
unsigned long long size(char *name);
bool read (char *name, char *data, unsigned long long size);
void delete_f(char *name);
char * dynamic_data_memory(char *file_name,
                           unsigned long long *file_size,
                           char *original_file);

#endif // MANEJO_ARCHIVOS_H


//#ifndef MANEJO_ARCHIVOS_H
//#define MANEJO_ARCHIVOS_H
//#include <iostream>
//#include <fstream>
//using namespace std;

///*Create a .h and .cpp for file handling, there are the functions to read, write and
// *create files. There is also a function to reserve memory for the data to be saved*/
//void create (char *name, unsigned short int op_txt_bin);
//void write(char *nombre, char *datos, unsigned long long int tam, bool tipo);
//unsigned long long size(char *name);
//bool read (char *name, unsigned long long *size, char *data);
//void delete_f(char *nombre);
//char * dynamic_data_memory(char *file_name,
//                           unsigned long long *file_size, char *original_file);

//#endif // MANEJO_ARCHIVOS_H
