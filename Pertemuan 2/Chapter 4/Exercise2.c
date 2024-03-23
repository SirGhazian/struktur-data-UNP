// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 2

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100], kapitalStr[100];
    int i = 0;

    system("cls");
    printf("~~> Masukkan string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            kapitalStr[i] = str[i] - 32;
        } else {
            kapitalStr[i] = str[i];
        }
        i++;
    }

    kapitalStr[i] = '\0';

    printf("\n~~> String awal         --> ");
    puts(str);
    printf("~~> String all kapital  --> ");
    puts(kapitalStr);

    printf("\n\n");
    return 0;
}
