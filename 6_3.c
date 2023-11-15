//armstrong sayı bulma
#include <stdio.h>
#include <math.h>

int main() {
    int sayi, gecici, toplam = 0, basamak_sayisi = 0;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    gecici = sayi;

    // basamak sayısını bul
    while (gecici != 0) {
        basamak_sayisi++;
        gecici /= 10;
    }

    gecici = sayi;

    // rakamların kuvvetlerinin toplamını hesapla
    while (gecici != 0) {
        int rakam = gecici % 10;
        toplam += pow(rakam, basamak_sayisi);
        gecici /= 10;
    }

    // sonucu yazdır
    if (toplam == sayi) {
        printf("%d bir Armstrong sayisidir.", sayi);
    } else {
        printf("%d bir Armstrong sayisi degildir.", sayi);
    }

    return 0;
}

