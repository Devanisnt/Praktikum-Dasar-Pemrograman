#include <stdio.h>

int main()
{
    int total_hari;
    int minggu;
    int hari;

    printf("Masukkan total hari : ");
    scanf("%d", &total_hari);

    minggu = total_hari / 7;
    hari = total_hari % 7;

    printf("%d hari setara dengan: \n", total_hari);
    printf("%d minggu\n", minggu);
    printf("%d hari\n", hari);

    return 0;
}