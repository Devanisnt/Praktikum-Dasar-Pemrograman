#include <stdio.h>
int main()
{
    int baris;
    int kolom;
    int batas;

    do 
    {
        printf("Masukkan batas pola: ");
        scanf("%d", &batas);

        if ((batas < 1) || (batas > 15))
        {
            printf("Batas harus pada rentang 1-15.\n");
        }
    }
    while ((batas < 1) || (batas > 15));
    
    printf("\n");

    printf("%5s", "+");

    for (kolom = 1; kolom <= batas; kolom++)
    {
        printf("%5d", kolom);
    }
    printf("\n");

    for (baris = 1; baris <= batas; baris++)
    {
        printf("%5d", baris);
        
        for (kolom = 1; kolom <= batas; kolom++)
        {
            printf("%5d", baris + kolom);
        }
        printf("\n");
    }

    return 0;
}