// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 5

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlahDigit, index;
    int angka = 0, digit[10];

    system("cls");  // Membersihkan terminal

    // HEADER
    printf("|+-----------------------+|\n");
    printf("|[-   PENYATUAN ANGKA   -]|\n");
    printf("|+-----------------------+|\n\n");

    printf("-> Masukkan jumlah digit angka: ");
    scanf("%d", &jumlahDigit);

    printf("\n");
    for (index = 0; index < jumlahDigit; index++) {
        printf("-> Masukkan digit pada posisi ke-%d ]: ", index + 1);
        scanf("%d", &digit[index]);
    }

    for (index = 0; index < jumlahDigit; index++) {
        angka = angka * 10 + digit[index];
    }

    printf("\nGabungan angka tersebut adalah -> [ %d ]", angka);
    printf("\n\n");
    return 0;
}
