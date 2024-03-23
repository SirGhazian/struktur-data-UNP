// NAMA : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM  : 23343057
// SOAL : Chapter 4 -- 8

#include <stdio.h>
#include <stdlib.h>

int main() {
    char teksUtama[200], teksHapus[30], teksBaru[200];
    int i = 0, j = 0, k, n = 0, copyLoop = 0;

    system("cls");
    printf("> Masukkan teks utama: ");
    gets(teksUtama);

    printf("> Masukkan string yang akan dihapus: ");
    gets(teksHapus);

    while (teksUtama[i] != '\0') {
        copyLoop = 0;
        k = i;
        while (teksUtama[i] == teksHapus[j] && teksUtama[i] != '\0' && teksHapus[j] != '\0') {
            i++;
            j++;
        }
        if (teksHapus[j] == '\0') {
            copyLoop = 1;
        }
        j = 0;
        if (copyLoop == 0) {
            teksBaru[n] = teksUtama[k];
            n++;
            i = k + 1;
        } else {
            j = i;
            while (teksUtama[j] != '\0') {
                teksBaru[n] = teksUtama[j];
                j++;
                n++;
            }
            teksBaru[n] = '\0';
            break;
        }
    }

    printf("\n~~~> Teks Awal : %s", teksUtama);
    printf("\n~~~> Teks Baru : %s\n\n", teksBaru);

    return 0;
}
