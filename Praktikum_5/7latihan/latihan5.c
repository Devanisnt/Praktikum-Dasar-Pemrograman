#include <stdio.h>
int main()
{
    int bilangan;
    int sisa;
    int jumlah = 0;

    scanf("%d", &bilangan);
    
    if ((bilangan < 1) || (bilangan > 999999999))
    {
        printf("Bilangan harus positif, atau terlalu banyak.\n");
        return 1;
    }

    sisa = bilangan;

    while (sisa > 0)
    {
        jumlah = jumlah + (sisa % 10);
        sisa = sisa / 10;
    }

    printf("========================================\n");
    printf("         JUMLAH DIGIT BILANGAN          \n");
    printf("========================================\n");
    printf("Bilangan       : %d\n", bilangan);
    printf("Jumlah digit   : %d\n", jumlah);
    printf("========================================\n");

    return 0;
}