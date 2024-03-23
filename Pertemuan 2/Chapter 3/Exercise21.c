// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 21

#include <stdio.h>

int main() {
    int i, j, matriks[3][3], matriks_transposed[3][3];

    printf("\n[ Masukkan elemen-elemen matriks ]\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("~ Matriks[%d][%d]: ", i, j);
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\n\nMATRIKS NORMAL ~~~~~~");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d   ", matriks[i][j]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            matriks_transposed[i][j] = matriks[j][i];
    }

    printf("\n\nMATRIKS TRANSPOS ~~~~");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d   ", matriks_transposed[i][j]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~");

    return 0;
}
