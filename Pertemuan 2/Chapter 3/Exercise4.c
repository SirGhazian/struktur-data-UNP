// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 4

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, arr[20], besarPertama, besarKedua;
    system("cls");

    // HEADER
    printf("|+-------------------------+|\n");
    printf("|[-    ELEMEN TERBESAR    -]|\n");
    printf("|+-------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("-> Masukkan angka untuk array ke-[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    besarPertama = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > besarPertama)
            besarPertama = arr[i];
    }

    besarKedua = arr[1];

    for (int i = 0; i < n; i++) {
        if (arr[i] != besarPertama) {
            if (arr[i] > besarKedua) {
                besarKedua = arr[i];
            }
        }
    }

    printf("\n==------------[HASIL]------------==");
    printf("\n1) Angka terbesar pertama -> %d", besarPertama);
    printf("\n2) Angka terbesar kedua -> %d", besarKedua);
    printf("\n==-------------------------------==\n\n");
}
