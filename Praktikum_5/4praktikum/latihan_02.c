#include <stdio.h>
int main()
{
    int banyak_data;
    int i;
    double nilai;
    double total = 0.0;
    double rata_rata;

    printf("Masukkan banyak data: ");
    scanf("%d", &banyak_data);

    if (banyak_data <= 0)
    {
        printf("Banyak data harus lebih besar dari nol.\n");
        return 1;
    }

    for (i = 1; i <= banyak_data; i++)
    {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%lf", &nilai);

        total += nilai;
    }

    rata_rata = total / banyak_data;

    printf("\nHASIL\n");
    printf("Banyak data : %d\n", banyak_data);
    printf("Total       : %.2f\n", total);
    printf("Rata-rata   : %.2f\n", rata_rata);

    return 0;
}