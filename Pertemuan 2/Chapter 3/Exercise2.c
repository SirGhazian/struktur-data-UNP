// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 2

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int index, jumlah_elemen, array[20], jumlah = 0;
    float rata_rata = 0.0;
    system("cls");

    // HEADER
    printf("|+-----------------------+|\n");
    printf("|[-    OPERASI ARRAY    -]|\n");
    printf("|+-----------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &jumlah_elemen);

    printf("\n");
    for (index = 0; index < jumlah_elemen; index++) {
        printf("> Masukkan array ke-[%d] = ", index);
        scanf("%d", &array[index]);
    }
    for (index = 0; index < jumlah_elemen; index++) {
        jumlah += array[index];
        rata_rata = (float)jumlah / jumlah_elemen;
    }

    printf("\n-> Jumlah elemen array -> %d", jumlah);
    printf("\n--> Rata-rata elemen array -> %.2f", rata_rata);
    printf("\n\n");

    return 0;
}
