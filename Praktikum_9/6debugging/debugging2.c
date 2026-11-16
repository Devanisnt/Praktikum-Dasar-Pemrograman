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
    double rata_rata;
    
    for (baris = 0; baris < BARIS; baris++)
    {
        int total_baris = 0;

        for (kolom = 0; kolom < KOLOM; kolom++)
        {
            total_baris += data[baris][kolom];
        }
        rata_rata = (double) total_baris / KOLOM;
 
        printf("Rata-rata baris %d: %.2f\n", baris, rata_rata);
    }
 
    return 0;
}