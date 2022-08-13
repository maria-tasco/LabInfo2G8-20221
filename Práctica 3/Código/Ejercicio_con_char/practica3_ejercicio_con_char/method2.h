#ifndef METHOD2_H
#define METHOD2_H

void text_to_binM2(char *data_file, char *unenconded_binary, unsigned long long *file_size);
char *encodedM2(char *unencode_binary, char *bin_data, char *encoded_binary,
              unsigned long long int size, unsigned int seed);
#endif // METHOD2_H
