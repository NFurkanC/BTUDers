//İçi boş kare
#include <stdio.h>

int main() {
    int kenar, i, j;

    printf("Karenin kenar uzunlugunu girin (3'ten buyuk bir sayi olmalidir): ");
    scanf("%d", &kenar);

    // Kenar uzunluğu 3'ten küçükse hata mesajı ver
    if (kenar < 3) {
        printf("Hata: Kenar uzunlugu 3'ten kucuk olamaz.\n");
        return 0;
    }

    // Kareyi çizdir
    for (i = 1; i <= kenar; i++) {
        for (j = 1; j <= kenar; j++) {
            if (i == 1 || i == kenar || j == 1 || j == kenar) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
