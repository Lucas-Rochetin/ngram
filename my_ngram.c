#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128
void fill_array(int* array, char* str) {
    int index = 0;

    while(str[index] != '\0') {
        if (str[index] != '"') {
            array[(int)str[index]] += 1;
        }
        index += 1;
    }
}

void print_array(int* array, int size_array) {
    int index = 0;
    while (index < size_array) {
        if (array[index] > 0) {
            printf("%c:%d\n", index, array[index]);
        }
        index += 1;
    }
}

int main (int argc, char** argv) {
    int count = 1;
    int array[MAX_ARRAY_SIZE] = {};

    while (count < argc) {
        fill_array(&array[0], argv[count]);
        count +=1;
    }
    print_array(&array[0], MAX_ARRAY_SIZE);
    return 0;
}
