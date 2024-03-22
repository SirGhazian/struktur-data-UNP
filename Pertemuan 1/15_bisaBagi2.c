// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 15
// KASUS    : Numbers divided by 2.

#include <stdio.h>

int main() {
    int angka;

    printf("\n--> Masukkan sebuah bilangan: ");
    scanf("%d", &angka);

    // Memanggil fungsi cekAngka
    if (angka % 2 == 0) {
        printf("\n[ Bilangan %d bisa dibagi oleh 2 ]\n\n", angka);
    } else {
        printf("\n[ Bilangan %d tidak bisa dibagi oleh 2 ]\n\n", angka);
    }

    return 0;
}
