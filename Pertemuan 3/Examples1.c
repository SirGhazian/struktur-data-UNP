// NAMA      : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM       : 23343057
// EXAMPLES  : 1
// KASUS     : Read and display simple information.

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
    SISWA siswa1;
    char input;
    int tanya = 0;

    system("cls");  // MEMBERSIHKAN TERMINAL

    printf("<<==============================>>\n");
    printf("<<      INPUT DATA SISWA        >>\n");
    printf("<<==============================>>\n\n");

    printf("-> Masukkan nomor absen siswa   : ");
    scanf("%d", &siswa1.nomorAbsen);

    fflush(stdin);
    printf("-> Masukkan nama siswa          : ");
    gets(siswa1.namaSiswa);

    while (tanya != 1) {
        printf("-> Masukkan jenis kelamin siswa (L/P) : ");
        scanf("%c", &input);

        if (input == 'L' || input == 'l') {
            strcpy(siswa1.jenisKelamin, "Laki-Laki");
            tanya = 1;
        } else if (input == 'P' || input == 'p') {
            strcpy(siswa1.jenisKelamin, "Perempuan");
            tanya = 1;
        } else {
            printf("[ Pilihan tidak valid! Masukkan L atau P ]\n");
        }
    }

    fflush(stdin);
    printf("-> Masukkan tanggal lahir siswa : ");
    gets(siswa1.tanggalLahir);

    printf("-> Masukkan IPK siswa           : ");
    scanf("%f", &siswa1.IPK);

    system("cls");  // MEMBERSIHKAN TERMINAL

    printf("<<========== DATA SISWA ==========>>\n");
    printf("-> Nomor Absen    : %d\n", siswa1.nomorAbsen);
    printf("-> Nama Siswa     : %s\n", siswa1.namaSiswa);
    printf("-> Jenis Kelamin  : %s\n", siswa1.jenisKelamin);
    printf("-> Tanggal Lahir  : %s\n", siswa1.tanggalLahir);
    printf("-> IPK Sementara  : %.2f\n", siswa1.IPK);
    printf("<<================================>>\n\n");
    return 0;
}