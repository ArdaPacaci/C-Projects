#include <stdio.h>

int main() {
    int dizi[100], n, c, d, takas;

    printf("Kac adet sayi gireceksiniz?\n");
    scanf("%d", &n);

    printf("%d adet sayiyi girin:\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &dizi[c]);

    // Sıralama Algoritması (Bubble Sort)
    for (c = 0; c < n - 1; c++) {
        for (d = 0; d < n - c - 1; d++) {
            if (dizi[d] > dizi[d+1]) { 
                takas = dizi[d];
                dizi[d] = dizi[d+1];
                dizi[d+1] = takas;
            }
        }
    }

    printf("\nKucukten buyuge siralanmis hali:\n");
    for (c = 0; c < n; c++)
        printf("%d\n", dizi[c]);

    return 0;
}
