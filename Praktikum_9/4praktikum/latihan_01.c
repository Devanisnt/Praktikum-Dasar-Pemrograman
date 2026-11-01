#include <stdio.h>

#define MAX_BARIS 10
#define MAX_KOLOM 10

void baca_data(
    int data[][MAX_KOLOM],
    int jumlah_baris,
    int jumlah_kolom
);

void tampilkan_data(
    const int data[][MAX_KOLOM],
    int jumlah_baris,
    int jumlah_kolom
);

int main(void)
{
    int data[MAX_BARIS][MAX_KOLOM];
    int jumlah_baris;
    int jumlah_kolom;
 
    do
    {
        printf("Masukkan jumlah baris 1-%d: ", MAX_BARIS);
        scanf("%d", &jumlah_baris);
    }
    while ((jumlah_baris < 1) || (jumlah_baris > MAX_BARIS));
 
    do
    {
        printf("Masukkan jumlah kolom 1-%d: ", MAX_KOLOM);
        scanf("%d", &jumlah_kolom);
    }
    while ((jumlah_kolom < 1) || (jumlah_kolom > MAX_KOLOM));
 
    baca_data(data, jumlah_baris, jumlah_kolom);
    printf("\nDATA DALAM BENTUK TABEL\n");
    tampilkan_data(data, jumlah_baris, jumlah_kolom);
 
    return 0;
}

void baca_data(
    int data[][MAX_KOLOM],
    int jumlah_baris,
    int jumlah_kolom
)
{
    int baris;
    int kolom;
 
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            printf(
                "Data baris %d kolom %d: ",
                baris + 1,
                kolom + 1
            );
            scanf("%d", &data[baris][kolom]);
        }
    }
}

void tampilkan_data(
    const int data[][MAX_KOLOM],
    int jumlah_baris,
    int jumlah_kolom
)
{
    int baris;
    int kolom;
 
    for (baris = 0; baris < jumlah_baris; baris++)
    {
        for (kolom = 0; kolom < jumlah_kolom; kolom++)
        {
            printf("%6d", data[baris][kolom]);
        }
        printf("\n");
    }
}