#include <stdio.h>

int main()
{
    double nilai;

    printf("Masukkan nilai akhir: ");
    scanf("%lf", &nilai);   

    if ((nilai < 0.0) || (nilai > 100.00))
    {
        printf("Nilai tidak valid.\n");
    }
    else if (nilai >= 60.0)
    {
        printf("Status: Lulus\n");
    }
    else
    {
        printf("Status: Belum Lulus.\n");
    }

    return 0;
}