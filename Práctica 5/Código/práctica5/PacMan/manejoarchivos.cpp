#include "manejoarchivos.h"

char* read(char *name, char *data, unsigned int size) {

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

    return data;
    text.close();
}
