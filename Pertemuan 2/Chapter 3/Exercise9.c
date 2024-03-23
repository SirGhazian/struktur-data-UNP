// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 9

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, jumlahElemen, posisi, arr[10];

    system("cls");
    // HEADER
    printf("|+---------------------------+|\n");
    printf("|[-    PENGHAPUSAN ARRAY    -]|\n");
    printf("|+---------------------------+|\n\n");

    printf("-> Masukkan jumlah elemen dalam array: ");
    scanf("%d", &jumlahElemen);

    printf("\n");
    for (i = 0; i < jumlahElemen; i++) {
        printf("--> Masukkan angka untuk array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMasukkan posisi array yang ingin dihapus: ");
    scanf("%d", &posisi);
    for (i = posisi; i < jumlahElemen - 1; i++) {
        arr[i] = arr[i + 1];
    }

    jumlahElemen--;

    printf("\n\n==-[ ARRAY BARU ]-==");
    for (i = 0; i < jumlahElemen; i++) {
        printf("\n-> Array ke-[%d] = %d ", i, arr[i]);
    }
    printf("\n==-----------------==\n\n");
    return 0;
}
