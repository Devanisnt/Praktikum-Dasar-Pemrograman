#include <stdio.h>
int main()
{
    double saldo_awal;
    double saldo;
    double suku_bunga;
    int bulan;
    int jumlah_bulan;

    do
    {
        printf("Saldo awal: ");
        scanf("%lf", &saldo_awal);

        if ((saldo_awal < 1000) || (saldo_awal > 1000000000))
        {
            printf("Saldo tidak valid. Silakan masukkan saldo 1000-1000000000.\n");
        }
    }
    while ((saldo_awal < 1000) || (saldo_awal > 1000000000));

    do 
    {
        printf("Suku bunga: ");
        scanf("%lf", &suku_bunga);

        if ((suku_bunga < 0) || (suku_bunga > 10))
        {
            printf("Suku bunga tidak valid. Silakan masukkan suku bunga 0-10.\n");
        }
    }
    while ((suku_bunga < 0) || (suku_bunga > 10));

    do
    {
        printf("Jumlah bulan: ");
        scanf("%d", &jumlah_bulan);

        if ((jumlah_bulan < 1) || (jumlah_bulan > 360))
        {
            printf("Jumlah bulan tidak valid. Silakan masukkan jumlah bulan 1-360.\n");
        }
    }
    while ((jumlah_bulan < 1) || (jumlah_bulan > 360));

    saldo = saldo_awal;

    for (bulan = 1; bulan <= jumlah_bulan; bulan++)
    {
        saldo = saldo + (saldo * suku_bunga / 100);
    }

    printf("========================================\n");
    printf("       SIMULASI TABUNGAN BERBUNGA       \n");
    printf("========================================\n");
    printf("Saldo awal     : Rp%.2f\n", saldo_awal);
    printf("Suku bunga     : %.2f%%\n", suku_bunga);
    printf("Jumlah bulan   : %d\n", jumlah_bulan);
    printf("----------------------------------------\n");
    printf("Saldo akhir    : Rp%.2f\n", saldo);
    printf("========================================\n");

    return 0;

}   