#include <stdio.h>
int main()
{
    int jumlah_barang;

    do
    {
        printf("Masukkan jumlah barang 1-100: ");
        scanf("%d", &jumlah_barang);

        if ((jumlah_barang < 1) || (jumlah_barang > 100))
        {
            printf("Input tidak valid. Silakan ulangi.\n");
        }
    }
    while ((jumlah_barang < 1) || (jumlah_barang > 100));

    printf("Jumlah barang yang diterima: %d\n", jumlah_barang);

    return 0;
}