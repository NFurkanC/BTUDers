#include <stdio.h>
#include <math.h>
int isPerfect(int toplam, int sayi){
    if(toplam == sayi){
        return 1;
    }
    /*else{
        printf("Mukemmel degil.");
    }*/
}

int divFind(int sayi){
    int bolen = 0,kalan = 0,toplam = 0;
    for(int i = 2; i < sayi; i++){
        kalan = sayi % i;
        if(kalan == 0){
            bolen = sayi / i;
            toplam +=bolen;
        }
        sayi /= i;
    }
    return isPerfect(toplam, sayi);
}



int main(){
    int sayi;
    printf("Ust siniri giriniz: ");
    scanf("%d",&sayi);
    for(int j = 2;j < sayi; j++){
    if(divFind(j)){
        printf("%d\n",divFind(j));
    };}
}