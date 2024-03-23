// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 15

#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pointer1, *pointer2;

    pointer1 = array;
    pointer2 = &array[8];

    system("cls");
    printf("Isi dari array yang berjumlah [%d] elemen adalah: \n", sizeof(array) / sizeof(array[0]));
    printf("--> ");

    while (pointer1 <= pointer2) {
        printf("%d ", *pointer1);
        pointer1++;
    }

    return 0;
}