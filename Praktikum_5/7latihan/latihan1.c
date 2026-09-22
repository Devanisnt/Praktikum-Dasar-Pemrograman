#include <stdio.h>
int main()
{
    int batas_awal;
    int batas_akhir;
    int i;

    printf("Masukkan batas awal: ");
    scanf("%d", &batas_awal);

    printf("Masukkan batas akhir: ");
    scanf("%d", &batas_akhir);

    if (batas_awal >= batas_akhir)
    {
        printf("Batas awal harus lebih kecil atau sama dengan batas akhir.\n");
        return 1;
    }

    for (i = batas_awal; i <= batas_akhir; i++)
    {
        printf("%d ", i);
    }

    return 0;
}