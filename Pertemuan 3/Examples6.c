// NAMA      : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM       : 23343057
// EXAMPLES  : 6
// KASUS     : Initialize the members of a structure by using a pointer to the structure.

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

int main() {
    mahasiswa mhs1, *pointer_mhs1;
    int pilihan, adaMhs = 0;
    pointer_mhs1 = &mhs1;

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
                printf("\nMasukkan nomor absen       : ");
                scanf("%d", &pointer_mhs1->nomorAbsen);

                fflush(stdin);
                printf("Masukkan nama mahasiswa    : ");
                gets(pointer_mhs1->namaMhs);

                printf("Masukkan matkul mahasiswa  : ");
                gets(pointer_mhs1->matkul);

                printf("Masukkan harga UKT         : ");
                scanf("%f", &pointer_mhs1->uktKuliah);
                system("cls");

                printf("[ SUKSES DITAMBAHKAN ]");
                getch();
                system("cls");

                adaMhs = 1;
                break;
            case 2:
                if (adaMhs != 0) {
                    system("cls");
                    printf("<<---- DATA MAHASISWA ---->>\n\n");
                    printf("-> Nomor absen     : %02d\n", pointer_mhs1->nomorAbsen);
                    printf("-> Nama Mahasiswa  : %s\n", pointer_mhs1->namaMhs);
                    printf("-> Matkul diambil  : %s\n", pointer_mhs1->matkul);
                    printf("-> Harga total UKT : %.2f\n\n", pointer_mhs1->uktKuliah);
                    printf("<<--- --- -------- --- --->>\n\n");

                    tekanEnter();
                } else {
                    system("cls");
                    printf("[ BELUM ADA DATA MAHASISWA ]\n\n");
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
    printf("[ Tekan enter untuk kembali ke menu ]");
    getch();
    system("cls");
}