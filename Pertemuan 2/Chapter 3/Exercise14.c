// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 14

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void bacaArray(int arr_saya[], int);
void tampilkanArray(int arr_saya[], int);
void tukarPosisi(int arr_saya[], int);
int cariPosisiTerbesar(int arr_saya[10], int n);
int cariPosisiTerkecil(int arr_saya[10], int n);

int main() {
    int arr[10], n;

    system("cls");
    // HEADER
    printf("|+---------------------------------------+|\n");
    printf("|[-   TUKAR POSISI ELEMEN BESAR KECIL   -]|\n");
    printf("|+---------------------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);
    printf("\n");

    bacaArray(arr, n);
    tukarPosisi(arr, n);

    printf("\n\n==-[ ARRAY BARU ]-==");
    tampilkanArray(arr, n);
    printf("\n==-----------------==\n\n");

    return 0;
}

void bacaArray(int arr_saya[10], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("--> Masukkan angka untuk array[%d]: ", i);
        scanf("%d", &arr_saya[i]);
    }
}

void tampilkanArray(int arr_saya[10], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("\n arr[%d] = %d", i, arr_saya[i]);
}

void tukarPosisi(int arr_saya[10], int n) {
    int temp, posisi_terbesar, posisi_terkecil;
    posisi_terbesar = cariPosisiTerbesar(arr_saya, n);
    posisi_terkecil = cariPosisiTerkecil(arr_saya, n);
    temp = arr_saya[posisi_terbesar];
    arr_saya[posisi_terbesar] = arr_saya[posisi_terkecil];
    arr_saya[posisi_terkecil] = temp;
}

int cariPosisiTerbesar(int arr_saya[10], int n) {
    int i, terbesar = arr_saya[0], pos = 0;
    for (i = 1; i < n; i++) {
        if (arr_saya[i] > terbesar) {
            terbesar = arr_saya[i];
            pos = i;
        }
    }
    return pos;
}

int cariPosisiTerkecil(int arr_saya[10], int n) {
    int i, terkecil = arr_saya[0], pos = 0;
    for (i = 1; i < n; i++) {
        if (arr_saya[i] < terkecil) {
            terkecil = arr_saya[i];
            pos = i;
        }
    }
    return pos;
}
