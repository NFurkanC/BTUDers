#include <stdio.h>
#include <stdlib.h>

int randifEqual(int tahmin, int sayi){
        if(tahmin == sayi){
            return 1;
        }
        else if(tahmin < sayi){
            return 2;
        }
        else{
            return 0;
        }
}

int main(){
    int sayi;
    scanf("%d", &sayi);
    if(randifEqual == 1){
        printf("dogru");
    }
}