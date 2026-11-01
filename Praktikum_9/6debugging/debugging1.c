#include <stdio.h>

#define BARIS 3
#define KOLOM 4

int main(void)
{
    int data[BARIS][KOLOM];
    int baris;
    int kolom;

    for (baris = 1; baris <= BARIS; baris++)
    {
        for (kolom = 1; kolom <= KOLOM; kolom++)
        {
            printf("Data[%d][%d]: ", baris, kolom);
            scanf("%d", &data[kolom][baris]);
        }
    }
 
    for (baris = 0; baris <= BARIS; baris++)
    {
        for (kolom = 0; kolom <= KOLOM; kolom++)
        {
            printf("%5d", data[baris][kolom]);
            printf("\n");
        }
    }
 
    return 0;
}