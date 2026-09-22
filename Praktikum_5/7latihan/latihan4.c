#include <stdio.h>
int main()
{
    int bilangan;
    int digit;
    int hasil = 0;
    int sisa;

    printf("Masukkan bilangan ratusan: ");
    scanf("%d", &bilangan);

    if (bilangan <= 0)
    {
        printf("Bilangan harus positif. Silakan ulangi\n");
        return 1;
    }

    sisa = bilangan;

    while (sisa > 0)
    {
        digit = sisa % 10;
        hasil = (hasil * 10) + digit;
        sisa = sisa / 10;
    }

    printf("Bilangan terbalik : %d\n", hasil);

    return 0;
}