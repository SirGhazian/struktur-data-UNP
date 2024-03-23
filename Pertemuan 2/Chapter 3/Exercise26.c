// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 26

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[2][2][2];
    int i, j, k;

    system("cls");
    printf("~~> Masukkan elemen-elemen matriks (pisahkan dengan spasi):\n~~> ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    printf("\n\n---------------[ ELEMEN MATRIKS ]---------------");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("\n");
            for (k = 0; k < 2; k++)
                printf("array[%d]-[%d]-[%d] = %d     ", i, j, k, array[i][j][k]);
        }
    }

    printf("\n\n");
    return 0;
}
