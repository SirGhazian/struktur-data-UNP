// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 12

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char kata[100];
    int i = 0, j, panjang = 0;

    system("cls");
    printf("> Masukkan kata: ");
    gets(kata);
    while (kata[i] != '\0') {
        panjang++;
        i++;
    }
    i = 0;
    j = panjang - 1;
    while (i <= panjang / 2) {
        if (kata[i] == kata[j]) {
            i++;
            j--;
        } else
            break;
    }
    if (i >= j)
        printf("~~> %s merupakan kata PALINDROM", kata);
    else {
        printf("~~> %s merupakan kata BUKAN PALINDROM", kata);
    }

    printf("\n\n");
    return 0;
}
