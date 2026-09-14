#include <stdio.h>
int main()
{
    /*
    Nama        : Devan Adyatma Abel Wibowo
    NIM         : 2610511039
    Kelas       : B
    Modul       : 2
    Deskripsi   : Program menghitung estimasi biaya perjalanan.
    */

    double jarak_perjalanan;
    double konsumsi_kendaraan;
    double harga_bbm;
    int jumlah_penumpang;
    double kebutuhan_bbm;
    double total_biaya;
    double biaya_per_orang;

    printf("Masukkan jarak perjalanan (km): ");
    scanf("%lf", &jarak_perjalanan);

    printf("Masukkan konsumsi kendaraan (km/l): ");
    scanf("%lf", &konsumsi_kendaraan);

    printf("Masukkan harga bahan bakar per liter: ");
    scanf("%lf", &harga_bbm);

    printf("Masukkan jumlah penumpang: ");
    scanf("%d", &jumlah_penumpang);

    kebutuhan_bbm = jarak_perjalanan / konsumsi_kendaraan;
    total_biaya = kebutuhan_bbm * harga_bbm;
    biaya_per_orang = total_biaya / jumlah_penumpang;

    printf("\n===========================================\n");
    printf("       ESTIMASI BIAYA PERJALANAN             \n");
    printf("===========================================\n");
    printf("Jarak perjalanan (km)       : %.2f\n", jarak_perjalanan);
    printf("Konsumsi kendaraan (km/l)   : %.2f\n", konsumsi_kendaraan);
    printf("Harga bahan bakar per liter : Rp%.2f\n", harga_bbm);
    printf("Jumlah penumpang            : %d\n", jumlah_penumpang);
    printf("\nHASIL PERHITUNGAN\n");
    printf("-------------------------------------------\n");
    printf("Jarak perjalanan            : %.2f km\n", jarak_perjalanan);
    printf("Kebutuhan bahan bakar       : %.2f liter\n", kebutuhan_bbm);
    printf("Total biaya                 : Rp%.2f\n", total_biaya);
    printf("Biaya per orang             : Rp%.2f\n", biaya_per_orang);
    return 0;
}