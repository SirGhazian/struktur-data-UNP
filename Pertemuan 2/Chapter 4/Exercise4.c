// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    system("cls");

    printf("> Masukkan string 1: ");
    fgets(str1, sizeof(str1), stdin);

    printf("> Masukkan string 2: ");
    fgets(str2, sizeof(str2), stdin);

    if (strcmp(str1, str2) == 0) {
        printf("\n[ KEDUA STRING SAMA! ]\n");
        printf("~~ String 1 sama besar dengan String 2 ~~\n\n");
    } else {
        printf("\n[ KEDUA STRING TIDAK SAMA! ]\n");

        if (strcmp(str1, str2) > 0) {
            printf("~~ String 1 lebih besar dari String 2 ~~\n\n");
        } else {
            printf("~~ String 2 lebih besar dari String 1 ~~\n\n");
        }
    }

    return 0;
}
