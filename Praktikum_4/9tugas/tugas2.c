#include <stdio.h>

int main() 
{
    int kode_member;
    int harga_awal;
    double persentase_diskon;
    double harga_akhir;

    printf("Masukkan kode member : ");
    scanf("%d", &kode_member);

    printf("Masukkan harga awal : ");
    scanf("%d", &harga_awal);

    if (kode_member < 1 || kode_member > 3) {
        printf("Kode member tidak valid.\n");
        return 1;
    }

    if (harga_awal < 0) {
        printf("Harga awal tidak valid.\n");
        return 1;
    }

    switch (kode_member) {
        case 1:
            persentase_diskon = 0.05;
            break;

        case 2:
            persentase_diskon = 0.10;
            break;

        case 3:
            persentase_diskon = 0.15; 
            break;

        default:
            persentase_diskon = 0.0; 
            break;
    }

    harga_akhir = harga_awal - ((double)harga_awal * persentase_diskon);

    printf("\n=========================================\n");
    printf("          STATUS DISKON MEMBER           \n");
    printf("========================================\n");
    printf("Kode member   : %d\n", kode_member);
    printf("Harga awal    : Rp%d\n", harga_awal);
    printf("Diskon        : %.2f%%\n", persentase_diskon * 100);
    printf("Harga akhir   : Rp%.2f\n", harga_akhir);
    printf("=========================================\n");

    return 0;
}