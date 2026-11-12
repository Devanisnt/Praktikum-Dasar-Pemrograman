/*
Nama : Devan Adyatma Abel Wibowo
NIM : 2610511039
Kelas : B
Modul : 9
Deskripsi : Program menyimpan dan mengolah nilai beberapa
            mahasiswa dan mata kuliah menggunakan array
            dua dimensi.
*/

#include <stdio.h>
#include <math.h>

#define MAX_MAHASISWA 30
#define MAX_MATA_KULIAH 10
#define BATAS_LULUS 60.0
#define EPSILON 0.000001

int baca_jumlah_dalam_rentang(
    int minimum,
    int maksimum
);

void baca_nilai(
    double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

void tampilkan_tabel_nilai(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

double hitung_total_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
);

double hitung_rata_rata_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
);

double hitung_total_mata_kuliah(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int indeks_mata_kuliah
);

double hitung_rata_rata_mata_kuliah(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int indeks_mata_kuliah
);

double hitung_total_keseluruhan(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

int hitung_jumlah_lulus(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

int cari_mahasiswa_rata_rata_tertinggi(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

int cari_mata_kuliah_rata_rata_tertinggi(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
);

int hitung_frekuensi_target(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah,
    double target
);

void tampilkan_posisi_target(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah,
    double target
);

int main()
{
    double nilai[MAX_MAHASISWA][MAX_MATA_KULIAH];
    int jumlah_mahasiswa;
    int jumlah_mata_kuliah;
    int mahasiswa_terbaik;
    int mata_kuliah_terbaik;
    int jumlah_lulus;
    int jumlah_elemen;
    int frekuensi;
    double total_keseluruhan;
    double rata_rata_keseluruhan;
    double persentase_lulus;
    double target;
 
    printf("====================================================\n");
    printf("         PENGELOLAAN NILAI MAHASISWA DAN MK         \n");
    printf("====================================================\n");

    printf("Masukkan jumlah mahasiswa 1-%d: ", MAX_MAHASISWA);
    jumlah_mahasiswa = baca_jumlah_dalam_rentang(1, MAX_MAHASISWA);

    printf("Masukkan jumlah mata kuliah 1-%d: ", MAX_MATA_KULIAH);
    jumlah_mata_kuliah = baca_jumlah_dalam_rentang(1, MAX_MATA_KULIAH);
 
    baca_nilai(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    tampilkan_tabel_nilai(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
 
    /* Tampilkan rekap per mahasiswa. */
 
    /* Tampilkan rekap per mata kuliah. */
 
    total_keseluruhan = hitung_total_keseluruhan(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    jumlah_elemen = jumlah_mahasiswa * jumlah_mata_kuliah;
    rata_rata_keseluruhan = total_keseluruhan / jumlah_elemen;
    jumlah_lulus = hitung_jumlah_lulus(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    persentase_lulus = ((double) jumlah_lulus / jumlah_elemen) * 100.0;
    mahasiswa_terbaik = cari_mahasiswa_rata_rata_tertinggi(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    mata_kuliah_terbaik = cari_mata_kuliah_rata_rata_tertinggi(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
 
    /* Cari dan tampilkan minimum dan maksimum. */
 
    /* Tampilkan rekap keseluruhan. */
 
    printf("\nMasukkan nilai yang dicari: ");
    scanf("%lf", &target);
 
    frekuensi = hitung_frekuensi_target(nilai, jumlah_mahasiswa, jumlah_mata_kuliah, target);
 
    printf("Jumlah kemunculan: %d\n", frekuensi);
 
    tampilkan_posisi_target(nilai, jumlah_mahasiswa, jumlah_mata_kuliah, target);

    return 0;
}
/* Lengkapi seluruh definisi fungsi. */
int baca_jumlah_dalam_rentang(
    int minimum,
    int maksimum
)
{
    int jumlah;

    do 
    {
        scanf("%d", &jumlah);

        if ((jumlah < minimum) || (jumlah > maksimum))
        {
            printf("Jumlah tidak valid.\n");
            return 1;
        }
    }
    while ((jumlah < minimum) || (jumlah > maksimum));

    return jumlah;
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
        printf("MAHASISWA KE-%d", mahasiswa + 1);
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

void tampilkan_tabel_nilai(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int mahasiswa;
    int mata_kuliah;

    printf("TABEL NILAI\n");
    printf("----------------------------------------------------\n");
    printf("%9s", "Mahasiswa");

    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        printf("    MK-%d", mata_kuliah + 1);
    }

    printf("\n");

    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        printf("%9d", mahasiswa + 1);

        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
        {
            printf("%8.2f", nilai[mahasiswa][mata_kuliah]);
        }
        printf("\n");
    }
}