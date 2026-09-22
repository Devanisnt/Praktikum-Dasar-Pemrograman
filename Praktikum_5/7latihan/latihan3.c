#include <stdio.h>
int main()
{
    int n;
    int i;
    unsigned long long faktorial = 1;

    printf("Masukkan bilangan 0-20: ");
    scanf("%d", &n);

    if ((n < 0) || (n > 20))
    {
        printf("Nilai tidak valid. Masukkan kembali bilangan 0-20.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        faktorial *= i;
    }

    printf("%d! = %llu\n", n, faktorial);

    return 0;
}