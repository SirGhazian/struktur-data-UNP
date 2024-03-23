// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], strAwal[100], backup;
    int i = 0, j = 0;

    system("cls");
    printf("> Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    // Membersihkan karakter newline ('\n')
    str[strcspn(str, "\n")] = '\0';

    strcpy(strAwal, str);
    j = strlen(str) - 1;

    while (i < j) {
        backup = str[i];
        str[i] = str[j];
        str[j] = backup;
        i++;
        j--;
    }

    printf("\n1) String awal \n--> ");
    puts(strAwal);
    printf("\n2) String Dibalik \n--> ");
    puts(str);

    printf("\n");
    return 0;
}
