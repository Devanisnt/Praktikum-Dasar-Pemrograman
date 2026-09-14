#include <stdio.h>
int main()
{
    double a = 5.0;
    int b = 0;
    double hasil;
    
    a++;
    hasil = a / b;
    a > b;
    a == b;
    a != b;

    printf("Hasil: %.2f\n", hasil);
    printf("a > b : %d\n", a > b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);

    return 0;
}