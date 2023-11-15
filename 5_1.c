//Alt  ve üst limitler dahil aralarındaki sayıyı toplayan program
#include <stdio.h>

int main() {
    double alt, ust, sayi1, toplam;
    printf("Alt degeri giriniz: ");
    scanf("%lf", &alt);
    printf("Ust degeri giriniz: ");
    scanf("%lf", &ust);
    for(int i = alt; i <= ust; i++){
        toplam += i;

    }
    printf("Toplam = %lf", toplam);
    return 0;
}
