// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 14

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char strPertama[100], strKedua[100], salinStr[200];
    char *ptrPertama, *ptrKedua, *ptrSalinStr;

    system("cls");

    ptrPertama = strPertama;
    ptrKedua = strKedua;
    ptrSalinStr = salinStr;

    printf("~~> Masukkan string pertama: ");
    gets(strPertama);

    printf("~~> Masukkan string kedua: ");
    gets(strKedua);

    while (*ptrPertama != '\0') {
        *ptrSalinStr = *ptrPertama;
        ptrSalinStr++;
        ptrPertama++;
    }

    while (*ptrKedua != '\0') {
        *ptrSalinStr = *ptrKedua;
        ptrSalinStr++;
        ptrKedua++;
    }

    *ptrSalinStr = '\0';

    printf("\n>> Gabungan string: ");
    ptrSalinStr = salinStr;

    while (*ptrSalinStr != '\0') {
        printf("%c", *ptrSalinStr);
        ptrSalinStr++;
    }

    printf("\n\n");
    return 0;
}
