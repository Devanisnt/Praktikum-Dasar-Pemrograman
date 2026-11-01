#include <stdio.h>

#define MAX_UKURAN 10

int main(void)
{
    int matriks[MAX_UKURAN][MAX_UKURAN];
    int ukuran;
    int baris;
    int kolom;
    int total_diagonal_utama = 0;
    int total_diagonal_sekunder = 0;
 
    do
    {
        printf("Masukkan ukuran matriks 1-10: ");
        scanf("%d", &ukuran);
    }
    while ((ukuran < 1) || (ukuran > MAX_UKURAN));
 
    for (baris = 0; baris < ukuran; baris++)
    {
        for (kolom = 0; kolom < ukuran; kolom++)
        {
            printf("Matriks[%d][%d]: ", baris, kolom);
            scanf("%d", &matriks[baris][kolom]);
        }
    }
 
    for (baris = 0; baris < ukuran; baris++)
    {
        total_diagonal_utama += matriks[baris][baris];
 
        total_diagonal_sekunder += matriks[baris][ukuran - 1 - baris];
    }
 
    printf("\nMATRIKS ASLI\n");
 
    for (baris = 0; baris < ukuran; baris++)
    {
        for (kolom = 0; kolom < ukuran; kolom++)
        {
            printf("%6d", matriks[baris][kolom]);
        }
        printf("\n");
    }

    printf("\nTRANSPOSE\n");

    for (kolom = 0; kolom < ukuran; kolom++)
    {
        for (baris = 0; baris < ukuran; baris++)
        {
            printf("%6d", matriks[baris][kolom]);
        }
        printf("\n");
    }
 
    printf("\nTotal diagonal utama : %d\n", total_diagonal_utama);
    printf("Total diagonal sekunder: %d\n", total_diagonal_sekunder);
 
    return 0;
}