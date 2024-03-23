// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 22

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriks1[5][5], matriks2[5][5], jumlah[5][5];
    int baris1, kolom1, baris2, kolom2, barisJumlah, kolomJumlah;
    int i, j;

    system("cls");
    printf("-> Masukkan jumlah baris dalam matriks pertama: ");
    scanf("%d", &baris1);
    printf("-> Masukkan jumlah kolom dalam matriks pertama: ");
    scanf("%d", &kolom1);
    printf("-> Masukkan jumlah baris dalam matriks kedua: ");
    scanf("%d", &baris2);
    printf("-> Masukkan jumlah kolom dalam matriks kedua: ");
    scanf("%d", &kolom2);

    if (baris1 != baris2 || kolom1 != kolom2) {
        printf("\n[ GAGAL! ]");
        printf("\n-- Jumlah baris dan kolom kedua matriks harus sama! --\n\n");
        exit(1);
    }

    barisJumlah = baris1;
    kolomJumlah = kolom1;

    printf("\n~~> Masukkan elemen-elemen matriks pertama: ");
    for (i = 0; i < baris1; i++) {
        for (j = 0; j < kolom1; j++) {
            scanf("%d", &matriks1[i][j]);
        }
    }

    printf("~~> Masukkan elemen-elemen matriks kedua: ");
    for (i = 0; i < baris2; i++) {
        for (j = 0; j < kolom2; j++) {
            scanf("%d", &matriks2[i][j]);
        }
    }

    for (i = 0; i < barisJumlah; i++) {
        for (j = 0; j < kolomJumlah; j++)
            jumlah[i][j] = matriks1[i][j] + matriks2[i][j];
    }

    printf("\n\n[ Elemen-elemen matriks hasil penjumlahan ]");
    for (i = 0; i < barisJumlah; i++) {
        printf("\n");
        for (j = 0; j < kolomJumlah; j++)
            printf("%d  ", jumlah[i][j]);
    }

    return 0;
}
