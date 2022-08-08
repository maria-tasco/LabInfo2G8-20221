#ifndef MANEJO_ARCHIVOS_H
#define MANEJO_ARCHIVOS_H
#include <iostream>
#include <fstream>
using namespace std;

//Estoy creando mi propia libreria para manejar archivos de texto con char
void create (char *name, unsigned short int op_txt_bin);
void write(char *nombre, char *datos, unsigned long long int tam, bool tipo);
unsigned long long size(char *name);
bool read (char *name, unsigned long long size, char *data);
void delete_f(char *nombre);

#endif // MANEJO_ARCHIVOS_H
