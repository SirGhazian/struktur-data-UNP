// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 11
// KASUS    : Integer Converter to Decimal, Octal, and Hexadecimal

#include <stdio.h>

int main() {
    int bilangan;

    // Meminta pengguna untuk memasukkan bilangan bulat
    printf("\n--> Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    // Menampilkan tabel nilai bilangan dalam notasi desimal, oktal, dan heksadesimal
    printf("\n=======================================================\n");
    printf("| Asli       | Desimal    | Oktal      | Heksadesimal |\n");
    printf("-------------------------------------------------------\n");
    printf("| %10d | %10d | %10o | %12x |\n", bilangan, bilangan, bilangan, bilangan);
    printf("=======================================================\n\n");

    return 0;
}
