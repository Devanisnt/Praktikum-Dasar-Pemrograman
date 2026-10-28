#include <stdio.h>

#define JUMLAH_DATA 5

int main(void)
{
    int nilai[JUMLAH_DATA];
    int total = 0;
    double rata_rata;
    int i;
 
    for (i = 0; i < JUMLAH_DATA; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }
 
    for (i = 0; i < JUMLAH_DATA; i++)
    {
        total += nilai[i];
    }
 
    rata_rata = (double) total / JUMLAH_DATA;
 
    printf("Total : %d\n", total);
    printf("Rata-rata : %.2f\n", rata_rata);
 
    return 0;
}