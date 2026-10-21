#include <stdio.h>

double tambah(double a, double b);
double kurang(double a, double b);
double kali(double a, double b);
double bagi(double a, double b);
void tampilkan_menu();

int main()
{
    int pilihan;
    double a;
    double b;
    double hasil;

    do 
    {
        tampilkan_menu();
        printf("Pilih operasi matematika: ");
        scanf("%d", &pilihan);

        if ((pilihan >= 1) && (pilihan <= 4))
        {
            printf("Masukkan bilangan pertama: ");
            scanf("%lf", &a);

            printf("Masukkan bilangan kedua: ");
            scanf("%lf", &b);
        }

        switch (pilihan)
        {
            case 1:
                hasil = tambah(a, b);
                printf("Hasil: %.2f + %.2f = %.2f\n", a, b, hasil);
                break;
            case 2:
                hasil = kurang(a, b);
                printf("Hasil: %.2f - %.2f = %.2f\n", a, b, hasil);
                break;
            case 3:
                hasil = kali(a, b);
                printf("Hasil: %.2f x %.2f = %.2f\n", a, b, hasil);
                break;
            case 4:
                if (b == 0)
                {
                    printf("Pembagian dengan nol tidak diperbolehkan.\n");
                }
                else
                {

                    hasil = bagi(a, b);
                    printf("Hasil: %.2f / %.2f = %.2f\n", a, b, hasil);
                }
                break;
            case 5:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih menu 1-5.\n");
                break;
        }
        printf("\n");
    }
    while (pilihan != 5);

    return 0;
}

void tampilkan_menu()
{
    printf("========================================\n");
    printf("           KALKULATOR MODULAR           \n");
    printf("========================================\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (x)\n");
    printf("4. Pembagian (/)\n");
    printf("5. Keluar\n");
    printf("========================================\n");
}

double tambah(double a, double b)
{
    return a + b;
}
double kurang(double a, double b)
{
    return a - b;
}

double kali(double a, double b)
{
    return a * b;
}

double bagi(double a, double b)
{
    return a / b;
}