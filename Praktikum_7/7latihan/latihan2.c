#include <stdio.h>

int apakah_genap(int bilangan);

int main()
{
    int i;
    int bilangan;
    int jumlah_bilangan;
    int jumlah_genap = 0;
    int jumlah_ganjil = 0;

    printf("Masukkan jumlah bilangan bulat: ");
    scanf("%d", &jumlah_bilangan);

    for (i = 1; i <= jumlah_bilangan; i++)
    {
        printf("Bilangan ke-%d: ", i);
        scanf("%d", &bilangan);

        if (apakah_genap(bilangan) == 1)
        {
            jumlah_genap++;
        }
        else
        {
            jumlah_ganjil++;
        }
    }

    printf("\nHASIL REKAPITULASI\n");
    printf("Jumlah bilangan genap : %d\n", jumlah_genap);
    printf("Jumlah bilangan ganjil: %d\n", jumlah_ganjil);

    return 0;
}

int apakah_genap(int bilangan)
{
    if (bilangan % 2 == 0)
    {
        return 1;
    }

    return 0;
}