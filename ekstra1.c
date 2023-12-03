#include <stdio.h>

int main() {
    int decimal, base;
    printf("Sayiyi giriniz: ");
    scanf("%d", &decimal);
    printf("Hedef tabani giriniz: ");
    scanf("%d", &base);

    // Ondalık sayıyı hedef tabana dönüştürme
    printf("Hedef tabandaki sayi: ");
    int temp = decimal;
    if (temp == 0) {
        printf("0");
    }
    while (temp != 0) {
        int remainder = temp % base;
        if (remainder < 10) {
            printf("%d", remainder);
        } else {
            printf("%c", remainder + 55);
        }
        temp = temp / base;
    }
    printf("\n");

    return 0;
}