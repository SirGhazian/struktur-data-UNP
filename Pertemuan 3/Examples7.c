// NAMA      : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM       : 23343057
// EXAMPLES  : 7
// KASUS     : Using an array of pointers to a structure.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>  // Library untuk membersihkan layar

int tekanEnter();

typedef struct {
    int nomorAbsen;
    char namaMhs[20];
    char matkul[20];
    float uktKuliah;
} mahasiswa;

mahasiswa *pointer_mhs[10];

int main() {
    int pilihan, adaMhs = 0;
    int banyakMhs;

    system("cls");
    while (pilihan != 3) {
        printf("<<=================================>>");
        printf("\n|         DATA MAHASISWA UNP        |");
        printf("\n+-----------------------------------+");
        printf("\n| 1  | Input Data Mahasiswa         |");
        printf("\n| 2  | Tampilkan Data Mahasiswa     |");
        printf("\n| 3  | Keluar Program               |");
        printf("\n<<==================================>>");
        printf("\n-> Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Berapa banyak mahasiswa yang ingin ditambahkan? ");
                scanf("%d", &banyakMhs);
                system("cls");
                for (int i = 0; i < banyakMhs; i++) {
                    pointer_mhs[i] = (mahasiswa *)malloc(sizeof(mahasiswa));

                    printf("[ MAHASISWA KE-%d ]", i + 1);

                    printf("\nMasukkan nomor absen       : ");
                    scanf("%d", &pointer_mhs[i]->nomorAbsen);

                    fflush(stdin);
                    printf("Masukkan nama mahasiswa    : ");
                    gets(pointer_mhs[i]->namaMhs);

                    printf("Masukkan matkul mahasiswa  : ");
                    gets(pointer_mhs[i]->matkul);

                    printf("Masukkan harga UKT         : ");
                    scanf("%f", &pointer_mhs[i]->uktKuliah);

                    printf("\n");
                }
                system("cls");
                printf("[ SUKSES DITAMBAHKAN ]");
                getch();
                system("cls");
                adaMhs = 1;
                break;
            case 2:
                if (adaMhs != 0) {
                    system("cls");
                    for (int i = 0; i < banyakMhs; i++) {
                        printf("[ MAHASISWA KE-%d ]\n", i + 1);
                        printf("-> Nomor absen     : %02d\n", pointer_mhs[i]->nomorAbsen);
                        printf("-> Nama Mahasiswa  : %s\n", pointer_mhs[i]->namaMhs);
                        printf("-> Matkul diambil  : %s\n", pointer_mhs[i]->matkul);
                        printf("-> Harga total UKT : %.2f\n", pointer_mhs[i]->uktKuliah);
                        printf("<<------------------------>>\n\n");
                    }
                    tekanEnter();
                } else {
                    system("cls");
                    printf("[ BELUM ADA DATA MAHASISWA ]");
                    getch();
                    system("cls");
                }

                break;
            case 3:
                break;
            default:
                system("cls");
                printf("[ PILIHAN TIDAK VALID ]\n\n");
                break;
        }
    }
    return 0;
}

int tekanEnter() {
    printf("\n[ Tekan enter untuk kembali ke menu ]");
    getch();
    system("cls");
}