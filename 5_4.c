#include <stdio.h>

int main(){
    int sayi1;
    //int i;
    printf("Faktoriyali alinacak sayi: ");
    scanf("%d",&sayi1);
    //i = sayi1 - 1;
    /*while(i != 1){
        //printf("%d", i);
        sayi1 = sayi1 * i;
        i--;
    }*/
    for(int i = sayi1 - 1;i != 1; i--){
        sayi1 = sayi1 * i;
    }
    printf("%d", sayi1);
}
