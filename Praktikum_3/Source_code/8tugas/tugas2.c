#include <stdio.h>

int main()
{
    int jarak;
    int waktu;
    double kecepatan;

    printf("Jarak tempuh: ");
    scanf("%d", &jarak);

    printf("Waktu tempuh: ");
    scanf("%d", &waktu);

    kecepatan = (jarak / (double) waktu) * 60.0;

    printf("\n========================================\n");
    printf("          KECEPATAN RATA-RATA           \n");
    printf("========================================\n");
    printf("Jarak Tempuh   : %d km\n", jarak);
    printf("Waktu tempuh   : %d menit\n", waktu);
    printf("----------------------------------------\n");
    printf("Kecepatan      : %.2f km/jam\n", kecepatan);
    printf("========================================\n");

    return 0;
}