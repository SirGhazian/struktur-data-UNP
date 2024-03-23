// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 27

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k;
    int arr[2][2][2];
    int(*pArr)[2][2] = arr;

    system("cls");
    printf("~~> Masukkan elemen-elemen dari array 2 * 2 * 2: \n~~> ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);
        }
    }
    printf("\n~~> Elemen-elemen dari array 2 * 2 * 2 adalah: \n~~> ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++)
                printf("%d-", *(*(*(pArr + i) + j) + k));
        }
    }
    printf("\n\n");
    return 0;
}
