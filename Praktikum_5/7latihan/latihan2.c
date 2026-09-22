#include <stdio.h>
int main()
{
    int jumlah_genap = 0;
    int jumlah_ganjil = 0;
    int total_genap = 0;
    int total_ganjil = 0;
    int n;
    int i;

    printf("Masukkan n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Bilangan tidak valid. Silakan ulangi.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            jumlah_genap++;
            total_genap += i;
        }
        else
        {
            jumlah_ganjil++;
            total_ganjil += i;
        }

    }

    printf("\nJumlah bilangan genap : %d\n", jumlah_genap);
    printf("Jumlah bilangan ganjil: %d\n", jumlah_ganjil);
    printf("Total bilangan genap  : %d\n", total_genap);
    printf("Total bilangan ganjil : %d\n", total_ganjil);

    return 0;
}