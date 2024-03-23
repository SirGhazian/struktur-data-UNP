// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 20

#include <stdio.h>

int main() {
    int i, j, matriks[3][3];

    printf("\n-> Masukkan elemen-elemen matriks: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\n-> Elemen-elemen matriks adalah:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d   ", matriks[i][j]);
        }
    }

    return 0;
}
