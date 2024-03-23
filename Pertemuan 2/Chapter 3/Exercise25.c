// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 25

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void tampilkanMatriks(int (*)[3]);

int main() {
    int i, j, matriks[3][3];

    system("cls");
    printf("~~> Masukkan elemen-elemen matriks (pisahkan dengan spasi):\n~~> ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
    tampilkanMatriks(matriks);
    return 0;
}

void tampilkanMatriks(int (*matriks)[3]) {
    int i, j;
    printf("\n[ ELEMEN MATRIKS ]");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d\t", *(*(matriks + i) + j));
        }
    }
}
