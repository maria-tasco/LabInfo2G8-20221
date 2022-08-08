#ifndef METHOD1_H
#define METHOD1_H

void text_to_bin(char *data_file, char *unenconded_binary,
                 unsigned long long int *
                 file_size);
char * encoded(char *unencode_binary, char *bin_data, char *encoded_binary,
               unsigned long long size, unsigned int seed);
#endif // METHOD1_H
