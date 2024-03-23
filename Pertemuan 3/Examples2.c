// NAMA      : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM       : 23343057
// EXAMPLES  : 2
// KASUS     : Write a program to read, display, add, and subtract two complex numbers.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>  // Library untuk clear screen
#include <string.h>

typedef struct {
    int real;
    int imajiner;
} kelompokBilangan;

int tekanEnter() {
    system("cls");
    printf("[ Anda belum memasukkan bilangan kompleks! ]");
    getch();
    system("cls");
}

int main() {
    kelompokBilangan kel1, kel2, tambah, kurang, kali, bagi;
    int cekBil = 0;
    int pilihan, hasil;
    char pilihanYN;

    system("cls");
    while (pilihan != 5) {
        printf("+====================================+");
        printf("\n| NO | MENU                          |");
        printf("\n+------------------------------------+");
        printf("\n| 1  | Input Bilangan                |");
        printf("\n| 2  | Tampilkan Bilangan Input      |");
        printf("\n| 3  | Tambahkan Bilangan Input      |");
        printf("\n| 4  | Kurangkan Bilangan Input      |");
        printf("\n| 5  | Keluar Program                |");
        printf("\n+====================================+");

        printf("\n-> Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
            ulangTanya:
                system("cls");
                printf("-> Masukkan bilangan Real-1     : ");
                scanf("%d", &kel1.real);
                printf("-> Masukkan bilangan Imajiner-1 : ");
                scanf("%d", &kel1.imajiner);

                printf("\n-> Masukkan bilangan Real-2     : ");
                scanf("%d", &kel2.real);
                printf("-> Masukkan bilangan Imajiner-2 : ");
                scanf("%d", &kel2.imajiner);

                system("cls");

                cekBil = 1;
                break;
            case 2:
                if (cekBil == 0) {
                    tekanEnter();
                    break;
                } else {
                    system("cls");
                    printf("\n[ Bilangan kompleks pertama ]");
                    printf("\n-- Bilangan Real     : %d", kel1.real);
                    printf("\n-- Bilangan Imajiner : %d", kel1.imajiner);

                    printf("\n\n[ Bilangan kompleks kedua ]");
                    printf("\n-- Bilangan Real     : %d", kel2.real);
                    printf("\n-- Bilangan Imajiner : %d", kel2.imajiner);

                    printf("\n\nApakah anda ingin mengubah bilangan kompleks (Y/N)? ");
                    fflush(stdin);
                    scanf("%c", &pilihanYN);

                    if (pilihanYN == 'Y' || pilihanYN == 'y') {
                        goto ulangTanya;
                    } else {
                        system("cls");
                        continue;
                    }

                    break;
                }
            case 3:
                if (cekBil == 0) {
                    tekanEnter();
                    break;
                } else {
                    tambah.real = kel1.real + kel2.real;
                    tambah.imajiner = kel1.imajiner + kel2.imajiner;
                    hasil = tambah.real + tambah.imajiner;

                    system("cls");
                    printf("\n-> Real     : (%d + %d)", kel1.real, kel2.real);
                    printf("\n-> Imajiner : (%d + %d)", kel1.imajiner, kel2.imajiner);
                    printf("\n----------------------- +");
                    printf("\n-> Hasil    : %d", hasil);

                    printf("\n\n\n[ Tekan enter untuk keluar ]");
                    fflush(stdin);
                    scanf("%c", &pilihanYN);
                    system("cls");
                    break;
                }
            case 4:
                if (cekBil == 0) {
                    tekanEnter();
                    break;
                } else {
                    kurang.real = kel1.real - kel2.real;
                    kurang.imajiner = kel1.imajiner - kel2.imajiner;
                    hasil = kurang.real - kurang.imajiner;

                    system("cls");
                    printf("\n-> Real     : (%d - %d)", kel1.real, kel2.real);
                    printf("\n-> Imajiner : (%d - %d)", kel1.imajiner, kel2.imajiner);
                    printf("\n----------------------- -");
                    printf("\n-> Hasil    : %d", hasil);

                    printf("\n\n\n[ Tekan enter untuk keluar ]");
                    fflush(stdin);
                    scanf("%c", &pilihanYN);
                    system("cls");
                    break;
                }
            case 5:
                break;

            default:
                system("cls");
                printf("[ PILIHAN TIDAK VALID ]\n\n");
                break;
        }
    }

    return 0;
}