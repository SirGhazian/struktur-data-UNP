// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 11

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array1[10], array2[10], arrayGabungan[20];
    int i, n1, n2, m, index = 0;

    system("cls");
    // HEADER
    printf("|+------------------------------+|\n");
    printf("|[-   PENGGABUNGAN ISI ARRAY   -]|\n");
    printf("|+------------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array1 : ");
    scanf("%d", &n1);
    printf("\n[ Masukkan elemen dari array-1 ]\n\n");

    for (i = 0; i < n1; i++) {
        printf("--> Masukkan angka untuk array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("\n-------------------------------------------\n");

    printf("\nMasukkan jumlah elemen dalam array2 : ");
    scanf("%d", &n2);
    printf("\n[ Masukkan elemen dari array-2 ]\n\n");

    for (i = 0; i < n2; i++) {
        printf("--> Masukkan angka untuk array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    m = n1 + n2;

    for (i = 0; i < n1; i++) {
        arrayGabungan[index] = array1[i];
        index++;
    }

    for (i = 0; i < n2; i++) {
        arrayGabungan[index] = array2[i];
        index++;
    }

    system("cls");
    printf("[ Sukses Menambahkan! ]");
    printf("\n[ Tekan Enter untuk melanjutkan ] ");
    fflush(stdin);
    getch();
    system("cls");

    printf("==-[ ARRAY BARU ]-==");
    for (i = 0; i < m; i++) {
        printf("\n-> arrayGabungan ke-[%d] = %d ", i, arrayGabungan[i]);
    }
    printf("\n==-----------------==\n\n");

    return 0;
}
