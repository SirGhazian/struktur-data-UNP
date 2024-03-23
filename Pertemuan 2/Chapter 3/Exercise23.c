// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 23

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat1[5][5], mat2[5][5], hasil[5][5];
    int baris1, kolom1, baris2, kolom2, resBaris, resKolom;
    int i, j, k;

    system("cls");
    printf("-> Masukkan jumlah baris pada matriks pertama: ");
    scanf("%d", &baris1);
    printf("-> Masukkan jumlah kolom pada matriks pertama: ");
    scanf("%d", &kolom1);
    printf("-> Masukkan jumlah baris pada matriks kedua: ");
    scanf("%d", &baris2);
    printf("-> Masukkan jumlah kolom pada matriks kedua: ");
    scanf("%d", &kolom2);

    if (kolom1 != baris2) {
        printf("\n[ GAGAL! ]");
        printf("\n-- Jumlah baris dan kolom kedua matriks harus sama! --\n\n");
    }

    resBaris = baris1;
    resKolom = kolom2;

    printf("\n~~> Masukkan elemen-elemen matriks pertama: ");
    for (i = 0; i < baris1; i++) {
        for (j = 0; j < kolom1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("~~> Masukkan elemen-elemen matriks kedua: ");
    for (i = 0; i < baris2; i++) {
        for (j = 0; j < kolom2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < resBaris; i++) {
        for (j = 0; j < resKolom; j++) {
            hasil[i][j] = 0;
            for (k = 0; k < resKolom; k++)
                hasil[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    printf("\n\n[ Elemen-elemen matriks hasil perkalian ]");
    for (i = 0; i < resBaris; i++) {
        printf("\n");
        for (j = 0; j < resKolom; j++)
            printf("%d  ", hasil[i][j]);
    }

    return 0;
}
