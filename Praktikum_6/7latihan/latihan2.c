#include <stdio.h>
int main()
{
    int baris;
    int kolom;
    int batas;

    do 
    {
        printf("Masukkan batas pola (1-10): ");
        scanf("%d", &batas);

        if ((batas < 1) || (batas > 10))
        {
            printf("Batas harus pada rentang 1-10.\n");
        }
    }
    while ((batas < 1) || (batas > 10));

    printf("\n");

    for (baris = 1; baris <= batas; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d ", baris);
        }
        printf("\n");
    }

    return 0;
}