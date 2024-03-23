// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], subStr[100];
    int i = 0, j = 0, n, m;

    system("cls");
    printf("> Masukkan string utama: ");
    gets(str);  // Menggunakan gets() yang lebih sederhana

    printf("> Masukkan posisi mulai substring: ");
    scanf("%d", &m);

    printf("> Masukkan posisi akhir substring: ");
    scanf("%d", &n);

    m--;
    n--;

    while (str[i] != '\0' && n > 0) {
        subStr[j] = str[m];
        i++;
        j++;
        m++;
        n--;
    }

    subStr[j] = '\0';
    printf("\n~~~> Substring awal sebelum dipotong : %s", str);
    printf("\n~~~> Substring yang telah dipotong   : %s\n\n", subStr);

    return 0;
}
