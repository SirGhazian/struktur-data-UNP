// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 7
// KASUS    : Calculate simple interest and compound interest.

#include <math.h>
#include <stdio.h>

// Konversi ke bilangan desimal ke format harga
void koversiFormat(long long angka) {
    long long jutaan = angka / 1000000;   // Ambil bagian jutaan dengan pembagian
    int ribu = (angka % 1000000) / 1000;  // Ambil bagian ribu dengan pembagian dan ratusan dengan modulo
    int ratusan = angka % 1000;           // Ambil bagian ratusan dengan modulo

    if (angka < 1000000) {
        printf("%d.%03d\n", ribu, ratusan);
    } else {
        printf("%lld.%03d.%03d\n", jutaan, ribu, ratusan);
    }
}

int main() {
    double pokok, bunga_tahunan, waktu;

    // Input dari user
    printf("\nMasukkan pokok pinjaman (dalam rupiah): \n");
    printf("-> ");
    scanf("%lf", &pokok);

    printf("Masukkan bunga tahunan (dalam persen, misal 10 untuk 10%%): \n");
    printf("-> ");
    scanf("%lf", &bunga_tahunan);

    printf("Masukkan waktu pinjaman (dalam tahun): \n");
    printf("-> ");
    scanf("%lf", &waktu);

    double bunga_per_periode = bunga_tahunan / 100;

    // Bunga Sederhana
    double bunga_simpel = pokok * bunga_per_periode * waktu;

    // Bunga Majemuk
    double jumlah_akhir_majemuk = pokok * pow((1 + bunga_per_periode), waktu);
    double bunga_majemuk = jumlah_akhir_majemuk - pokok;

    printf("\n--> Total bunga sederhana: Rp. ");
    koversiFormat(bunga_simpel);
    printf("--> Total bunga majemuk: Rp. ");
    koversiFormat(bunga_majemuk);
    printf("\n");

    return 0;
}
