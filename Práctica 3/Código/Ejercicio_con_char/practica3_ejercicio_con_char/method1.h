#ifndef METHOD1_H
#define METHOD1_H

void text_to_bin(char *data_file, char *unenconded_binary,
                 unsigned long long int *
                 file_size);
char * encodedM1(char *unencode_binary, char *bin_data, char *encoded_binary,
               unsigned long long size, unsigned int seed);
void decodedM1(char *unencoded_data, char *encoded_binary_file, char *decoded_file, unsigned long long file_size, unsigned int seed);
void bin_to_text(char decoded_data, unsigned long long int size);
#endif // METHOD1_H


//#ifndef METHOD1_H
//#define METHOD1_H

//void text_to_bin(char *data_file, char *unenconded_binary,
//                 unsigned long long int *
//                 file_size);
//char * encodedM1(char *unencode_binary, char *bin_data, char *encoded_binary,
//               unsigned long long size, unsigned int seed);
//#endif // METHOD1_H
