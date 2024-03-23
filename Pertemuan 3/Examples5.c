// NAMA      : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM       : 23343057
// EXAMPLES  : 5
// KASUS     : Read, display, add, and subtract two distances. Distance must be defined using kms and meters.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>  // Library untuk membersihkan layar

typedef struct {
    int Km;
    int Meter;
} JARAK;

JARAK tambah_jarak(JARAK, JARAK);
JARAK kurangi_jarak(JARAK, JARAK);
JARAK jarak1, jarak2, jarak3, jarak4;
int tekanEnter();

int main() {
    int pilihan;
    system("cls");

    while (pilihan != 5) {
        printf("+====================================+");
        printf("\n| NO | MENU                          |");
        printf("\n+------------------------------------+");
        printf("\n| 1  | Input Jarak                   |");
        printf("\n| 2  | Tampilkan Jarak               |");
        printf("\n| 3  | Tambahkan Jarak               |");
        printf("\n| 4  | Kurangkan Jarak               |");
        printf("\n| 5  | Keluar Program                |");
        printf("\n+====================================+");
        printf("\n-> Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("\n-> Masukkan jarak pertama dalam Km: ");
                scanf("%d", &jarak1.Km);
                printf("   dan .... Meter: ");
                scanf("%d", &jarak1.Meter);

                printf("\n-> Masukkan jarak kedua dalam Km: ");
                scanf("%d", &jarak2.Km);
                printf("   dan .... Meter: ");
                scanf("%d", &jarak2.Meter);
                system("cls");

                printf("[ SUKSES DITAMBAHKAN ] ");
                fflush(stdin);
                getch();
                system("cls");
                break;
            case 2:
                system("cls");
                printf("-- 1) Jarak pertama adalah %d Km, dan %d Meter", jarak1.Km, jarak1.Meter);
                printf("\n-- 2) Jarak kedua adalah %d Km, dan %d Meter\n\n", jarak2.Km, jarak2.Meter);

                tekanEnter();
                break;
            case 3:
                system("cls");
                printf("-- 1) Jarak pertama adalah %d Km, dan %d Meter", jarak1.Km, jarak1.Meter);
                printf("\n-- 2) Jarak kedua adalah %d Km, dan %d Meter\n", jarak2.Km, jarak2.Meter);

                jarak3 = tambah_jarak(jarak1, jarak2);
                printf("\n-> Hasil penjumlahan dua jarak adalah %d Km %d Meter\n\n", jarak3.Km, jarak3.Meter);

                tekanEnter();
                break;
            case 4:
                system("cls");
                printf("-- 1) Jarak pertama adalah %d Km, dan %d Meter", jarak1.Km, jarak1.Meter);
                printf("\n-- 2) Jarak kedua adalah %d Km, dan %d Meter\n", jarak2.Km, jarak2.Meter);

                jarak4 = kurangi_jarak(jarak1, jarak2);
                printf("\n-> Selisih antara dua jarak adalah: %d Km %d Meter\n\n", jarak4.Km, jarak4.Meter);

                tekanEnter();
                break;
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

JARAK tambah_jarak(JARAK jarak1, JARAK jarak2) {
    JARAK hasil;

    hasil.Meter = jarak1.Meter + jarak2.Meter;
    hasil.Km = jarak1.Km + jarak2.Km;

    while (hasil.Meter >= 1000) {
        hasil.Meter = hasil.Meter % 1000;
        hasil.Km += 1;
    }
    return hasil;
}

JARAK kurangi_jarak(JARAK jarak1, JARAK jarak2) {
    JARAK selisih;
    if (jarak1.Km > jarak2.Km) {
        selisih.Meter = jarak1.Meter - jarak2.Meter;
        selisih.Km = jarak1.Km - jarak2.Km;
    } else {
        selisih.Meter = jarak2.Meter - jarak1.Meter;
        selisih.Km = jarak2.Km - jarak1.Km;
    }

    if (selisih.Meter < 0) {
        selisih.Km = selisih.Km - 1;
        selisih.Meter = selisih.Meter + 1000;
    }
    return selisih;
}

int tekanEnter() {
    printf("[ Tekan enter untuk kembali ke menu ]");
    getch();
    system("cls");
}
