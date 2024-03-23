// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 6

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[10], dupDitemukan = 0;
    int i, j, input;

    system("cls");
    // HEADER
    printf("|+------------------------+|\n");
    printf("|[-  CEK DUPLIKAT ANGKA  -]|\n");
    printf("|+------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &input);

    printf("\n");
    for (i = 0; i < input; i++) {
        printf("-> Masukkan angka untuk array ke-[%d]: ", i);
        scanf("%d", &array[i]);
    }

    system("cls");
    for (i = 0; i < input; i++) {
        for (j = i + 1; j < input; j++) {
            if (array[i] == array[j] && i != j) {
                dupDitemukan = 1;
                printf("\n==[ Angka Duplikat Ditemukan! ]==");
                printf("\n---> Isi elemen sama: %d", array[i]);
                printf("\n---> Pada array ke [%d]", i);
                printf("\n---> Pada array ke [%d]", j);
                printf("\n\n");
            }
        }
    }

    if (dupDitemukan == 0) {
        printf("==[ Tidak Ada Angka Duplikat ]==\n\n");
    }

    return 0;
}
