// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 1

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlahArray, isiArray[30];
    system("cls");  // Membersihkan terminal

    // HEADER
    printf("|+-------------------------+|\n");
    printf("|[-      INPUT ARRAY      -]|\n");
    printf("|+-------------------------+|\n\n");

ulangiTanya:
    printf("Berapa jumlah array yang ingin dimasukkan? ");
    scanf("%d", &jumlahArray);

    if (jumlahArray > 0 && jumlahArray <= 30) {
        printf("\n");
        for (int i = 0; i < jumlahArray; i++) {
            printf("-> Masukkan angka untuk array ke-[%d]: ", i);
            scanf("%d", &isiArray[i]);
        }

        printf("\n[ Berhasil input array! ]\n");
        printf("-> Tekan enter untuk menampilkan ");
        fflush(stdin);
        getch();

        system("cls");
        printf("+----------[ LIST ARRAY ]----------+\n\n");
        for (int i = 0; i < jumlahArray; i++) {
            printf("Isi dari array ke-[%d] adalah -> %d\n", i, isiArray[i]);
        }

        printf("\n+----------------------------------+");
    } else {
        system("cls");
        printf("\n[ INPUT TIDAK VALID ]");
        printf("\n[ Jumlah Array Maksimal Hanya 30! ]\n\n");
        printf("\n[ Tekan enter untuk ulangi input ]");
        fflush(stdin);
        getch();
        system("cls");

        goto ulangiTanya;  // kembali ke label ulangiTanya
    }

    return 0;
}