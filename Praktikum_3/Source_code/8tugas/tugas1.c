#include <stdio.h>

int main()
{
    /*
    Nama        : Devan Adyatma Abel Wibowo
    NIM         : 2610511039
    Kelas       : B
    Modul       : 3
    Deskripsi   : Program menghitung ringkasan aktivitas belajar.
    */

    int jumlah_sesi;
    int total_durasi;
    int jumlah_halaman;
    int jumlah_latihan;
    int target_latihan;
    int jam_belajar;
    int sisa_menit;
    double rata_rata;
    double persentase;

    printf("Jumlah sesi belajar: ");
    scanf("%d", &jumlah_sesi);

    printf("Total durasi belajar: ");
    scanf("%d", &total_durasi);

    printf("Jumlah halaman dibaca: ");
    scanf("%d", &jumlah_halaman);

    printf("Latihan diselesaikan: ");
    scanf("%d", &jumlah_latihan);

    printf("Target latihan mingguan: ");
    scanf("%d", &target_latihan);

    jam_belajar = total_durasi / 60;
    sisa_menit = total_durasi % 60;
    rata_rata = (double) total_durasi / jumlah_sesi;
    persentase = (double) jumlah_latihan / target_latihan * 100;

    printf("\n================================================\n");
    printf("          RINGKASAN AKTIVITAS BELAJAR           \n");
    printf("================================================\n");
    printf("Jumlah sesi              : %d sesi\n", jumlah_sesi);
    printf("Total waktu belajar      : %d jam %d menit\n", jam_belajar, sisa_menit);
    printf("Halaman dibaca           : %d halaman\n", jumlah_halaman);
    printf("Rata-rata per sesi       : %.2f menit\n", rata_rata);
    printf("Latihan diselesaikan     : %d dari %d\n", jumlah_latihan, target_latihan);
    printf("Persentase diselesaikan  : %.2f\n", persentase);
    printf("================================================\n");
    
    return 0;
}