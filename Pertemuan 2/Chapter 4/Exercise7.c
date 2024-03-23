// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char teksUtama[100], teksMasukan[100], teksBaru[100];
    int i = 0, j = 0, k = 0, posisi;

    system("cls");
    printf("> Masukkan teks utama: ");
    fgets(teksUtama, sizeof(teksUtama), stdin);
    teksUtama[strcspn(teksUtama, "\n")] = '\0';

    printf("> Masukkan teks yang ingin dimasukkan: ");
    fgets(teksMasukan, sizeof(teksMasukan), stdin);
    teksMasukan[strcspn(teksMasukan, "\n")] = '\0';

    printf("> Masukkan posisi di mana teks ingin dimasukkan: ");
    scanf("%d", &posisi);

    while (teksUtama[i] != '\0') {
        if (i == posisi) {
            while (teksMasukan[j] != '\0') {
                teksBaru[k] = teksMasukan[j];
                j++;
                k++;
            }
        }
        teksBaru[k] = teksUtama[i];
        i++;
        k++;
    }

    // Jika posisi di luar indeks teksUtama
    while (teksMasukan[j] != '\0') {
        teksBaru[k] = teksMasukan[j];
        j++;
        k++;
    }

    teksBaru[k] = '\0';
    printf("\n~~~> %s + %s", teksUtama, teksMasukan);
    printf("\n~~~> Teks baru adalah: [ %s ]\n\n", teksBaru);

    return 0;
}
