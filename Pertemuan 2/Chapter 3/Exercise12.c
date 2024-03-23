// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 12

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int index1 = 0, index2 = 0;
    int i, n1, n2, m, indeks = 0;
    int array1[10], array2[10], arrayGabungan[20];

    system("cls");
    // HEADER
    printf("|+-----------------------------+|\n");
    printf("|[-   PENYORTIRAN ISI ARRAY   -]|\n");
    printf("|+-----------------------------+|\n\n");

    printf("Masukkan jumlah elemen dalam array1 : ");
    scanf("%d", &n1);
    printf("\n[ Masukkan elemen dari array-1 ]\n\n");

    for (i = 0; i < n1; i++) {
        printf("--> Masukkan angka untuk array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("\n-------------------------------------------\n");

    printf("\nMasukkan jumlah elemen dalam array2 : ");
    scanf("%d", &n2);
    printf("\n[ Masukkan elemen dari array-2 ]\n\n");

    for (i = 0; i < n2; i++) {
        printf("--> Masukkan angka untuk array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    m = n1 + n2;

    while (index1 < n1 && index2 < n2) {
        if (array1[index1] < array2[index2]) {
            arrayGabungan[indeks] = array1[index1];
            index1++;
        } else {
            arrayGabungan[indeks] = array2[index2];
            index2++;
        }
        indeks++;
    }

    if (index1 == n1) {
        while (index2 < n2) {
            arrayGabungan[indeks] = array2[index2];
            index2++;
            indeks++;
        }
    }

    else if (index2 == n2) {
        while (index1 < n1) {
            arrayGabungan[indeks] = array1[index1];
            index1++;
            indeks++;
        }
    }

    system("cls");
    printf("[ Sukses Menambahkan! ]");
    printf("\n[ Tekan Enter untuk melanjutkan ] ");
    fflush(stdin);
    getch();
    system("cls");

    printf("==-[ ARRAY BARU ]-==");
    for (i = 0; i < m; i++) {
        printf("\n-> arrayGabungan ke-[%d] = %d", i, arrayGabungan[i]);
    }
    printf("\n==-----------------==\n\n");

    return 0;
}
