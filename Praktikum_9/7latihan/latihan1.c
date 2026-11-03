#include <stdio.h>

#define BARIS 3
#define KOLOM 3

int main()
{
    int data[BARIS][KOLOM] = 
    { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int baris;
    int kolom;

    printf("Data:\n");
    for (baris = 0; baris < BARIS; baris++)
    {
        for (kolom = 0; kolom < KOLOM; kolom++)
        {
            printf("%d ", data[baris][kolom]);
        }
        printf("\n");
    }
    printf("\n");

    for (baris = 0; baris < BARIS; baris++)
    {
        int total_baris = 0;

        for (kolom = 0; kolom < KOLOM; kolom++)
        {
            total_baris += data[baris][kolom];
        }
        printf("total baris %d: %d\n", baris + 1, total_baris);
    }

    return 0;
}