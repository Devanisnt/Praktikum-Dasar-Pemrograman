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

double cari_maksimum_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
);

 double cari_minimum_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
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
    int mahasiswa;
    int mata_kuliah;
    
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
    printf("\nREKAP PER MAHASISWA\n");
    printf("----------------------------------------------------\n");
    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        printf("Mahasiswa %d | Total %.2f | Rata-rata %.2f\n", 
            mahasiswa + 1,
            hitung_total_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah),
            hitung_rata_rata_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah));
    }
    printf("\n");

    /* Tampilkan rekap per mata kuliah. */
    printf("\nREKAP PER MATA KULIAH\n");
    printf("----------------------------------------------------\n");
    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        printf("MK-%d | Total %.2f | Rata-rata %.2f\n",
            mata_kuliah + 1,
            hitung_total_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah),
            hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah));
    }
    printf("\n");
 
    total_keseluruhan = hitung_total_keseluruhan(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    jumlah_elemen = jumlah_mahasiswa * jumlah_mata_kuliah;
    rata_rata_keseluruhan = total_keseluruhan / jumlah_elemen;
    jumlah_lulus = hitung_jumlah_lulus(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    persentase_lulus = ((double) jumlah_lulus / jumlah_elemen) * 100.0;
    mahasiswa_terbaik = cari_mahasiswa_rata_rata_tertinggi(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
    mata_kuliah_terbaik = cari_mata_kuliah_rata_rata_tertinggi(nilai, jumlah_mahasiswa, jumlah_mata_kuliah);
 
    /* Cari dan tampilkan minimum dan maksimum. */
    double nilai_tertinggi = nilai[0][0];
    double nilai_terendah = nilai[0][0];
    int baris_tertinggi = 0, kolom_tertinggi = 0;
    int baris_terendah = 0, kolom_terendah = 0;

    for (int baris = 0; baris < jumlah_mahasiswa; baris++) {
        for (int kolom = 0; kolom < jumlah_mata_kuliah; kolom++) {
            if (nilai[baris][kolom] > nilai_tertinggi) {
                nilai_tertinggi = nilai[baris][kolom];
                baris_tertinggi = baris;
                kolom_tertinggi = kolom;
            }
            if (nilai[baris][kolom] < nilai_terendah) {
                nilai_terendah = nilai[baris][kolom];
                baris_terendah = baris;
                kolom_terendah = kolom;
            }
        }
    }


    /* Tampilkan rekap keseluruhan. */
    printf("\nREKAP KESELURUHAN\n");
    printf("----------------------------------------------------\n");
    printf("Total Seluruh nilai      : %.2f\n", total_keseluruhan);
    printf("Rata-rata seluruh nilai  : %.2f\n", rata_rata_keseluruhan);
    printf("Nilai tertinggi          : %.2f\n", nilai_tertinggi);
    printf("Posisi tertinggi         : Mahasiswa %d, MK %d\n", baris_tertinggi + 1, kolom_tertinggi + 1);
    printf("Nilai terendah           : %.2f\n", nilai_terendah);
    printf("Posisi terendah          : Mahasiswa %d, MK %d\n", baris_terendah + 1, kolom_terendah + 1);
    printf("Mahasiswa rata-rata terbaik: Mahasiswa %d\n", mahasiswa_terbaik + 1);
    printf("Mata kuliah rata-rata terbaik: MK %d\n", mata_kuliah_terbaik + 1);
    printf("Jumlah lulus             : %d dari %d\n", jumlah_lulus, jumlah_elemen);
    printf("Persentase kelulusan     : %.2f%%\n", persentase_lulus);
 
    printf("\nMasukkan nilai yang dicari: ");
    scanf("%lf", &target);
 
    printf("\nHASIL PENCARIAN\n");
    printf("----------------------------------------------------\n");

    frekuensi = hitung_frekuensi_target(nilai, jumlah_mahasiswa, jumlah_mata_kuliah, target);
 
    printf("Jumlah kemunculan: %d\n", frekuensi);
 
    tampilkan_posisi_target(nilai, jumlah_mahasiswa, jumlah_mata_kuliah, target);

    printf("====================================================\n");

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
        printf("\nMAHASISWA KE-%d\n", mahasiswa + 1);
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

    printf("\nTABEL NILAI\n");
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

double hitung_total_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int mata_kuliah;
    double total = 0.0;

    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        total += nilai[indeks_mahasiswa][mata_kuliah];
    }

    return total;
}

double hitung_rata_rata_mahasiswa(
    const double nilai[][MAX_MATA_KULIAH],
    int indeks_mahasiswa,
    int jumlah_mata_kuliah
)
{
    return hitung_total_mahasiswa(nilai, indeks_mahasiswa, jumlah_mata_kuliah) / jumlah_mata_kuliah;
}

double hitung_total_mata_kuliah(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int indeks_mata_kuliah
)
{
    int mahasiswa;
    double total = 0.0;

    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        total += nilai[mahasiswa][indeks_mata_kuliah];
    }

    return total;
}

double hitung_rata_rata_mata_kuliah(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int indeks_mata_kuliah
)
{
    return hitung_total_mata_kuliah(nilai, jumlah_mahasiswa, indeks_mata_kuliah) / jumlah_mahasiswa;
}

double hitung_total_keseluruhan(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    double total = 0.0;
    int mahasiswa;
    int mata_kuliah;

    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
        {
            total += nilai[mahasiswa][mata_kuliah];
        }
    }

    return total;
}

int hitung_jumlah_lulus(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int jumlah_lulus = 0;

    for (int mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) {
        for (int mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++) {
            if (nilai[mahasiswa][mata_kuliah] >= BATAS_LULUS) {
                jumlah_lulus++;
            }
        }
    }

    return jumlah_lulus;
}

int cari_mahasiswa_rata_rata_tertinggi(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int indeks_terbaik = 0;
    double rata_tertinggi = hitung_rata_rata_mahasiswa(nilai, 0, jumlah_mata_kuliah);
    int mahasiswa;

    for (mahasiswa = 1; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        double rata_sekarang = hitung_rata_rata_mahasiswa(nilai, mahasiswa, jumlah_mata_kuliah);

        if (rata_sekarang > rata_tertinggi)
        {
            rata_tertinggi = rata_sekarang;
            indeks_terbaik = mahasiswa;
        }
    }

    return indeks_terbaik;
}

int cari_mata_kuliah_rata_rata_tertinggi(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah
)
{
    int indeks_terbaik = 0;
    double rata_tertinggi = hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, 0);
    int mata_kuliah;

    for (mata_kuliah = 1; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        double rata_sekarang = hitung_rata_rata_mata_kuliah(nilai, jumlah_mahasiswa, mata_kuliah);

        if (rata_sekarang > rata_tertinggi)
        {
            rata_tertinggi = rata_sekarang;
            indeks_terbaik = mata_kuliah;
        }
    }

    return indeks_terbaik;
}

int hitung_frekuensi_target(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah,
    double target
)
{
    int frekuensi = 0;

    for (int mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) 
    {
        for (int mk = 0; mk < jumlah_mata_kuliah; mk++) 
        {
            if (fabs(nilai[mahasiswa][mk] - target) < EPSILON) 
            {
                frekuensi++;
            }
        }
    }
    return frekuensi;
}

void tampilkan_posisi_target(
    const double nilai[][MAX_MATA_KULIAH],
    int jumlah_mahasiswa,
    int jumlah_mata_kuliah,
    double target
)
{
    int ditemukan = 0;

    printf("Posisi:\n");
    for (int mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++) 
    {
        for (int mk = 0; mk < jumlah_mata_kuliah; mk++) 
        {
            if (fabs(nilai[mahasiswa][mk] - target) < EPSILON) 
            {
                printf("Mahasiswa %d, MK %d\n", mahasiswa + 1, mk + 1);
                ditemukan = 1;
            }
        }
    }

    if (!ditemukan) 
    {
        printf("Target %.2f tidak ditemukan.\n", target);
    }
}
