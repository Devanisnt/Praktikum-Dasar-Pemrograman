#include <stdio.h>
void hitung_mundur(int n);
int hitung_faktorial(int n);
int jumlah_1_sampai_n(int n);

int main()
{
    int angka;
 
    printf("Masukkan bilangan: ");
    scanf("%d", &angka);
 
    if (angka < 0)
    {
        printf("Bilangan tidak boleh negatif.\n");
        return 1;
    }
 
    printf("\nHitung mundur:\n");
    hitung_mundur(angka);
 
    printf(
        "\n%d! = %d\n",
        angka,
        hitung_faktorial(angka)
    );
 
    printf(
        "1 + 2 + ... + %d = %d\n",
        angka,
        jumlah_1_sampai_n(angka)
    );
 
    return 0;
}

void hitung_mundur(int n)
{
    if (n < 0)
    {
        return;
    }
 
    printf("%d\n", n);
    hitung_mundur(n - 1);
}

int hitung_faktorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
 
    return n * hitung_faktorial(n - 1);
}

int jumlah_1_sampai_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
 
    return n + jumlah_1_sampai_n(n - 1);
}