#include <stdio.h>

int main()
{
    int bilangan;
    int hasil;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    hasil = bilangan % 2 == 0;

    printf("\nHasil: %d\n", hasil);

    return 0;
}