#include <stdio.h>

#define MAX_BARIS 10
#define MAX_KOLOM 10

int main()
{
    int ukuran = 5;
    char tabel[MAX_BARIS][MAX_KOLOM];
    int baris;
    int kolom;

    for (baris = 0; baris < ukuran; baris++)
    {
        for (kolom = 0; kolom < ukuran; kolom++)
        {
            if ((baris == 0) || (baris == ukuran - 1) || (kolom == 0) || (kolom == ukuran - 1))
            {
                tabel[baris][kolom] = '#';
            }
            else if (baris == kolom)
            {
                tabel[baris][kolom] = 'X';
            }
            else 
            {
                tabel[baris][kolom] = '.';
            }
        }
    }

    for (baris = 0; baris < ukuran; baris++)
    {
        for (kolom = 0; kolom < ukuran; kolom++)
        {
            printf("%c ", tabel[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}