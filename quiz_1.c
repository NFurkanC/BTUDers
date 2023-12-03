#include <stdio.h>
#include <math.h>

int main()
{
    int sayi, taban, hedef_taban, basamak_sayisi, gecici;
    int ara_sayi = 0;
    int hedef_sayi = 0;
    int tersi = 0;
    printf("Sayiyi, tabani ve hedef tabani girin: ");
    scanf("%d", &sayi);
    scanf("%d", &taban);
    scanf("%d", &hedef_taban);
    if (taban == hedef_taban)
    {
        printf("Sonuc: %d", sayi);
    }
    gecici = sayi;
    while (gecici != 0)
    {
        tersi = tersi * 10 + (gecici % 10);
        gecici /= 10;
    }
    basamak_sayisi = log10(sayi);
    for (int i = basamak_sayisi; i <= 0; i--)
    {
        ara_sayi = ara_sayi + ((tersi % 10) * pow(taban, i));
        tersi /= 10;
    }
    printf("%d", ara_sayi);
}