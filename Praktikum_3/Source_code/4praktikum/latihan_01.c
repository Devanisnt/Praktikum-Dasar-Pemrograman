#include <stdio.h>
int main()
{
    int angka_1;
    int angka_2;
    int penjumlahan;
    int pengurangan;
    int perkalian;
    int pembagian_bulat;
    int sisa_bagi;
    double pembagian_real;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka_1);

    printf("Masukkan angka kedua selain nol: ");
    scanf("%d", &angka_2);

    penjumlahan = angka_1 + angka_2;
    pengurangan = angka_1 - angka_2;
    perkalian = angka_1 * angka_2;
    pembagian_bulat = angka_1 / angka_2;
    sisa_bagi = angka_1 % angka_2;
    pembagian_real = (double)angka_1 / angka_2;

    printf("\nHASIL OPERASI\n");
    printf("Penjumlahan       : %d\n", penjumlahan);
    printf("Pengurangan       : %d\n", pengurangan);
    printf("Perkalian         : %d\n", perkalian);
    printf("Pembagian bulat   : %d\n", pembagian_bulat);
    printf("Sisa bagi         : %d\n", sisa_bagi);
    printf("Pembagian riil    : %.2f\n", pembagian_real);

    return 0;
}