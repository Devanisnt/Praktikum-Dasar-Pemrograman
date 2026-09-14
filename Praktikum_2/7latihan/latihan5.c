#include <stdio.h>

int main()
{
    double daya;
    double harga;
    double total;

    printf("Masukkan daya (kWh): ");
    scanf("%lf", &daya);

    printf("Masukkan harga per kWh: ");
    scanf("%lf", &harga);

    total = daya * harga;

    printf("\n========================================\n");
    printf("         STRUK PEMBELIAN TOKEN          \n");
    printf("========================================\n");
    printf("Daya (kWh)    : %.2f\n", daya);
    printf("Harga per kWh : Rp%.2f\n", harga);
    printf("----------------------------------------\n");
    printf("Total bayar   : Rp%.2f\n", total);
    printf("========================================\n");
    printf("Terima Kasih telah menggunakan layanan ini.\n");

    return 0;
}