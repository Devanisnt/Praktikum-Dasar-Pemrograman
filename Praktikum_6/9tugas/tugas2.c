#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int nilai_sel;
    int total_diagonal = 0;
    int total_non_diagonal = 0;
    int total_keseluruhan = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            nilai_sel = i * j;
            
            if (i == j)
            {
                total_diagonal += nilai_sel;
            }
            else
            {
                total_non_diagonal += nilai_sel;
            }
        }
    }

    total_keseluruhan = total_diagonal + total_non_diagonal;

    printf("\n========================================\n");
    printf("       DIAGONAL MATRIKS PERKALIAN       \n");
    printf("========================================\n");
    printf("Ukuran matriks    : %d\n", n);
    printf("----------------------------------------\n");
    printf("Total diagonal    : %d\n", total_diagonal);
    printf("Total non-diagonal: %d\n", total_non_diagonal);
    printf("Total keseluruhan : %d\n", total_keseluruhan);
    printf("========================================\n");

    return 0;
}