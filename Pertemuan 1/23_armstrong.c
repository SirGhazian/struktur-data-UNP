// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 23
// KASUS    : Read armstrong numbers.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>  // Library untuk clear terminal

int main() {
    int angka, angkaAwal, sisa, n = 0, hasil = 0;

    while (1) {
        printf("\nMasukkan angka (masukkan -1 untuk berhenti): ");
        scanf("%d", &angka);

        if (angka == -1) {
            break;  // Keluar dari loop ketika -1 dimasukkan
        }

        angkaAwal = angka;
        n = 0;
        hasil = 0;

        // Cari jumlah digit
        while (angkaAwal != 0) {
            angkaAwal /= 10;
            ++n;
        }

        angkaAwal = angka;

        // Hitung jumlah pangkat n dari digit
        while (angkaAwal != 0) {
            sisa = angkaAwal % 10;
            hasil += pow(sisa, n);
            angkaAwal /= 10;
        }

        // Apakah hasil yang dihitung sama dengan angka awal
        if (hasil == angka) {
            system("cls");
            printf("\nAngka yang dimasukkan: %d\n", angka);
            printf("[ %d adalah bilangan Armstrong ]\n", angka);
        } else {
            system("cls");
            printf("\nAngka yang dimasukkan: %d\n", angka);
            printf("[ %d bukan bilangan Armstrong ]\n", angka);
        }
    }
    system("cls");
    printf("\n[ Program selesai ]\n\n");

    return 0;
}
