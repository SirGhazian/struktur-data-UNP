// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 3 -- 19

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nilai[5][3];
    int jumlahMhs, i, j, nilai_maksimum;

    system("cls");
    // HEADER
    printf("|+------------------------+|\n");
    printf("|[-   MATKUL MAHASISWA   -]|\n");
    printf("|+------------------------+|\n\n");

    printf("-> Jumlah mahasiswa: ");
    scanf("%d", &jumlahMhs);

    for (i = 0; i < jumlahMhs; i++) {
        printf("\n[ Masukkan nilai yang diperoleh oleh mahasiswa %d ]\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("~~> Mata kuliah ke-%d: ", j + 1);
            scanf("%d", &nilai[i][j]);
        }
    }

    printf("\n\n|+--------------|[----HASIL NILAI MATKUL----]|--------------+|\n");
    for (j = 0; j < 3; j++) {
        nilai_maksimum = nilai[0][j];
        for (i = 1; i < jumlahMhs; i++) {
            if (nilai[i][j] > nilai_maksimum) {
                nilai_maksimum = nilai[i][j];
            }
        }
        printf("\n%d) Nilai tertinggi yang diperoleh dalam mata kuliah ke-%d = %d", j + 1, j + 1, nilai_maksimum);
    }
    printf("\n\n|+----------------------------------------------------------+|\n\n");

    return 0;
}
