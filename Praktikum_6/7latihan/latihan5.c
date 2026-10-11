#include <stdio.h>
int main()
{
    int n;
    int m;
    int baris;
    int kolom;
    int total_sel = 0;
    int jumlah_genap = 0;

    do 
    {
        printf("Masukkan jumlah baris: ");
        scanf("%d", &n);

        if ((n < 1) || (n > 20))
        {
            printf("Jumlah baris harus pada rentang 1-20.\n");
        }
    }
    while ((n < 1) || (n > 20));

    do 
    {
        printf("Masukkan jumlah kolom: ");
        scanf("%d", &m);

        if ((m < 1) || (m > 20))
        {
            printf("Jumlah kolom harus pada rentang 1-20.\n");
        }
    }
    while ((m < 1) || (m > 20));
    printf("\n");

    total_sel = n * m;

    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1; kolom <= m; kolom++)
        {
            if ((baris * kolom) % 2 == 0)
            {
                jumlah_genap++;
            }
        }
    }

    printf("========================================\n");
    printf("       BILANGAN GENAP DARI TABEL        \n");
    printf("========================================\n");
    printf("Jumlah baris   : %d\n", n);
    printf("Jumlah kolom   : %d\n", m);
    printf("----------------------------------------\n");
    printf("Total sel      : %d\n", total_sel);
    printf("Bilangan genap : %d\n", jumlah_genap);
    printf("========================================\n");

    return 0;
}