// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[200], pola[20], polaGanti[100], *strBaru;
    int i = 0, j = 0, k, panjangStr, panjangPola, panjangPolaGanti, n = 0, indeksGanti = 0;

    system("cls");
    printf("> Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    printf("> Masukkan huruf yang akan diganti: ");
    fgets(pola, sizeof(pola), stdin);
    printf("> Masukkan huruf pengganti: ");
    fgets(polaGanti, sizeof(polaGanti), stdin);

    str[strcspn(str, "\n")] = '\0';
    pola[strcspn(pola, "\n")] = '\0';
    polaGanti[strcspn(polaGanti, "\n")] = '\0';

    panjangStr = strlen(str);
    panjangPola = strlen(pola);
    panjangPolaGanti = strlen(polaGanti);

    for (i = 0; i < panjangStr; i++) {
        if (strstr(&str[i], pola) == &str[i]) {
            n += panjangPolaGanti;
            i += panjangPola - 1;
        } else {
            n++;
        }
    }

    strBaru = (char *)malloc(n * sizeof(char));
    i = 0;

    while (str[i] != '\0') {
        if (strstr(&str[i], pola) == &str[i]) {
            strcpy(&strBaru[j], polaGanti);
            j += panjangPolaGanti;
            i += panjangPola;
        } else {
            strBaru[j++] = str[i++];
        }
    }
    strBaru[j] = '\0';

    printf("\n~~~> Teks Awal : %s", str);
    printf("\n~~~> Teks Baru : %s\n\n", strBaru);

    free(strBaru);
    return 0;
}
