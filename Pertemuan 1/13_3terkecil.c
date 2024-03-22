// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 13
// KASUS    : Find the smallest among 3 integers.

#include <stdio.h>

int main() {
    int x, y, z;
    x = 40;
    y = 12;
    z = 36;

    printf("\nBilangan terkecil dari angka [%d, %d, %d] adalah angka: ", x, y, z);

    if (x < y && x < z) {
        printf("%d", x);
    } else if (y < x && y < z) {
        printf("%d", y);
    } else {
        printf("%d", z);
    }

    printf("\n\n");
    return 0;
}