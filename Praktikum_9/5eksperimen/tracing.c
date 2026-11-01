#include <stdio.h>

int main(void)
{
    int data[2][3] =
    {
        {2, 4, 6},
        {1, 3, 5}
    };
 
    int baris;
    int kolom;
    int total_baris;
    int total_keseluruhan = 0;
 
    for (baris = 0; baris < 2; baris++)
    {
        total_baris = 0;
 
        for (kolom = 0; kolom < 3; kolom++)
        {
            total_baris += data[baris][kolom];
        }
        
        total_keseluruhan += total_baris;
 
        printf("Total baris %d: %d\n", baris, total_baris);
    }
 
    printf("Total keseluruhan: %d\n", total_keseluruhan);
 
    return 0;
}