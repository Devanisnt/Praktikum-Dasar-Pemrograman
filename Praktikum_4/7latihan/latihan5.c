#include <stdio.h>

int main()
{
    int kecepatan;

    printf("Masukkan kecepatan: ");
    scanf("%d", &kecepatan);

    printf("\n========================================\n");
    printf("           KATEGORI KECEPATAN           \n");
    printf("========================================\n");

    if ((kecepatan < 0) || (kecepatan > 300))
    {
        printf("Kecepatan tidak valid.\n");
        return 1;
    }

    if(kecepatan > 120)
    {
        printf("Kecepatan      : %d km/jam\n", kecepatan);
        printf("Kategori       : Sangat cepat\n");
    }
    else if ((kecepatan >= 81) && (kecepatan <= 120))
    {
        printf("Kecepatan      : %d km/jam\n", kecepatan);
        printf("Kategori       : Cepat\n");
    }
    else if ((kecepatan >= 40) && (kecepatan <= 80))
    {
        printf("Kecepatan      : %d km/jam\n", kecepatan);
        printf("Kategori       : Sedang\n");
    }
    else
    {
        printf("Kecepatan      : %d  km/jam\n", kecepatan);
        printf("Kategori       : Lambat\n");
    }

    printf("========================================\n");

    return 0;
}