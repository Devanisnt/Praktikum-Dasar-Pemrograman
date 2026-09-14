#include <stdio.h>

int main()
{
    char kode_barang;
    double harga_satuan;
    int jumlah_barang;
    double total;

    printf("PROGRAM TOTAL BELANJA\n");

    printf("Masukkan kode barang: ");
    scanf(" %c", &kode_barang);

    printf("Masukkan harga satuan: ");
    scanf("%lf", &harga_satuan);

    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlah_barang);

    total = harga_satuan * jumlah_barang;

    printf("\nRINCIAN TRANSAKSI\n");
    printf("Kode barang     : %c\n", kode_barang);
    printf("Harga satuan    : Rp%.2f\n", harga_satuan);
    printf("Jumlah barang   : %d\n", jumlah_barang);
    printf("Total           : Rp%.2f\n", total);

    return 0;
}