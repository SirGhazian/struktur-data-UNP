// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 1
// KASUS    : Read 10 Integers. Display by 3 lines separated by commas.

#include <stdio.h>

int main() {
    int angka[10];
    int i;

    // Baca input dari user
    printf("\nMasukkan 10 Bilangan Bulat:\n");
    for (i = 0; i < 10; i++) {
        printf("-> ");
        scanf("%d", &angka[i]);
    }

    // Tampilkan bilangan
    printf("\n\n  [ Hasil ]  \n");
    printf("=============\n");
    for (i = 0; i < 10; i++) {
        printf("%d", angka[i]);
        if (i % 3 == 2 || i == 9) {
            printf("\n");
        } else {
            printf(", ");
        }
    }
    printf("=============\n\n");

    return 0;
}
