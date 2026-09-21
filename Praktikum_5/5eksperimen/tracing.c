#include <stdio.h>
int main()
{
    int i;
    int total = 0;
    int jumlah_genap = 0;

    for (i = 1; i <= 6; i++)
    {
        total += i;

        if (i % 2 == 0)
        {
        jumlah_genap++;
        }
    }

    printf("i              = %d\n", i);
    printf("total          = %d\n", total);
    printf("jumlah genap   = %d\n", jumlah_genap);

    return 0;
}