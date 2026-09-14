#include <stdio.h>
int main()
{
    double panjang;
    double lebar;
    double luas;
    double keliling;

    printf("PROGRAM PERSEGI PANJANG\n");
    printf("=======================\n");

    printf("Masukkan panjang: ");
    scanf("%lf", &panjang);

    printf("Masukkan lebar: ");
    scanf("%lf", &lebar);

    luas = panjang * lebar;
    keliling = 2.0 * (panjang + lebar);

    printf("\nHASIL PERHITUNGAN\n");
    printf("Panjang   : %.2f\n", panjang);
    printf("Lebar     : %.2f\n", lebar);
    printf("Luas      : %.2f\n", luas);
    printf("Keliling  : %.2f\n", keliling);

    return 0;
}