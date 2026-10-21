#include <stdio.h>

int hitung_pangkat(int basis, int pangkat);

int main()
{
    int basis;
    int pangkat;
    int hasil;

    printf("Masukkan basis: ");
    scanf("%d", &basis);

    printf("Masukkan pangkat: ");
    scanf("%d", &pangkat);

    if (pangkat < 0)
    {
        printf("Pangkat harus bernilai 0 atau lebih.\n");
        return 1;
    }

    hasil = hitung_pangkat(basis, pangkat);

    printf("%d^%d = %d\n", basis, pangkat, hasil);

    return 0;
}

int hitung_pangkat(int basis, int pangkat)
{
    if (pangkat == 0)
    {
        return 1;
    }

    return basis * hitung_pangkat(basis, pangkat - 1);
}