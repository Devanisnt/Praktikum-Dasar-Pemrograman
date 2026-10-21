/*
Nama : Devan Adyatma Abel Wibowo
NIM : 2610511039
Kelas : B
Modul : 7
Deskripsi : Program rekap belanja yang dikembangkan
            menggunakan fungsi, pemrograman modular,
            dan penjumlahan total secara rekursif.
*/


#include <stdio.h>

#define MAX_BARANG 20

int baca_bilangan_dalam_rentang(int nilai_minimum, int nilai_maksimum);
double baca_bilangan_positif(void);
double hitung_subtotal_barang(double harga_satuan,int jumlah_unit);
double hitung_total_rekursif(const double subtotal[], int jumlah_data);
double hitung_persentase_diskon(double total_belanja, int status_member);
double hitung_nilai_diskon(double total_belanja, double persentase_diskon);
double hitung_biaya_layanan(double nilai_setelah_diskon);
double hitung_total_pembayaran(double nilai_setelah_diskon, double biaya_layanan);
void tampilkan_ringkasan(
    double total_belanja,
    double persentase_diskon,
    double nilai_diskon,
    double nilai_setelah_diskon,
    double biaya_layanan,
    double total_pembayaran
);

int main(void)
{
    int jumlah_jenis_barang;
    int nomor_barang;
    int jumlah_unit;
    int status_member;
 
    double harga_satuan;
    double subtotal_barang[MAX_BARANG];
    double total_belanja;
    double persentase_diskon;
    double nilai_diskon;
    double nilai_setelah_diskon;
    double biaya_layanan;
    double total_pembayaran;
 
    printf("=========================================\n");
    printf("          PROGRAM REKAP BELANJA          \n");
    printf("=========================================\n");

    printf("Masukkan jumlah jenis barang 1-20: ");
    jumlah_jenis_barang = baca_bilangan_dalam_rentang(1, MAX_BARANG);
 
    for (nomor_barang = 1; nomor_barang <= jumlah_jenis_barang; nomor_barang++)
    {  
        printf("\nBARANG KE-%d\n", nomor_barang);
        
        printf("Harga satuan: ");
        harga_satuan = baca_bilangan_positif();
 
        printf("Jumlah unit 1-1000: ");
        jumlah_unit = baca_bilangan_dalam_rentang(1, 1000);
 
        subtotal_barang[nomor_barang - 1] = hitung_subtotal_barang(harga_satuan, jumlah_unit);
 
        printf("Subtotal: Rp%.2f\n", subtotal_barang[nomor_barang - 1]);
    }
 
    total_belanja = hitung_total_rekursif(
        subtotal_barang,
        jumlah_jenis_barang
    );
 
    printf("\nStatus member 0/1: ");
    status_member = baca_bilangan_dalam_rentang(0, 1);

    persentase_diskon = hitung_persentase_diskon(total_belanja, status_member);
    nilai_diskon = hitung_nilai_diskon(total_belanja, persentase_diskon);
    nilai_setelah_diskon = total_belanja - nilai_diskon;
    biaya_layanan = hitung_biaya_layanan(nilai_setelah_diskon);
    total_pembayaran = hitung_total_pembayaran(nilai_setelah_diskon, biaya_layanan);

    tampilkan_ringkasan(total_belanja, persentase_diskon, nilai_diskon, nilai_setelah_diskon, biaya_layanan, total_pembayaran);

    return 0;
}

int baca_bilangan_dalam_rentang(int nilai_minimum, int nilai_maksimum)
{
    int nilai;
    do 
    {
        scanf("%d", &nilai);

        if ((nilai < nilai_minimum) || (nilai > nilai_maksimum))
        {
            printf("Nilai harus berada pada rentang %d-%d.\n", nilai_minimum, nilai_maksimum);
        }
    }
    while ((nilai < nilai_minimum) || (nilai > nilai_maksimum));
    return nilai;
}

double baca_bilangan_positif()
{
    double nilai;
    do 
    {
        scanf("%lf", &nilai);

        if (nilai <= 0.0)
        {
            printf("Nilai harus lebih besar dari 0.\n");
        }
    }
    while (nilai <= 0.0);
    return nilai;
}

double hitung_subtotal_barang(double harga_satuan, int jumlah_unit)
{
    return harga_satuan * jumlah_unit;
}

double hitung_total_rekursif(const double subtotal[], int jumlah_data)
{
    if (jumlah_data <= 0)
    {
        return 0.0;
    }
    return subtotal[jumlah_data - 1] + hitung_total_rekursif(subtotal, jumlah_data - 1);
}

double hitung_persentase_diskon(double total_belanja, int status_member)
{
    if (status_member == 0)
    {
        return 0.0;
    }

    if (total_belanja < 100000.0)
    {
        return 0.05;
    }
    else if (total_belanja < 500000.0)
    {
        return 0.10;
    }

    return 0.15;
}

double hitung_nilai_diskon(double total_belanja, double persentase_diskon)
{
    return total_belanja * persentase_diskon;
}

double hitung_biaya_layanan(double nilai_setelah_diskon)
{
    return nilai_setelah_diskon * 0.05;
}

double hitung_total_pembayaran(double nilai_setelah_diskon, double biaya_layanan)
{
    return nilai_setelah_diskon + biaya_layanan;
}

void tampilkan_ringkasan(
    double total_belanja,
    double persentase_diskon,
    double nilai_diskon,
    double nilai_setelah_diskon,
    double biaya_layanan,
    double total_pembayaran
)
{
    printf("\nRINGKASAN TRANSAKSI\n");
    printf("---------------------------------------------------------\n");
    printf("Total belanja       : Rp%.2f\n", total_belanja);
    printf("Persentase diskon   : %.2f%%\n", persentase_diskon * 100.0);
    printf("Nilai diskon        : Rp%.2f\n", nilai_diskon);
    printf("Nilai setelah diskon: Rp%.2f\n", nilai_setelah_diskon);
    printf("Biaya layanan       : Rp%.2f\n", biaya_layanan);
    printf("Total pembayaran    : Rp%.2f\n", total_pembayaran);
    printf("=========================================================\n");
}