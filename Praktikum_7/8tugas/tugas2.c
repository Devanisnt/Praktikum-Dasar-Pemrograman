#include <stdio.h>

int pangkat_rekursif(int basis, int pangkat, int *jumlah_langkah);

int main()
{
    int basis;
    int pangkat;
    int hasil;
    int jumlah_langkah = 0;

    printf("Masukkan basis: ");
    scanf("%d", &basis);

    printf("Masukkan pangkat: ");
    scanf("%d", &pangkat);

    if (((basis < -100) || (basis > 100)) || ((pangkat < 0) || (pangkat > 20)))
    {
        return 1;
    }

    hasil = pangkat_rekursif(basis, pangkat, &jumlah_langkah);

    printf("\n=========================================\n");
    printf("     PANGKAT REKURSIF DENGAN LANGKAH     \n");
    printf("=========================================\n");
    printf("Basis          : %d\n", basis);
    printf("Pangkat        : %d\n", pangkat);
    printf("-----------------------------------------\n");
    printf("Hasil          : %d\n", hasil);
    printf("Jumlah langkah : %d\n", jumlah_langkah);
    printf("=========================================\n");

    return 0;
}

int pangkat_rekursif(int basis, int pangkat, int *jumlah_langkah)
{
    (*jumlah_langkah)++;

    if (pangkat == 0)
    {
        return 1;
    }

    return basis * pangkat_rekursif(basis, pangkat - 1, jumlah_langkah);
}