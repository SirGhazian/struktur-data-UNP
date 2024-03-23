// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 10

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, j, angkaHapus, array[10];

    system("cls");
    // HEADER
    printf("|+------------------------------+|\n");
    printf("|[-   PENGHAPUSAN ISI ELEMEN   -]|\n");
    printf("|+------------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("--> Masukkan angka untuk array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nMasukkan angka/isi elemen yang akan dihapus: ");
    scanf("%d", &angkaHapus);

    for (i = 0; i < n; i++) {
        if (array[i] == angkaHapus) {
            for (j = i; j < n - 1; j++)
                array[j] = array[j + 1];
        }
    }

    n = n - 1;

    printf("\n\n==-[ ARRAY BARU ]-==");
    for (i = 0; i < n; i++) {
        printf("\n-> Array ke-[%d] = %d ", i, array[i]);
    }
    printf("\n==-----------------==\n\n");

    return 0;
}
