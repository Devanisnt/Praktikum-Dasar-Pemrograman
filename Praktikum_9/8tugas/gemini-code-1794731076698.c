/*
Nama      : Devan
NIM       : [Isi NIM]
Kelas     : [Isi Kelas]
Modul     : 9
Deskripsi : Program menyimpan dan mengolah nilai beberapa mahasiswa
            dan mata kuliah menggunakan array dua dimensi.
*/

#include <stdio.h>
#include <math.h>

#define MAX_MAHASISWA 30
#define MAX_MATA_KULIAH 10
#define BATAS_LULUS 60.0
#define EPSILON 0.000001

/* Function Prototypes - Fungsi Wajib */
int baca_jumlah_dalam_rentang(int minimum, int maksimum);
void baca_nilai(double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah);
void tampilkan_tabel_nilai(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah);
double hitung_total_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah);
double hitung_rata_rata_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah);
double hitung_total_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah);
double hitung_rata_rata_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah);
double hitung_total_keseluruhan(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah);
int hitung_jumlah_lulus(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah);
int cari_mahasiswa_rata_rata_tertinggi(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah);
int cari_mata_kuliah_rata_rata_tertinggi(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah);
int hitung_frekuensi_target(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah, double target);
void tampilkan_posisi_target(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah, double target);

/* Function Prototypes - Fungsi Tambahan */
double cari_maksimum_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah);
double cari_minimum_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah);
int hitung_lulus_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah);
double cari_maksimum_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah);
double cari_minimum_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah);
int hitung_lulus_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah);
void cari_posisi_ekstrem(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah,
                         double *maks, int *baris_maks, int *kolom_maks,
                         double *min, int *baris_min, int *kolom_min);

int main(void)
{
    double nilai[MAX_MAHASISWA][MAX_MATA_KULIAH];
    int jumlah_mahasiswa;
    int jumlah_mata_kuliah;
    int mahasiswa, mata_kuliah;
    int mahasiswa_terbaik;
    int mata_kuliah_terbaik;
    int jumlah_lulus;
    int jumlah_elemen;
    int frekuensi;
    double total_keseluruhan;
    double rata_rata_keseluruhan;
    double persentase_lulus;
    double target;
    double nilai_maks, nilai_min;
    int baris_maks, kolom_maks, baris_min, kolom_min;

    printf("========================================\n");
    printf("   PENGELOLAAN NILAI MAHASISWA DAN MK   \n");
    printf("========================================\n");

    printf("Masukkan jumlah mahasiswa 1-%d: ", MAX_MAHASISWA);
    jumlah_mahasiswa = baca_jumlah_dalam_rentang(1, MAX_MAHASISWA);

    printf("Masukkan jumlah mata kuliah 1-%d: ", MAX_MATA_KULIAH);
    jumlah_mata_kuliah = baca_jumlah_dalam_rentang(1, MAX_MATA_KULIAH);

    baca_nilai(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    tampilkan_tabel_nilai(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);

    /* Rekap per Mahasiswa */
    printf("\n========================================\n");
    printf("           REKAP PER MAHASISWA          \n");
    printf("========================================\n");
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        printf("Mahasiswa %d | Total: %6.2f | Rata-rata: %6.2f | Maks: %6.2f | Min: %6.2f | MK Lulus: %d/%d\n",
               mahasiswa + 1,
               hitung_total_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah),
               hitung_rata_rata_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah),
               cari_maksimum_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah),
               cari_minimum_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah),
               hitung_lulus_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah),
               jumlah_mata_kuliah);
    }

    /* Rekap per Mata Kuliah */
    printf("\n========================================\n");
    printf("          REKAP PER MATA KULIAH         \n");
    printf("========================================\n");
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
        printf("MK-%-2d       | Total: %6.2f | Rata-rata: %6.2f | Maks: %6.2f | Min: %6.2f | Mhs Lulus: %d/%d\n",
               mata_kuliah + 1,
               hitung_total_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah),
               hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah),
               cari_maksimum_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah),
               cari_minimum_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah),
               hitung_lulus_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah),
               jumlah_mahasiswa);
    }

    /* Perhitungan Rekap Keseluruhan */
    total_keseluruhan = hitung_total_keseluruhan(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    jumlah_elemen = jumlah_mahasiswa * jumlah_mata_kuliah;
    rata_rata_keseluruhan = total_keseluruhan / jumlah_elemen;
    jumlah_lulus = hitung_jumlah_lulus(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    persentase_lulus = ((double)jumlah_lulus / jumlah_elemen) * 100.0;
    mahasiswa_terbaik = cari_mahasiswa_rata_rata_tertinggi(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    mata_kuliah_terbaik = cari_mata_kuliah_rata_rata_tertinggi(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);

    cari_posisi_ekstrem(nilai, jumlah_mahasiswa, jumlah_mata_kuliah,
                        &nilai_maks, &baris_maks, &kolom_maks,
                        &nilai_min, &baris_min, &kolom_min);

    printf("\n========================================\n");
    printf("            REKAP KESELURUHAN           \n");
    printf("========================================\n");
    printf("Total seluruh nilai          : %.2f\n", total_keseluruhan);
    printf("Rata-rata seluruh nilai      : %.2f\n", rata_rata_keseluruhan);
    printf("Nilai tertinggi              : %.2f\n", nilai_maks);
    printf("Posisi tertinggi             : Mahasiswa %d, MK %d\n", baris_maks + 1, kolom_maks + 1);
    printf("Nilai terendah               : %.2f\n", nilai_min);
    printf("Posisi terendah              : Mahasiswa %d, MK %d\n", baris_min + 1, kolom_min + 1);
    printf("Jumlah nilai lulus (>= 60)   : %d dari %d (%.2f%%)\n", jumlah_lulus, jumlah_elemen, persentase_lulus);
    printf("Mahasiswa rata-rata terbaik  : Mahasiswa %d\n", mahasiswa_terbaik + 1);
    printf("Mata kuliah rata-rata terbaik: MK %d\n", mata_kuliah_terbaik + 1);

    /* Pencarian Target */
    printf("\nMasukkan nilai yang dicari: ");
    scanf("%lf", &target);

    printf("\n========================================\n");
    printf("             HASIL PENCARIAN            \n");
    printf("========================================\n");
    frekuensi = hitung_frekuensi_target(nilai, jumlah_mahasiswa, jumlah_mata_kuliah, target);
    printf("Jumlah kemunculan: %d\n", frekuensi);
    if (frekuensi > 0) {
        printf("Posisi:\n");
        tampilkan_posisi_target(nilai, jumlah_mahasiswa, jumlah_mata_kuliah, target);
    }
    printf("========================================\n");

    return 0;
}

/* ==================== DEFINISI FUNGSI WAJIB ==================== */

int baca_jumlah_dalam_rentang(int minimum, int maksimum)
{
    int jumlah;
    do {
        scanf("%d", &jumlah);
        if (jumlah < minimum || jumlah > maksimum) {
            printf("Input tidak valid. Masukkan angka %d-%d: ", minimum, maksimum);
        }
    } while (jumlah < minimum || jumlah > maksimum);
    return jumlah;
}

void baca_nilai(double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah)
{
    int mahasiswa, mata_kuliah;
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        printf("\nMAHASISWA KE-%d\n", mahasiswa + 1);
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            do {
                printf("Nilai mata kuliah ke-%d: ", mata_kuliah + 1);
                scanf("%lf", &nilai[mahasiswa][mata_kuliah]);
                
                if (nilai[mahasiswa][mata_kuliah] < 0.0 || nilai[mahasiswa][mata_kuliah] > 100.0) {
                    printf("Nilai harus berada pada rentang 0-100.\n");
                }
            } while (nilai[mahasiswa][mata_kuliah] < 0.0 || nilai[mahasiswa][mata_kuliah] > 100.0);
        }
    }
}

void tampilkan_tabel_nilai(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah)
{
    int mahasiswa, mata_kuliah;
    printf("\n========================================\n");
    printf("               TABEL NILAI              \n");
    printf("========================================\n");
    printf("%-12s", "Mahasiswa");
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
        printf("   MK-%-4d", mata_kuliah + 1);
    }
    printf("\n");

    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        printf("%-12d", mahasiswa + 1);
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            printf("%8.2f", nilai[mahasiswa][mata_kuliah]);
        }
        printf("\n");
    }
}

double hitung_total_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah)
{
    double total = 0.0;
    int mata_kuliah;
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
        total += nilai[indeks_mahasiswa][mata_kuliah];
    }
    return total;
}

double hitung_rata_rata_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah)
{
    return hitung_total_mahasiswa(nilai, indeks_mahasiswa, jumlah_mata_kuliah) / jumlah_mata_kuliah;
}

double hitung_total_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah)
{
    double total = 0.0;
    int mahasiswa;
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        total += nilai[mahasiswa][indeks_mata_kuliah];
    }
    return total;
}

double hitung_rata_rata_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah)
{
    return hitung_total_mata_kuliah(nilai, jumlah_mahasiswa, indeks_mata_kuliah) / jumlah_mahasiswa;
}

double hitung_total_keseluruhan(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah)
{
    double total = 0.0;
    int mahasiswa, mata_kuliah;
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            total += nilai[mahasiswa][mata_kuliah];
        }
    }
    return total;
}

int hitung_jumlah_lulus(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah)
{
    int jumlah_lulus = 0;
    int mahasiswa, mata_kuliah;
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            if (nilai[mahasiswa][mata_kuliah] >= BATAS_LULUS) {
                jumlah_lulus++;
            }
        }
    }
    return jumlah_lulus;
}

int cari_mahasiswa_rata_rata_tertinggi(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah)
{
    int indeks_terbaik = 0;
    double rata_tertinggi = hitung_rata_rata_mahasiswa(nilai, 0, jumlah_mata_kuliah);
    int mahasiswa;

    for (mahasiswa = 1; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        double rata_sekarang = hitung_rata_rata_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah);
        if (rata_sekarang > rata_tertinggi) {
            rata_tertinggi = rata_sekarang;
            indeks_terbaik = mahasiswa;
        }
    }
    return indeks_terbaik;
}

int cari_mata_kuliah_rata_rata_tertinggi(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah)
{
    int indeks_terbaik = 0;
    double rata_tertinggi = hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, 0);
    int mata_kuliah;

    for (mata_kuliah = 1; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
        double rata_sekarang = hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah);
        if (rata_sekarang > rata_tertinggi) {
            rata_tertinggi = rata_sekarang;
            indeks_terbaik = mata_kuliah;
        }
    }
    return indeks_terbaik;
}

int hitung_frekuensi_target(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah, double target)
{
    int frekuensi = 0;
    int mahasiswa, mata_kuliah;
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            if (fabs(nilai[mahasiswa][mata_kuliah] - target) < EPSILON) {
                frekuensi++;
            }
        }
    }
    return frekuensi;
}

void tampilkan_posisi_target(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah, double target)
{
    int mahasiswa, mata_kuliah;
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            if (fabs(nilai[mahasiswa][mata_kuliah] - target) < EPSILON) {
                printf("Mahasiswa %d, MK %d\n", mahasiswa + 1, mata_kuliah + 1);
            }
        }
    }
}

/* ==================== DEFINISI FUNGSI TAMBAHAN ==================== */

double cari_maksimum_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah)
{
    double maks = nilai[indeks_mahasiswa][0];
    int mk;
    for (mk = 1; mk < jumlah_mata_kuliah; mk++) {
        if (nilai[indeks_mahasiswa][mk] > maks) maks = nilai[indeks_mahasiswa][mk];
    }
    return maks;
}

double cari_minimum_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah)
{
    double min = nilai[indeks_mahasiswa][0];
    int mk;
    for (mk = 1; mk < jumlah_mata_kuliah; mk++) {
        if (nilai[indeks_mahasiswa][mk] < min) min = nilai[indeks_mahasiswa][mk];
    }
    return min;
}

int hitung_lulus_mahasiswa(const double nilai[][MAX_MATA_KULIAH], int indeks_mahasiswa, int jumlah_mata_kuliah)
{
    int lulus = 0, mk;
    for (mk = 0; mk < jumlah_mata_kuliah; mk++) {
        if (nilai[indeks_mahasiswa][mk] >= BATAS_LULUS) lulus++;
    }
    return lulus;
}

double cari_maksimum_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah)
{
    double maks = nilai[0][indeks_mata_kuliah];
    int mhs;
    for (mhs = 1; mhs < jumlah_mahasiswa; mhs++) {
        if (nilai[mhs][indeks_mata_kuliah] > maks) maks = nilai[mhs][indeks_mata_kuliah];
    }
    return maks;
}

double cari_minimum_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah)
{
    double min = nilai[0][indeks_mata_kuliah];
    int mhs;
    for (mhs = 1; mhs < jumlah_mahasiswa; mhs++) {
        if (nilai[mhs][indeks_mata_kuliah] < min) min = nilai[mhs][indeks_mata_kuliah];
    }
    return min;
}

int hitung_lulus_mata_kuliah(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int indeks_mata_kuliah)
{
    int lulus = 0, mhs;
    for (mhs = 0; mhs < jumlah_mahasiswa; mhs++) {
        if (nilai[mhs][indeks_mata_kuliah] >= BATAS_LULUS) lulus++;
    }
    return lulus;
}

void cari_posisi_ekstrem(const double nilai[][MAX_MATA_KULIAH], int jumlah_mahasiswa, int jumlah_mata_kuliah,
                         double *maks, int *baris_maks, int *kolom_maks,
                         double *min, int *baris_min, int *kolom_min)
{
    int mhs, mk;
    *maks = nilai[0][0];
    *baris_maks = 0;
    *kolom_maks = 0;
    *min = nilai[0][0];
    *baris_min = 0;
    *kolom_min = 0;

    for (mhs = 0; mhs < jumlah_mahasiswa; mhs++) {
        for (mk = 0; mk < jumlah_mata_kuliah; mk++) {
            if (nilai[mhs][mk] > *maks) {
                *maks = nilai[mhs][mk];
                *baris_maks = mhs;
                *kolom_maks = mk;
            }
            if (nilai[mhs][mk] < *min) {
                *min = nilai[mhs][mk];
                *baris_min = mhs;
                *kolom_min = mk;
            }
        }
    }
}