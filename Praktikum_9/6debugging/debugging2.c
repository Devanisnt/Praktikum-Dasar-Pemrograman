#include <stdio.h>

#define BARIS 3
#define KOLOM 3

int main(void)
{
    int data[BARIS][KOLOM] =
    {
        {80, 70, 90},
        {60, 75, 85},
        {90, 95, 100}
    };
 
    int baris;
    int kolom;
    int total_baris = 0;
    double rata_rata;
 
    for (baris = 0; baris < BARIS; baris++)
    {
        for (kolom = 0; kolom <= KOLOM; kolom++)
        {
            total_baris = data[baris][kolom];
        }
        rata_rata = total_baris / KOLOM;
 
        printf("Rata-rata baris %d: %d\n", baris, rata_rata);
    }
 
    return 0;
}