#include <stdio.h>

int apakah_prima(int bilangan);

int main()
{
    int batas;
    int i;
    int prima = 0;

    printf("Masukkan batas bilangan: ");
    scanf("%d", &batas);

    if (batas < 2)
    {
        printf("Bilangan kurang dari 2 bukan bilangan prima.\n");
        return 0;
    }

    printf("\nBilangan prima dari 1 sampai %d adalah:\n", batas);

    for (i = 1; i <= batas; i++)
    {
        if (apakah_prima(i) == 1)
        {
            printf("%d ", i);
            prima = 1;
        }
    }
    printf("\n");

    return 0;
}

int apakah_prima(int bilangan)
{
    int i;

    if (bilangan < 2)
    {
        return 0;
    }

    for (i = 2; i * i <= bilangan; i++)
    {
        if (bilangan % i == 0)
        {
            return 0;
        }
    }

    return 1;
}