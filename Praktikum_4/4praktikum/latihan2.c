#include <stdio.h>

int main()
{
    double nilai;
    char huruf_mutu;

    printf("Masukkan nilai akhir: ");
    scanf("%lf", &nilai);

    if ((nilai < 0.0) || (nilai > 100.0))
    {
        printf("Nilai tidak valid.\n");
        return 1;
    }

    if (nilai >= 85.0)
    {
        huruf_mutu = 'A';
    }
    else if (nilai >= 75.0)
    {
        huruf_mutu = 'B';
    }
    else if (nilai >= 65.0)
    {
        huruf_mutu = 'C';
    }
    else if (nilai >= 50.0)
    {
        huruf_mutu = 'D';
    }
    else
    {
        huruf_mutu = 'E';
    }

    printf("Nilai akhir : %.2f\n", nilai);
    printf("Huruf mutu  : %c\n", huruf_mutu);

    return 0;
}