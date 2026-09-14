#include <stdio.h>
int main()
{
    double nilai_tugas;
    double nilai_ujian;
    double nilai_akhir;

    printf("Masukkan nilai tugas: ");
    scanf("%lf", &nilai_tugas);

    printf("Masukkan nilai ujian: ");
    scanf("%lf", &nilai_ujian);

    nilai_akhir = (nilai_tugas * 0.4) + (nilai_ujian * 0.6);

    printf("\n====================================\n");
    printf("            KARTU NILAI             \n");
    printf("====================================\n");
    printf("Nilai Tugas  : %.2f\n", nilai_tugas);
    printf("Nilai Ujian  : %.2f\n", nilai_ujian);
    printf("------------------------------------\n");
    printf("Nilai Akhir  : %.2f\n", nilai_akhir);
    printf("====================================\n");

    return 0;
}