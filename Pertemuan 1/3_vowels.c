// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 3
// KASUS    : Program to count the number of vowels in a text.

#include <ctype.h>  // Library untuk fungsi tolower
#include <stdio.h>
#include <string.h>

int hitungAbjad(char *text) {
    int hitung = 0;
    int panjang = strlen(text);

    for (int i = 0; i < panjang; i++) {
        char huruf = tolower(text[i]);  // Ubah menjadi huruf kecil
        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            hitung++;
        }
    }

    return hitung;
}

int main() {
    char text[1000];

    printf("\nMasukkan sebuah teks: ");
    gets(text);

    int jumlahAbjad = hitungAbjad(text);
    printf("\n[ Banyak abjad pada teks \"%s\" adalah: %d] \n\n", text, jumlahAbjad);

    return 0;
}
