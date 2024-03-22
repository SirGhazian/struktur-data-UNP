// NAMA     : Muhammad Ghazian Tsaqif Zhafiri Andoz
// NIM      : 23343057
// No. SOAL : 9
// KASUS    : Grocery Bills

#include <stdio.h>
#include <stdlib.h>  // Library untuk clear terminal

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
    char items[10][20];
    int banyak[10];
    float harga[10];
    int jumlahItem;
    float total = 0;

    system("cls");

    printf("_____________________________________________\n");
    printf("|  _   _ _  _ ___   __  __   _   ___ _____  |\n");
    printf("| | | | | \\| | _ \\ |  \\/  | /_\\ | _ \\_   _| |\n");
    printf("| | |_| | .` |  _/ | |\\/| |/ _ \\|   / | |   |\n");
    printf("|  \\___/|_|\\_|_|   |_|  |_/_/ \\_\\_|_\\ |_|   |\n");
    printf("|___________________________________________|\n");

    printf("\nMasukkan jumlah item yang ingin dibeli: ");
    scanf("%d", &jumlahItem);

    // Input informasi belanjaan
    for (int i = 0; i < jumlahItem; i++) {
        printf("\n[ Item ke-%d: ]\n", i + 1);
        printf("Nama item: ");
        fflush(stdin);
        gets(items[i]);
        printf("Jumlah: ");
        scanf("%d", &banyak[i]);
        printf("Harga per unit: ");
        scanf("%f", &harga[i]);
    }

    // Menampilkan tagihan
    printf("\n\n************ B I L L ************\n");
    // printf("%-10s %-10s %-10s %-10s\n", "Item", "Quantity", "Price", "Ammount");
    printf("%-7s %-4s %-10s %-7s\n", "Item", "Qty", "Price", "Ammount");
    printf("---------------------------------\n");
    for (int i = 0; i < jumlahItem; i++) {
        float totalHargaItem = banyak[i] * harga[i];
        printf("%-7s %-4d %-10.f %-7.f\n", items[i], banyak[i], harga[i], totalHargaItem);
        total += totalHargaItem;
    }
    printf("\n---------------------------------");
    printf("\n   Total Ammount to be paid   ");
    printf("\n---------------------------------\n\t  ");
    koversiFormat(total);
    printf("---------------------------------\n\n");

    return 0;
}
