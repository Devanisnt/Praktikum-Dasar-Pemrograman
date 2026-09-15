#include <stdio.h>

int main()
{
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0)
    {
        printf("%d merupakan bilangan genap\n", bilangan);
    }
    else
    {
        printf("%d merupakan bilangan ganjil\n", bilangan);
    }

    return 0;
}