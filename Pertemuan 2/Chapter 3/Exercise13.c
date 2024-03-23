// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 13

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void bacaArray(int array[], int n);
int cariTerkecil(int array[], int n);
int cariArrayKe(int array[], int n, int terkecil);

int main() {
    int num[10], n, terkecil;

    system("cls");
    // HEADER
    printf("|+--------------------------------------+|\n");
    printf("|[-   MENENTUKAN ISI ELEMEN TERKECIL   -]|\n");
    printf("|+--------------------------------------+|\n\n");

    printf("Masukkan ukuran array: ");
    scanf("%d", &n);

    bacaArray(num, n);
    terkecil = cariTerkecil(num, n);

    printf("\n\n[ Angka terkecil dalam array adalah -> %d ]", terkecil);
    printf("\n[ Yang terletak pada -> array[%d] ]\n\n", cariArrayKe(num, n, terkecil));

    return 0;
}

void bacaArray(int array[10], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("--> Masukkan angka untuk array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

int cariTerkecil(int array[10], int n) {
    int i = 0, terkecil = array[0];
    for (i = 1; i < n; i++) {
        if (array[i] < terkecil)
            terkecil = array[i];
    }
    return terkecil;
}

int cariArrayKe(int array[], int n, int terkecil) {  // Cari array ke saat output terakhir
    int i;
    for (i = 0; i < n; i++) {
        if (array[i] == terkecil)
            return i;
    }
    return -1;
}
