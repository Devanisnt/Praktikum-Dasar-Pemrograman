#include <stdio.h>

int main()
{
    int total_kue;
    int jumlah_anak;
    int kue_per_anak;
    int sisa_kue;
    double rata_rata;

    printf("Masukkan total kue: ");
    scanf("%d", &total_kue);

    printf("Masukkan jumlah anak: ");
    scanf("%d", &jumlah_anak);

    kue_per_anak = total_kue / jumlah_anak;
    sisa_kue = total_kue % jumlah_anak;
    rata_rata = (double) total_kue / jumlah_anak;

    printf("\n========================================\n");
    printf("       DISTRIBUSI KUE ULANG TAHUN       \n");
    printf("========================================\n");
    printf("Total kue           : %d\n", total_kue);
    printf("Jumlah anak         : %d\n", jumlah_anak );
    printf("----------------------------------------\n");
    printf("Kue per anak (utuh) : %d\n", kue_per_anak);
    printf("Sisa kue            : %d\n", sisa_kue);
    printf("Rata-rata per anak  : %.2f\n", rata_rata);
    printf("========================================\n");

    return 0;
}