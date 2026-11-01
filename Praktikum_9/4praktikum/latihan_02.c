#include <stdio.h>

#define MAX_MAHASISWA 30
#define MAX_MATA_KULIAH 10

void baca_nilai(
    double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

void tampilkan_nilai(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

double hitung_rata_rata_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
);

double hitung_rata_rata_mata_kuliah(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int indeks_mata_kuliah
);

int main(void)
{
    double nilai[MAX_MAHASISWA][MAX_MATA_KULIAH];
    int jumlah_mahasiswa;
    int jumlah_mata_kuliah;
    int mahasiswa;
    int mata_kuliah;
 
    do
    {
        printf("Masukkan jumlah mahasiswa 1-30: ");
        scanf("%d", &jumlah_mahasiswa);
    }
    while ((jumlah_mahasiswa < 1) || (jumlah_mahasiswa > MAX_MAHASISWA));
 
    do
    {
        printf("Masukkan jumlah mata kuliah 1-10: ");
        scanf("%d", &jumlah_mata_kuliah);
    }
    while ((jumlah_mata_kuliah < 1) || (jumlah_mata_kuliah > MAX_MATA_KULIAH));
 
    baca_nilai(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    tampilkan_nilai(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    printf("\nRATA-RATA SETIAP MAHASISWA\n");
 
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        double rata_rata = hitung_rata_rata_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah);
        
        printf("Mahasiswa ke-%d: %.2f\n", mahasiswa + 1, rata_rata);
    }
 
    printf("\nRATA-RATA SETIAP MATA KULIAH\n");
 
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        double rata_rata = hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah);
 
        printf("Mata kuliah ke-%d: %.2f\n", mata_kuliah + 1, rata_rata);
    }

    return 0;
}

void baca_nilai(
    double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int mahasiswa;
    int mata_kuliah;
 
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        printf("\nMahasiswa ke-%d\n", mahasiswa + 1);
        
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
        {
            do
            {
                printf("Nilai mata kuliah ke-%d: ", mata_kuliah + 1);
                scanf("%lf", &nilai[mahasiswa][mata_kuliah]);
 
                if ((nilai[mahasiswa][mata_kuliah] < 0.0) || (nilai[mahasiswa][mata_kuliah] > 100.0))
                {
                    printf("Nilai harus berada pada rentang 0-100.\n");
                }
            }
            while ((nilai[mahasiswa][mata_kuliah] < 0.0) || (nilai[mahasiswa][mata_kuliah] > 100.0));
        }
    }
}

void tampilkan_nilai(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int mahasiswa;
    int mata_kuliah;
 
    printf("\nTABEL NILAI\n");
    printf("%12s", "Mahasiswa");
 
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        printf("%10d", mata_kuliah + 1);
    }

    printf("\n");
 
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        printf("%12d", mahasiswa + 1);
 
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
        {
            printf("%10.2f", nilai[mahasiswa][mata_kuliah]);
        }
        printf("\n");
    }
}

double hitung_rata_rata_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
)
{
    double total = 0.0;
    int mata_kuliah;
 
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        total += nilai[indeks_mahasiswa][mata_kuliah];
    }
 
    return total / jumlah_mata_kuliah;
}

double hitung_rata_rata_mata_kuliah(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int indeks_mata_kuliah
)
{
    double total = 0.0;
    int mahasiswa;
 
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        total += nilai[mahasiswa][indeks_mata_kuliah];
    }
 
    return total / jumlah_mahasiswa;
}