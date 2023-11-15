#include <stdio.h>
int main()
{
    double sayi1, sayi2;
    char karar;
    printf("Ilk sayiyi giriniz: \n");
    scanf("%Lf", &sayi1);
    printf("Ikinci sayiyi giriniz: \n");
    scanf("%Lf", &sayi2);
    printf("Toplamami mi istiyorsunuz?\n");
    scanf_s(" %c", &karar);
    printf("karar: %c\n", karar);
    switch (karar)
    {
    case 'e':
    case 'E':
        printf("Sonuc: %.2Lf", sayi1 + sayi2);
        break;
    
    case 'h':
    case 'H':
        printf("Birsey yapmayacagim.");
        break;
    
    default:
        printf("Hata!\n");
        break;
    
    }
    return 0;
}