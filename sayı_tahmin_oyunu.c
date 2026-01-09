#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rastgeleSayi, tahmin, denemeSayisi = 0;
    
    // Rastgele sayı üretimi için zamanı kullanıyoruz
    srand(time(0));
    rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasında sayı

    printf("=== SAYI TAHMIN OYUNU ===\n");
    printf("1 ile 100 arasinda bir sayi tuttum. Bakalim bulabilecek misin?\n\n");

    do {
        printf("Tahminin nedir? : ");
        scanf("%d", &tahmin);
        denemeSayisi++;

        if (tahmin > rastgeleSayi) {
            printf("Daha KUCUK bir sayi gir.\n");
        } else if (tahmin < rastgeleSayi) {
            printf("Daha BUYUK bir sayi gir.\n");
        } else {
            printf("\nTEBRIKLER! %d. denemede buldun!\n", denemeSayisi);
        }
    } while (tahmin != rastgeleSayi);

    return 0;
}
