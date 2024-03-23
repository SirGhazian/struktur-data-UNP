// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 17

#include <stdio.h>

int main() {
    int matriks[7][7] = {0};
    int baris = 2, kolom, i, j;
    matriks[0][0] = matriks[1][0] = matriks[1][1] = 1;

    while (baris < 7) {
        matriks[baris][0] = 1;
        for (kolom = 1; kolom <= baris; kolom++)
            matriks[baris][kolom] = matriks[baris - 1][kolom - 1] + matriks[baris - 1][kolom];
        baris++;
    }

    for (i = 0; i < 7; i++) {
        printf("\n");
        for (j = 0; j <= i; j++)
            printf("%d\t", matriks[i][j]);
    }

    return 0;
}
