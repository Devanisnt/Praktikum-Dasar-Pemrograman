#include <stdio.h>

#define BARIS 3
#define KOLOM 3

int main()
{
    int data[BARIS][KOLOM] = 
    { 
        {-5, 5, 10},
        {100, 50, 55},
        {100, 75, 90}
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

    for (kolom = 0; kolom < KOLOM; kolom++)
    {
        int total_baris = 0;
        
        for (baris = 0; baris < BARIS; baris++)
        {
            total_baris += data[baris][kolom];
        }
        printf("total baris %d: %d\n", kolom + 1, total_baris);
    }

    return 0;
}