// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 13

#include <stdio.h>
#include <stdlib.h>

int main() {
    char stringAsli[100], stringSalinan[100];
    char *ptrStringAsli, *ptrStringSalinan;
    ptrStringAsli = stringAsli;
    ptrStringSalinan = stringSalinan;

    system("cls");
    printf("~~> Masukkan string awal : ");
    gets(stringAsli);
    while (*ptrStringAsli != '\0') {
        *ptrStringSalinan = *ptrStringAsli;
        ptrStringAsli++, ptrStringSalinan++;
    }

    *ptrStringSalinan = '\0';
    printf("~~> Teks yang disalin    : ");
    ptrStringSalinan = stringSalinan;

    while (*ptrStringSalinan != '\0') {
        printf("%c", *ptrStringSalinan);
        ptrStringSalinan++;
    }

    return 0;
}
