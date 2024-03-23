// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 7

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, isiBaru, elemenBaru;
    int arr[10];

    system("cls");
    // HEADER
    printf("|+------------------------+|\n");
    printf("|[-    UBAH ISI ARRAY    -]|\n");
    printf("|+------------------------+|\n\n");

    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    printf("\n");
    for (i = 0; i < n; i++) {
        printf("-> Masukkan angka untuk array ke-[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n-> Elemen array yang ingin diubah: ");
    scanf("%d", &elemenBaru);

    printf("-> Masukkan isi elemen yang baru untuk array[%d]: ", elemenBaru);
    scanf("%d", &isiBaru);

    system("cls");
    printf("[        Berhasil Diubah!       ]\n");
    printf("[ Tekan enter untuk menampilkan ] ");
    getch();
    system("cls");

    for (i = n - 1; i >= elemenBaru; i--) {
        arr[i + 1] = arr[i];
    }

    arr[elemenBaru] = isiBaru;

    printf("==-[ ARRAY BARU ]-==");
    for (i = 0; i < n; i++) {
        printf("\n-> array[%d] = %d", i, arr[i]);
    }
    printf("\n==-----------------==\n\n");

    return 0;
}