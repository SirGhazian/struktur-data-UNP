// NAMA      : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM       : 23343057
// EXAMPLES  : 4
// KASUS     : Read, edit, and display the information of all students.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>  // Library untuk clear screen
#include <string.h>

typedef struct {
    int nomorAbsen;
    float IPK;
    char namaSiswa[50];
    char jenisKelamin[10];
    char tanggalLahir[20];
} SISWA;

int main() {
    SISWA siswa1[50];
    char input, pilihanYN;
    int tanya = 0, banyakSiswa = 0, pilihan;

    system("cls");  // MEMBERSIHKAN TERMINAL

    while (pilihan != 4) {
        printf("<<=================================>>");
        printf("\n|         DATA MAHASISWA UNP        |");
        printf("\n+-----------------------------------+");
        printf("\n| 1  | Input Data Mahasiswa         |");
        printf("\n| 2  | Tampilkan Data Mahasiswa     |");
        printf("\n| 3  | Edit Data Mahasiswa          |");
        printf("\n| 4  | Keluar Program               |");
        printf("\n<<==================================>>");

        printf("\n-> Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("-> Berapa banyak siswa yang ingin ditambahkan? ");
                scanf("%d", &banyakSiswa);

                for (int i = 0; i < banyakSiswa; i++) {
                    printf("\n[ SISWA KE-%d ]", i + 1);
                    printf("\n-> Masukkan nomor absen siswa   : ");
                    scanf("%d", &siswa1[i].nomorAbsen);

                    fflush(stdin);
                    printf("-> Masukkan nama siswa          : ");
                    gets(siswa1[i].namaSiswa);

                    while (tanya != 1) {
                        printf("-> Masukkan jenis kelamin siswa (L/P) : ");
                        scanf("%c", &input);

                        if (input == 'L' || input == 'l') {
                            strcpy(siswa1[i].jenisKelamin, "Laki-Laki");
                            tanya = 1;
                        } else if (input == 'P' || input == 'p') {
                            strcpy(siswa1[i].jenisKelamin, "Perempuan");
                            tanya = 1;
                        } else {
                            printf("[ Pilihan tidak valid! Masukkan L atau P ]\n");
                        }
                    }
                    tanya = 0;

                    fflush(stdin);
                    printf("-> Masukkan tanggal lahir siswa : ");
                    gets(siswa1[i].tanggalLahir);

                    printf("-> Masukkan IPK siswa           : ");
                    scanf("%f", &siswa1[i].IPK);
                }
                system("cls");
                break;

            case 2:
                if (banyakSiswa != 0) {
                    system("cls");  // MEMBERSIHKAN TERMINAL
                    for (int i = 0; i < banyakSiswa; i++) {
                        printf("<<===== [ DATA SISWA KE-%d ] =====>>\n", i + 1);
                        printf("-> Nomor Absen    : %d\n", siswa1[i].nomorAbsen);
                        printf("-> Nama Siswa     : %s\n", siswa1[i].namaSiswa);
                        printf("-> Jenis Kelamin  : %s\n", siswa1[i].jenisKelamin);
                        printf("-> Tanggal Lahir  : %s\n", siswa1[i].tanggalLahir);
                        printf("-> IPK Sementara  : %.2f\n\n\n", siswa1[i].IPK);
                    }
                } else {
                    system("cls");
                    printf("[ TIDAK DITEMUKAN DATA MAHASISWA ]\n\n");
                }

                printf("[ Tekan enter untuk kembali ke menu ]");
                getch();
                system("cls");
                break;

            case 3:
                printf("-> Data siswa ke berapa yang ingin diubah? ");
                scanf("%d", &pilihan);
                pilihan--;
                if (pilihan < banyakSiswa && pilihan >= 0) {
                    system("cls");
                    printf("\n<<===== [ DATA SISWA KE-%d ] =====>>\n", pilihan + 1);
                    printf("-> Nomor Absen    : %d\n", siswa1[pilihan].nomorAbsen);
                    printf("-> Nama Siswa     : %s\n", siswa1[pilihan].namaSiswa);
                    printf("-> Jenis Kelamin  : %s\n", siswa1[pilihan].jenisKelamin);
                    printf("-> Tanggal Lahir  : %s\n", siswa1[pilihan].tanggalLahir);
                    printf("-> IPK Sementara  : %.2f\n\n\n", siswa1[pilihan].IPK);

                    printf("-> Apakah anda yakin ingin mengubah data? (Y/N) ");
                    fflush(stdin);
                    scanf("%c", &pilihanYN);

                    if (pilihanYN == 'Y' || pilihanYN == 'y') {
                        printf("\n[ SISWA KE-%d ]", pilihan + 1);
                        printf("\n-> Masukkan nomor absen siswa   : ");
                        scanf("%d", &siswa1[pilihan].nomorAbsen);

                        fflush(stdin);
                        printf("-> Masukkan nama siswa          : ");
                        gets(siswa1[pilihan].namaSiswa);

                        while (tanya != 1) {
                            printf("-> Masukkan jenis kelamin siswa (L/P) : ");
                            scanf("%c", &input);

                            if (input == 'L' || input == 'l') {
                                strcpy(siswa1[pilihan].jenisKelamin, "Laki-Laki");
                                tanya = 1;
                            } else if (input == 'P' || input == 'p') {
                                strcpy(siswa1[pilihan].jenisKelamin, "Perempuan");
                                tanya = 1;
                            } else {
                                printf("[ Pilihan tidak valid! Masukkan L atau P ]\n");
                            }
                        }
                        tanya = 0;

                        fflush(stdin);
                        printf("-> Masukkan tanggal lahir siswa : ");
                        gets(siswa1[pilihan].tanggalLahir);

                        printf("-> Masukkan IPK siswa           : ");
                        scanf("%f", &siswa1[pilihan].IPK);
                        system("cls");
                    } else {
                        system("cls");
                        continue;
                    }
                } else {
                    system("cls");
                    printf("[ TIDAK DITEMUKAN DATA MAHASISWA ]");
                    getch();
                    system("cls");
                }
                break;
            case 4:
                break;
            default:
                system("cls");
                printf("[ PILIHAN TIDAK VALID ]\n\n");
                break;
        }
    }
    return 0;
}