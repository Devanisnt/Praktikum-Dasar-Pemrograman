#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 50

int main(void)
{
    int data[MAX_DATA];
    int n;
    int i;
    int selisih_maks = 0;
    int selisih_saat_ini;

    
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        selisih_saat_ini = abs(data[i + 1] - data[i]);
        if (selisih_saat_ini > selisih_maks)
        {
            selisih_maks = selisih_saat_ini;
        }
    }

    printf("================================================\n");
    printf("           SELISIH MAKSIMUM ANTAR ELEMEN        \n");
    printf("================================================\n");
    printf("Jumlah data     : %d\n", n);
    printf("Data            : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", data[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    printf("Selisih maksimum: %d\n", selisih_maks);
    printf("================================================\n");

    return 0;
}