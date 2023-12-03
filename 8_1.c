
#include <stdio.h>
#include <math.h>

int isArmstrong(int); //zorunlu olmayabilir, fonksiyonun varlığını tanımlar.

int main(){
    int input;
    printf("Bir sayi girin: ");
    scanf("%d", &input);
    if(isArmstrong(input) == 1){
        printf("%d bir Armstrong sayisidir.", input);
    }
    else{
        printf("%d bir Armstrong sayisi degildir.", input);
    }
}

int isArmstrong(int sayi){
    int gecici, toplam = 0, basamak_sayisi = 0;
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
        return 1;
    } else {
        return 0;
    }
}