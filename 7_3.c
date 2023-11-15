#include <stdio.h>
#include <math.h>  

int main(){
    int sayi, birler, onlar;
    //do {printf("Bir sayi girin: ");
    //scanf("%d", &sayi);}while(sayi > 100);
    for(int sayi = 0; sayi <= 100;sayi++){
    printf("%d \t",sayi);
    birler = sayi % 10;
    onlar = (sayi / 10) % 10;
    if(sayi == 100){
        printf("C");
    }
    switch(onlar){
        case 0:
            break;
        case 1:
        case 2:
        case 3:
            for(int k = 0; k < onlar; k++){
                printf("X");
            }
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
        case 7:
        case 8:
            printf("L");
            for(int z = 5; z < onlar; z++){
                printf("X");
            }
            break;
        case 9:
            printf("XC");
            break;
    }
    switch(birler){
        case 0:
            break;
        case 1:
        case 2:
        case 3:
            for(int i = 0; i < birler; i++){
                printf("I");
            }
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
        case 7:
        case 8:
            printf("V");
            for(int j = 5; j < birler; j++){
                printf("I");
            }
            break;
        case 9:
            printf("IX");
            break;
    }
    printf("\n");
    }
}