#include <stdio.h>
int main()
{
    int x = 8;
    int y = 3;
    int z;
    double hasil;

    x += 4;
    y *= 2;
    z = x % y;
    hasil = (double) x / y;
    x--;

    printf("x     = %d\n", x);
    printf("y     = %d\n", y);
    printf("z     = %d\n", z);
    printf("Hasil = %.2f\n", hasil);

    return 0;
}