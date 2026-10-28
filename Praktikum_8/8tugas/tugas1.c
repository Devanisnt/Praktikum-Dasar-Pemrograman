/*
Nama        : Devan Adyatma Abel Wibowo
NIM         : 2610511039
Kelas       : B
Modul       : 8 
Deskripsi   : Program rekap dan pencarian nilai mahasiswa menggunakan 
              array satu dimensi dan algoritma sequential search.
*/

#include <stdio.h>

#define MAX_DATA 50

void baca_nilai(double nilai[], int jumlah_data);
double hitung_total(const double nilai[], int jumlah_data);
int cari_indeks_tertinggi(const double nilai[], int jumlah_data);
int cari_indeks_terendah(const double nilai[], int jumlah_data);
int hitung_jumlah_lulus(const double nilai[], int jumlah_data);
int hitung_frekuensi(const double nilai[], int jumlah_data, double target);
void tampilkan_seluruh_posisi(const double nilai[], int jumlah_data, double target);
/* Lengkapi prototype fungsi yang menampilkan seluruh posisi. */

int main()
{
    double nilai[MAX_DATA];
    int jumlah_data;
    double target;
    double total;
    double rata_rata;
    int posisi_max;
    int posisi_min;
    int jumlah_lulus;
    int frekuensi;
 
    printf("=================================================\n");
    printf("         PROGRAM REKAP NILAI MAHASISWA          \n");
    printf("=================================================\n");

    do 
    {
        printf("Masukkan jumlah mahasiswa 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);

        if ((jumlah_data < 1) || (jumlah_data > MAX_DATA))
        {
            printf("Jumlah mahasiswa tidak valid.\n");
        }
    }
    while ((jumlah_data < 1) || (jumlah_data > MAX_DATA));

    baca_nilai(nilai, jumlah_data);
    
    total = hitung_total(nilai, jumlah_data);
    rata_rata = total / jumlah_data;
    posisi_max = cari_indeks_tertinggi(nilai, jumlah_data);
    posisi_min = cari_indeks_terendah(nilai, jumlah_data);
    jumlah_lulus = hitung_jumlah_lulus(nilai, jumlah_data);

    printf("\nHASIL REKAP\n");
    printf("------------------------------------------------\n");
    printf("Jumlah mahasiswa   : %d\n", jumlah_data);
    printf("Total nilai        : %.2f\n", total);
    printf("Rata-rata          : %.2f\n", rata_rata);
    printf("Nilai tertinggi    : %.2f (mahasiswa ke-%d)\n", nilai[posisi_max], posisi_max + 1);
    printf("Nilai terendah     : %.2f (mahasiswa ke-%d)\n", nilai[posisi_min], posisi_min + 1);
    printf("Jumlah lulus       : %d\n", jumlah_lulus);
 
    printf("\nMasukkan nilai yang dicari: ");
    scanf("%lf", &target);
 
    /* Tampilkan hasil pencarian menggunakan fungsi. */
    printf("\nHASIL PENCARIAN\n");
    printf("------------------------------------------------\n");
    tampilkan_seluruh_posisi(nilai, jumlah_data, target);

    frekuensi = hitung_frekuensi(nilai, jumlah_data, target);
    printf("Jumlah kemunculan   : %d\n", frekuensi);
    printf("================================================\n");
    return 0;
}

/* Lengkapi seluruh definisi fungsi. */
void baca_nilai(double nilai[], int jumlah_data)
{
    int i;

    for (i = 0; i < jumlah_data; i++)
    {
        do 
        {
            printf("Nilai mahasiswa ke-%d: ", i + 1);
            scanf("%lf", &nilai[i]);

            if ((nilai[i] < 0) || (nilai[i] > 100))
            {
                printf("Nilai tidak valid.\n");
            }
        }
        while ((nilai[i] < 0) || (nilai[i] > 100));
    }
}

double hitung_total(const double nilai[], int jumlah_data)
{
    double total = 0.0;
    int i;

    for (i = 0; i < jumlah_data; i++)
    {
        total += nilai[i];
    }

    return total;
}

int cari_indeks_tertinggi(const double nilai[], int jumlah_data)
{
    int i;
    int indeks_max = 0;

    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] > nilai[indeks_max])
        {
            indeks_max = i;
        }
    }

    return indeks_max;
}

int cari_indeks_terendah(const double nilai[], int jumlah_data)
{
    int i;
    int indeks_min = 0;

    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] < nilai[indeks_min])
        {
            indeks_min = i;
        }
    }

    return indeks_min;
}

int hitung_jumlah_lulus(const double nilai[], int jumlah_data)
{
    int i;
    int jumlah_lulus = 0;

    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] >= 60)
        {
            jumlah_lulus++;
        }
    }

    return jumlah_lulus;
}

int hitung_frekuensi(const double nilai[], int jumlah_data, double target)
{
    int i;
    int frekuensi = 0;

    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] == target)
        {
            frekuensi++;
        }
    }

    return frekuensi;
}

void tampilkan_seluruh_posisi(const double nilai[], int jumlah_data, double target)
{
    int i;
    int posisi = 0;

    printf("Nilai %.2f ditemukan pada mahasiswa ", target);
    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] == target)
        {
            printf("ke-%d ", i + 1);
            posisi = 1;
        }
    }

    if (posisi == 0)
    {
        printf("Tidak ada");
    }
    printf("\n");
}