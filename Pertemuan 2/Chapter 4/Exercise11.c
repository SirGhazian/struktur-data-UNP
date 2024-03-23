// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 11

#include <stdio.h>
#include <stdlib.h>

int main() {
    char teks[1000];
    int i = 0, jumlahKata = 0, jumlahBaris = 1, jumlahKarakter = 0;

    system("cls");
    printf("+------------------------------------------------+");
    printf("\n( Masukkan '*' di akhir kalimat untuk mengakhiri )");
    printf("\n+------------------------------------------------+");
    printf("\n-> Masukkan teks: ");
    fgets(teks, sizeof(teks), stdin);

    while (teks[i] != '*') {
        if (teks[i] == '\n') {
            jumlahBaris++;
        }
        if (teks[i] == ' ' || teks[i] == '\n') {
            jumlahKata++;
        }
        jumlahKarakter++;
        i++;
    }
    printf("\n~~> Total kata adalah %d", jumlahKata + 1);  // karena kata terakhir tidak dihitung di dalam loop
    printf("\n~~> Total baris adalah %d", jumlahBaris);
    printf("\n~~> Total karakter adalah %d\n\n", jumlahKarakter);
    return 0;
}
