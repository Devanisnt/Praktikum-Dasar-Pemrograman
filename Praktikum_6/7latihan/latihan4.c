#include <stdio.h>
int main()
{
    int baris;
    int tinggi;
    int simbol;
    int spasi;

    do 
    {
        printf("Masukkan jumlah tinggi: ");
        scanf("%d", &tinggi);

        if ((tinggi < 1) || (tinggi > 10))
        {
            printf("Jumlah tinggi harus pada rentang 1-10.\n");
        }
    }
    while ((tinggi < 1) || (tinggi > 10));
    
    printf("\n");

    for (baris = 1; baris <= tinggi; baris++)
    {
        for (spasi = 1; spasi <= tinggi - baris; spasi++)
        {
            printf(" ");
        }

        for (simbol = 1; simbol <= (2 * baris - 1); simbol++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}