#include <stdio.h>
int main ()
{
    int baris;
    int kolom;
    int i;
    int j;
    char karakter;

    do 
    {
        printf("Masukkan jumlah baris : ");
        scanf("%d", &baris);

        if ((baris < 1) || (baris > 100))
        {
            printf("Baris harus berada pada rentang 1-100.\n");
            break;
        }
    }
    while ((baris < 1) || (baris > 100));

    do 
    {
        printf("Masukkan jumlah kolom : ");
        scanf("%d", &kolom);

        if ((kolom < 1) || (kolom > 100))
        {
            printf("Kolom harus berada pada rentang 1-100.\n");
            break;
        }
    }
    while ((kolom < 1) || (kolom > 100));

    printf("Masukkan karakter     : ");
    scanf(" %c", &karakter);

    printf("\n");

    for (i = 1; i <= baris; i++)
    {
        for (j = 1; j <= kolom; j++)
        {
            printf("%c ", karakter);
        }
        printf("\n");
    }

    return 0;
}