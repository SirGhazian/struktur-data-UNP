// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 21
// KASUS    : Find odd numbers from m to n.

#include <stdbool.h>
#include <stdio.h>

int main() {
    int m = 0;
    int n = 20;

    printf("\nBilangan ganjil yang terdapat pada deretan angka %d hinnga %d adalah: ", m, n);

    bool angkaPertama = false;  // Cek kondisi jika angka pertama dicetak
    for (int i = m; i <= n; i++) {
        if (i % 2 != 0) {
            if (angkaPertama) {
                printf(", ");  // Cetak koma setelah angka pertama dicetak
            } else {
                angkaPertama = true;
            }
            printf("%d", i);
        }
    }
    printf("\n\n");
    return 0;
}