// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 18

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int penjualan[5][3];
    int totalSales, i, j, totalJual = 0;

    system("cls");
    // HEADER
    printf("|+-----------------------+|\n");
    printf("|[-   MANEJEMEN SALES   -]|\n");
    printf("|+-----------------------+|\n\n");

    printf("-> Jumlah Salesman yang berjualan: ");
    scanf("%d", &totalSales);

    for (i = 0; i < totalSales; i++) {
        printf("\n[ Penjualan Salesman %d ]\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("~ Item %d: ", j + 1);
            scanf("%d", &penjualan[i][j]);
        }
    }

    // MENAMPILKAN TOTAL PENJUALAN SETIAP SALESMAN
    printf("\n\n-------|[----KINERJA SALES----]|-------\n");
    for (i = 0; i < totalSales; i++) {
        totalJual = 0;
        for (j = 0; j < 3; j++)
            totalJual += penjualan[i][j];
        printf("~ Total Penjualan Salesman %d: %d\n", i + 1, totalJual);
    }
    printf("|+-----------------------------------+|\n\n");

    // TOTAL PENJUALAN SETIAP ITEM
    printf("\n-------|[---TOTAL PENJUALAN---]|-------\n");
    for (i = 0; i < 3; i++) {
        totalJual = 0;
        for (j = 0; j < totalSales; j++)
            totalJual += penjualan[j][i];
        printf("~ Total penjualan dari item %d: %d\n", i + 1, totalJual);
    }
    printf("|+-----------------------------------+|\n\n");

    return 0;
}
