#include <stdio.h>

int main()
{
    int harga_satuan;
    int jumlah_barang;
    int persen_diskon = 10;
    int subtotal;
    double nilai_diskon;
    double total_bayar;

    printf("Masukkan harga satuan: ");
    scanf("%d", &harga_satuan);
 
    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlah_barang);
 
    subtotal = harga_satuan * jumlah_barang;
    nilai_diskon = ((double) persen_diskon / 100) * subtotal;
    total_bayar = subtotal - nilai_diskon;
 
    printf("\nSubtotal : %d\n", subtotal);
    printf("Nilai diskon : %.2f\n", nilai_diskon);
    printf("Total bayar : %.2f\n", total_bayar);
 
    return 0;
}
