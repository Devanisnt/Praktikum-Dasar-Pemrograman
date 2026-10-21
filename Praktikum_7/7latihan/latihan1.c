#include <stdio.h>

int hitung_kuadrat(int bilangan);
int hitung_kubik(int bilangan);

int main()
{
    int bilangan;
    int kuadrat;
    int kubik;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    kuadrat = hitung_kuadrat(bilangan);
    kubik = hitung_kubik(bilangan);

    printf("Kuadrat: %d\n", kuadrat);
    printf("Kubik  : %d\n", kubik);

    return 0;
}

int hitung_kuadrat(int bilangan)
{
    return bilangan * bilangan;
}

int hitung_kubik(int bilangan)
{
    return bilangan * bilangan * bilangan;
}