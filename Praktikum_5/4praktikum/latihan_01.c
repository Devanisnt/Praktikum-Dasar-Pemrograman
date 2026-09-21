#include <stdio.h>

int main()
{
    int batas;
    int i;

    printf("Masukkan batas akhir: ");
    scanf("%d", &batas);

    if (batas < 1)
    {
        printf("Batas harus minimal 1.\n");
        return 1;
    }

    printf("Deret bilangan:\n");

    for (i = 1; i <= batas; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;

}