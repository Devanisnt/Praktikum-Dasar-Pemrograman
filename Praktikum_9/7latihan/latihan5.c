#include <stdio.h>

#define MAX_UKURAN 10

int main()
{
    int matriks[MAX_UKURAN][MAX_UKURAN];
    int ukuran;
    int baris;
    int kolom;
    int total_diagonal_utama = 0;
    int total_diagonal_sekunder = 0;

    do 
    {
        printf("Masukkan ukuran matriks: ");
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

    printf("\n========================================\n");
    printf("       DIAGONAL UTAMA VS SEKUNDER       \n");
    printf("========================================\n");
    printf("Diagonal utama    : %d\n", total_diagonal_utama);
    printf("Diagonal sekunder : %d\n", total_diagonal_sekunder);
    printf("----------------------------------------\n");
    printf("Selisih           : %d\n", total_diagonal_utama - total_diagonal_sekunder);
    printf("========================================\n");

    return 0;

}