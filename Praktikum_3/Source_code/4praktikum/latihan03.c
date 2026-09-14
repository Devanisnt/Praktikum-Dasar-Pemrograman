#include <stdio.h>
int main()
{
    const double BOBOT_TUGAS = 0.20;
    const double BOBOT_KUIS = 0.10;
    const double BOBOT_UTS = 0.30;
    const double BOBOT_UAS = 0.40;

    double nilai_tugas;
    double nilai_kuis;
    double nilai_uts;
    double nilai_uas;
    double nilai_akhir;

    printf("Masukkan nilai tugas: ");
    scanf("%lf", &nilai_tugas);

    printf("Masukkan nilai kuis: ");
    scanf("%lf", &nilai_kuis);

    printf("Masukkan nilai UTS: ");
    scanf("%lf", &nilai_uts);

    printf("Masukkan nilai UAS: ");
    scanf("%lf", &nilai_uas);

    nilai_akhir =
        (nilai_tugas * BOBOT_TUGAS) +
        (nilai_kuis * BOBOT_KUIS) +
        (nilai_uts * BOBOT_UTS) +
        (nilai_uas * BOBOT_UAS);

    printf("\nNilai akhir: %.2f\n", nilai_akhir);

    return 0;
}