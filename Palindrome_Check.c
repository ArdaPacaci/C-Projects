#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    int uzunluk, i, flag = 0;

    printf("=== PALINDROM KONTROL SISTEMI ===\n");
    printf("(Ornek: KABAK, ANA, YAPAY, 101)\n");
    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime);

    // Kelimeyi bastan ve sondan karsilastiriyoruz
    for (i = 0; i < uzunluk / 2; i++) {
        if (kelime[i] != kelime[uzunluk - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf(">> '%s' bir Palindrom degildir.\n", kelime);
    } else {
        printf(">> TEBRIKLER! '%s' bir Palindrom kelimedir.\n", kelime);
    }

    return 0;
}
