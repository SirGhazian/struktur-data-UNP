// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 3

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char tujuanStr[100], sumberStr[50];
    int i = 0, j = 0;

    system("cls");

    printf("~~> Masukkan string sumber: ");
    gets(sumberStr);

    printf("~~> Masukkan string tujuan: ");
    gets(tujuanStr);

    while (tujuanStr[i] != '\0')
        i++;

    j = 0;
    while (sumberStr[j] != '\0') {
        tujuanStr[i] = sumberStr[j];
        i++;
        j++;
    }

    tujuanStr[i] = '\0';

    printf("\n~~> String tujuan menjadi: ");
    puts(tujuanStr);

    return 0;
}
