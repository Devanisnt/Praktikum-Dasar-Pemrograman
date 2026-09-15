#include <stdio.h>

int main(void)
{
    int usia;
    int jenis_tiket;
    double harga;

    printf("Masukkan usia: ");
    scanf("%d", &usia);

    printf("Jenis tiket:\n");
    printf("1. Reguler\n");
    printf("2. Premium\n");
    printf("Pilihan: ");
    scanf("%d", &jenis_tiket);

    if (usia < 0 || usia > 120)
    {
        printf("Usia tidak valid.\n");
        return 1;
    }
    
    if (usia >= 60)
    {
        printf("Kategori: Lansia\n");
    }
    else if (usia >= 18)
    {
        printf("Kategori: Dewasa\n");
    }
    else if (usia >= 13)
    {
        printf("Kategori: Remaja\n");
    }
    else
    {
        printf("Kategori: Anak\n");
    }

    switch (jenis_tiket)
    {
        case 1:
            harga = 50000;
            break;
        case 2:
            harga = 100000;
            break;

         default:
            printf("Jenis tiket tidak valid.\n");
            break;

            return 1;
    }

    printf("Harga tiket: %.2f\n", harga);

    return 0;

}