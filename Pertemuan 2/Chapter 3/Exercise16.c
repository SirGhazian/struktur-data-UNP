// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 16

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[2][2] = {33, 90, 16, 62};
    int i, j;

    system("cls");
    printf("[ Isi dari array 2 dimensi ]\n");

    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("%d  ", array[i][j]);
        }
    }

    printf("\n\n");
    return 0;
}