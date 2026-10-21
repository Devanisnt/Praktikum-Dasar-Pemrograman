#include <stdio.h>

int jumlah_digit(int n);

int main()
{
    int n;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (n < 0)
    {
        return 1;
    }

    printf("=========================================\n");
    printf("          JUMLAH DIGIT REKURSIF          \n");
    printf("=========================================\n");
    printf("Bilangan     : %d\n", n);
    printf("-----------------------------------------\n");
    printf("Jumlah digit : %d\n", jumlah_digit(n));
    printf("=========================================\n");

    return 0;
}

int jumlah_digit(int n)
{
    if (n < 10)
    {
        return n;
    }

    return (n % 10) + jumlah_digit(n / 10);
}