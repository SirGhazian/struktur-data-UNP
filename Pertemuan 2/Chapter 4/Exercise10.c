// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 10

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char namaSiswa[5][10], temp[10];
    int i, jumlahSiswa, j;

    system("cls");
    printf("> Masukkan jumlah siswa: ");
    scanf("%d", &jumlahSiswa);

    for (i = 0; i < jumlahSiswa; i++) {
        printf("~~~~> Masukkan nama siswa ke-%d: ", i + 1);
        fflush(stdin);  // membersihkan stdin sebelum menggunakan gets
        gets(namaSiswa[i]);
    }

    for (i = 0; i < jumlahSiswa; i++) {
        for (j = 0; j < jumlahSiswa - 1 - i; j++) {
            if (strcmp(namaSiswa[j], namaSiswa[j + 1]) > 0) {
                strcpy(temp, namaSiswa[j]);
                strcpy(namaSiswa[j], namaSiswa[j + 1]);
                strcpy(namaSiswa[j + 1], temp);
            }
        }
    }

    printf("\n\n+--[ LIST SISWA ]--+\n");
    for (i = 0; i < jumlahSiswa; i++) {
        printf(" %d) %s\n", i + 1, namaSiswa[i]);
    }
    printf("+------------------+\n\n");
    return 0;
}
