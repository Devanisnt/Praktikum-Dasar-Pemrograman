#include <stdio.h>

#define BARIS 2
#define KOLOM 3

int main(void)
{
    int data[BARIS][KOLOM] =
    {
        {10, 20, 30},
        {40, 50, 60}
    };
 
    int baris;
    int kolom;
 
    for (baris = 0; baris < BARIS; baris++)
    {
        for (kolom = 0; kolom < KOLOM; kolom++)
        {
            printf("%5d", data[baris][kolom]);
        }
        printf("\n");
    }
 
    return 0;
}