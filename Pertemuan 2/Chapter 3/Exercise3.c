// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 3

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlah, array[20], terkecil, posisi;
    system("cls");

    // HEADER
    printf("|+-------------------------+|\n");
    printf("|[-      INDEX ARRAY      -]|\n");
    printf("|+-------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &jumlah);

    system("cls");
    printf("--[ Masukkan isi elemen array ]--\n");

    for (int i = 0; i < jumlah; i++) {
        printf("> Masukkan isi array ke-[%d]: ", i);
        scanf("%d", &array[i]);
    }

    terkecil = array[0];
    posisi = 0;

    for (int i = 1; i < jumlah; i++) {
        if (array[i] < terkecil) {
            terkecil = array[i];
            posisi = i;
        }
    }

    printf("\n-> Elemen terkecil adalah -> %d", terkecil);
    printf("\n--> Posisi elemen terkecil dalam array adalah [%d]", posisi);
    printf("\n\n");

    return 0;
}
