// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 1

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    int i = 0, panjang = 0;

    system("cls");
    printf("~~> Masukkan string: ");
    gets(string);

    while (string[i] != '\0') {
        panjang++;
        i++;
    }

    printf("\n[ Panjang string adalah %d karakter]", panjang);
    return 0;
}
