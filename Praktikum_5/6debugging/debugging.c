#include <stdio.h>
int main(void)
{
    int i;
    int nilai;
    int total;
    int jumlah_lulus = 0;
    int jumlah_tidak_lulus = 0;
    double rata_rata;

    for (i = 1; i < 5; i--)
    {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%d", nilai);
 
       if (nilai < 0 && nilai > 100)
       {
        printf("Nilai tidak valid.\n");
       }
       else
       {
            total = nilai;

            if (nilai >= 60)
            {
                jumlah_lulus++
            }
            else
            {
                jumlah_tidak_lulus++
            }
       }
    }

    rata_rata = total / 5;

    printf("Total : %d\n", total);
    printf("Rata-rata : %.2f\n", rata_rata);
    printf("Jumlah lulus : %d\n", jumlah_lulus);
    printf("Jumlah tidak lulus : %d\n", jumlah_tidak_lulus);

    return 0;
}

