#include <stdio.h>
#include <math.h>

int main(){
    /*int sayi, birler, onlar, binler, onbinler;
    printf("Palindrom olup olmadigini gormek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    birler = sayi % 10;
    onlar = (sayi / 10) % 10;
    binler = (sayi / 1000) % 10;
    onbinler = (sayi / 10000) % 10;
    if(birler == onbinler && onlar == binler){
        printf("Sayi palindromdur.");
    }
    else{
        printf("Sayi palindrom degildir.");
    }*/
    int sayi,gecici,kalan;
    int tersi = 0;
    printf("Palindrom olup olmadigini gormek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    gecici = sayi;
    while(gecici != 0){
        kalan = gecici % 10;
        tersi =  tersi * 10 + kalan;
        gecici /= 10;
    }
    if(sayi == tersi){
        printf("Sayi palindromdur.");
    }
    else{
        printf("Sayi palindrom degildir.");
    }
}