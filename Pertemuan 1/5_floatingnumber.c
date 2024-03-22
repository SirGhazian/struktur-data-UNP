// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 5
// KASUS    : Read 2 floating point number, assign the result to an integer.

#include <stdio.h>

int main() {
    float angka1, angka2, hasilKoma;
    int hasilBulat;

    printf("\nMasukkan bilangan berkoma yang pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan bilangan berkoma yang kedua: ");
    scanf("%f", &angka2);

    hasilKoma = angka1 + angka2;
    hasilBulat = hasilKoma;  // Konversi ke bilangan bulat/integer

    printf("\n-- HASIL --\n");
    printf("Bilangan pertama: %.2f\n", angka1);
    printf("Bilangan kedua: %.2f\n", angka2);

    printf("\nHasil operasi penambahan dalam bilangan berkoma: %.2f", hasilKoma);
    printf("\nHasil operasi penambahan dalam bilangan bulat: %i", hasilBulat);
    printf("\n-----------\n\n");

    return 0;
}
