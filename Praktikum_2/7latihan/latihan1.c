#include <stdio.h>

int main()
{
    int jumlah_sks;
    float nilai_rata_rata;
    char kelas;

    printf("Masukkan jumlah SKS: ");
    scanf("%d", &jumlah_sks);

    printf("Masukkan nilai rata-rata: ");
    scanf("%f", &nilai_rata_rata);

    printf("Masukkan kelas: ");
    scanf(" %c", &kelas);

    printf("\nJumlah sks    : %d\n", jumlah_sks);
    printf("Nilai rata-rata : %.2f\n", nilai_rata_rata);
    printf("Kelas           : %c\n", kelas);

    return 0;
}