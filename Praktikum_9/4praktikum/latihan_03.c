#include <stdio.h>

#define MAX_BARIS 10
#define MAX_KOLOM 10

int main(void)
{
    double data[MAX_BARIS][MAX_KOLOM];
    int jumlah_baris;
    int jumlah_kolom;
    int baris;
    int kolom;
    double minimum;
    double maksimum;
    int baris_minimum = 0;
    int kolom_minimum = 0;
    int baris_maksimum = 0;
    int kolom_maksimum = 0;
 
    do
    {
        printf("Jumlah baris 1-10: ");
        scanf("%d", &jumlah_baris);
    }
    while ((jumlah_baris < 1) || (jumlah_baris > MAX_BARIS));
 
    do
    {
        printf("Jumlah kolom 1-10: ");
        scanf("%d", &jumlah_kolom);
    }
    while ((jumlah_kolom < 1) || (jumlah_kolom > MAX_KOLOM));
 
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            printf("Data[%d][%d]: ", baris, kolom);
            scanf("%lf", &data[baris][kolom]);
        }
    }
 
    minimum = data[0][0];
    maksimum = data[0][0];
 
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            if (data[baris][kolom] < minimum)
            {
                minimum = data[baris][kolom];
                baris_minimum = baris;
                kolom_minimum = kolom;
            }

            if (data[baris][kolom] > maksimum)
            {
                maksimum = data[baris][kolom];
                baris_maksimum = baris;
                kolom_maksimum = kolom;
            }
        }
    }
    printf("\nHASIL\n");
 
    printf("Minimum: %.2f pada [%d][%d]\n", minimum, baris_minimum, kolom_minimum);
    printf("Maksimum: %.2f pada [%d][%d]\n", maksimum, baris_maksimum, kolom_maksimum);
 
    return 0;
}