#include <stdio.h>

int main(){
    int kenar;
    int i = 0;
    int j = 0;
    printf("Karenin kenar sayisini giriniz: ");
    scanf("%d", &kenar);
    while(i < kenar){
        j = 0;
        while(j < kenar){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}