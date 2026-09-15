/*
Nama      : Devan Adyatma Abel Wibowo
NIM       : 2610511039
Kelas     : B
Modul     : 4
Deskripsi : Program menghitung tarif parkir berdasarkan jenis kendaraan, durasi, dan status member.
*/

#include <stdio.h>

int main()
{
    int jenis;
    int durasi;
    int status;
    double tarif_awal;
    double tarif_jam_pertama;
    double tarif_jam_selanjutnya;
    double tarif_maksimal;
    double diskon;
    double total_bayar;

    printf("================================================\n");
    printf("             PROGRAM TARIF PARKIR              \n");
    printf("================================================\n");

    printf("Jenis Kendaraan:\n");
    printf("1. Sepeda motor\n");
    printf("2. Mobil\n");
    printf("3. Bus\n");

    printf("Masukkan pilihan        : ");
    scanf("%d", &jenis);

    printf("Masukkan durasi parkir  : ");
    scanf("%d", &durasi);

    printf("Status member: \n");
    printf("0. Bukan member\n");
    printf("1. Member\n");

    printf("Masukkan status         : ");
    scanf("%d", &status);

    if (jenis < 1 || jenis > 3)
    {
        printf("Jenis kendaraan tidak valid.\n");
        return 1;
    }

    if (durasi < 1)
    {
        printf("Durasi parkir tidak valid.\n");
        return 1;
    }

    if (status < 0 || status > 1)
    {
        printf("Status member tidak valid.\n");
        return 1;
    }

    switch (jenis)
    {
        case 1: // Motor
            tarif_jam_pertama = 3000.00;
            tarif_jam_selanjutnya = 1500.00;
            tarif_maksimal = 15000.00;
            break;
        
        case 2: //Mobil
            tarif_jam_pertama = 5000.00;
            tarif_jam_selanjutnya = 3000.00;
            tarif_maksimal = 30000.00;
            break;
        
        case 3: // Bus
            tarif_jam_pertama = 10000.00;
            tarif_jam_selanjutnya = 5000.00;
            tarif_maksimal = 60000.00;
            break;

        default:
            printf("Jenis kendaraan tidak valid.\n");
            return 1;
    }

    if (durasi == 1)
    {
        tarif_awal = tarif_jam_pertama;
    }
    else
    {
        tarif_awal = tarif_jam_pertama + (durasi - 1) * tarif_jam_selanjutnya;
    }

    if (tarif_awal > tarif_maksimal)
    {
        tarif_awal = tarif_maksimal;
    }

    if (status == 1)
    {
        if (durasi >= 2)
        {
            diskon = tarif_awal * 0.10;
        }
        else
        {
            diskon = 0.00;
        }
    }
    else
    {
        diskon = 0.00;
    }
    
    total_bayar = tarif_awal - diskon;

    printf("\nRincian parkir: \n");
    printf("------------------------------------------------\n");
    if (jenis == 1)
    {
        printf("Jenis kendaraan         : Sepeda motor\n");
    }
    else if (jenis == 2)
    {
        printf("Jenis kendaraan         : Mobil\n");
    }
    else if (jenis == 3)
    {
        printf("Jenis kendaraan         : Bus\n");
    }
    printf("Durasi parkir           : %d jam\n", durasi);
    printf("Tarif awal              : Rp %.2f\n", tarif_awal);
    printf("Diskon                  : Rp %.2f\n", diskon);
    printf("Total bayar             : Rp %.2f\n", total_bayar);

    return 0;

}