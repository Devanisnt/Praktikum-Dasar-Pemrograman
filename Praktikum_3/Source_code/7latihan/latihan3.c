#include <stdio.h>

int main()
{
    int nilai_1 = 80;
    int nilai_2 = 75;
    int nilai_3 = 90;
    int nilai_4 = 85;
    int nilai_5 = 88;
    int jumlah_nilai;
    double rata_rata;

    jumlah_nilai = nilai_1 + nilai_2 + nilai_3 + nilai_4 + nilai_5;
    rata_rata = (double) jumlah_nilai / 5;

    printf("Nilai 1 : %d\n", nilai_1);
    printf("Nilai 2 : %d\n", nilai_2);
    printf("Nilai 3 : %d\n", nilai_3);
    printf("Nilai 4 : %d\n", nilai_4);
    printf("Nilai 5 : %d\n", nilai_5);

    printf("\nJumlah nilai : %d\n", jumlah_nilai);
    printf("Rata-rata : %.2f\n", rata_rata);

    return 0;
}