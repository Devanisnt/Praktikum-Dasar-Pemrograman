#include <stdio.h>

#define MAX_BARIS 10
#define MAX_KOLOM 10

int main()
{
    int matriks_a[MAX_BARIS][MAX_KOLOM] = 
    {
        {1, 2},
        {3, 4}
    };
    int matriks_b[MAX_BARIS][MAX_KOLOM] = 
    {
        {5, 6},
        {7, 8}
    };
    int hasil[MAX_BARIS][MAX_KOLOM];
    int jumlah_baris = 2;
    int jumlah_kolom = 2;
    int baris;
    int kolom;

    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            hasil[baris][kolom] = matriks_a[baris][kolom] + matriks_b[baris][kolom];
        }
    }

    printf("Matriks A:\n");
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            printf("%3d", matriks_a[baris][kolom]);
        }
        printf("\n");
    }

    printf("\nMatriks B:\n");
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            printf("%3d", matriks_b[baris][kolom]);
        }
        printf("\n");
    }

    printf("\nHasil:\n");
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            printf("%3d", hasil[baris][kolom]);
        }
        printf("\n");
    }
    
    return 0;
}