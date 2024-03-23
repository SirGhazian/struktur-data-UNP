// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 24

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void bacaMatriks(int mat[5][5], int r);
void tampilkanMatriks(int mat[5][5], int r);

int main() {
    int baris;
    int mat1[5][5];

    system("cls");
    printf("~~> Masukkan jumlah baris dan kolom matriks: ");
    scanf("%d", &baris);
    bacaMatriks(mat1, baris);
    tampilkanMatriks(mat1, baris);

    printf("\n\n");
    return 0;
}

void bacaMatriks(int mat[5][5], int r) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            if (i == j)
                mat[i][j] = 0;
            else if (i > j)
                mat[i][j] = -1;
            else
                mat[i][j] = 1;
        }
    }
}

void tampilkanMatriks(int mat[5][5], int r) {
    int i, j;
    for (i = 0; i < r; i++) {
        printf("\n");
        for (j = 0; j < r; j++)
            printf("%d\t", mat[i][j]);
    }
}
