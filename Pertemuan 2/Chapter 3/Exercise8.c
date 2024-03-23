// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 8

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, totalElemen, j, num, arr[11];

    system("cls");
    // HEADER
    printf("|+--------------------------+|\n");
    printf("|[-    PENYISIPAN ARRAY    -]|\n");
    printf("|+--------------------------+|\n\n");

    printf("-> Masukkan jumlah elemen dalam array (maksimal 10): ");
    scanf("%d", &totalElemen);

    printf("\n");
    if (totalElemen < 0 || totalElemen > 10) {
        printf("[ Input tidak valid. Jumlah elemen melebihi batas! ]\n");
    }

    for (i = 0; i < totalElemen; i++) {
        printf("--> Masukkan angka untuk array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n-> Masukkan angka yang akan disisipkan untuk array[%d]: ", i);
    scanf("%d", &num);

    printf("\n[ SUKSES DITAMBAHKAN - TEKAN ENTER ] ");
    getch();

    totalElemen++;
    arr[i] = num;

    system("cls");
    printf("==-[ ARRAY BARU ]-==");
    for (i = 0; i < totalElemen; i++) {
        printf("\n-> Array ke-[%d] = %d ", i, arr[i]);
    }
    printf("(ARRAY BARU)");
    printf("\n==-----------------==\n\n");

    return 0;
}
