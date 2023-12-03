#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
//sure hesaplama
double isArmstrong_3(){
    clock_t start_t, end_t;
    int birler,onlar,yuzler;
    start_t = clock();
    for(int i = 100; i <= 999; i++){
        birler = i % 10;
        onlar = (i / 10) % 10;
        yuzler = (i / 100) % 10;
        if((pow(birler,3) + pow(onlar,3) + pow(yuzler,3)) == i){
            printf("%d ",i);
        }
    }
    end_t = clock();
    return (double)(end_t - start_t);
}

double isArmstrong_4(){
    clock_t start_t, end_t;
    int birler,onlar,yuzler, binler;
    start_t = clock();
    for(int i = 1000; i <= 9999; i++){
        birler = i % 10;
        onlar = (i / 10) % 10;
        yuzler = (i / 100) % 10;
        binler = (i / 1000) % 10;
        if((pow(birler,4) + pow(onlar,4) + pow(yuzler,4) + pow(binler,4)) == i){
            printf("\n%d ",i);
        }
    }
    end_t = clock();
    //printf("Clocks per second: %ld", CLOCKS_PER_SEC);
    return (double)(end_t - start_t);
}

double isArmstrong_5(){
    clock_t start_t, end_t;
    int birler,onlar,yuzler, binler,onbinler;
    start_t = clock();
    for(int i = 10000; i <= 99999; i++){
        birler = i % 10;
        onlar = (i / 10) % 10;
        yuzler = (i / 100) % 10;
        binler = (i / 1000) % 10;
        onbinler = (i / 10000) % 10;
        if((pow(birler,5) + pow(onlar,5) + pow(yuzler,5) + pow(binler,5) + pow(onbinler,5)) == i){
            printf("\n%d ",i);
        }
    }
    end_t = clock();
    //printf("Clocks per second: %ld", CLOCKS_PER_SEC);
    return (double)(end_t - start_t);
}

int main(){
    printf("\n3 basamakli Armstrong sayilarini hesaplarken gecen sure: %lf ms", isArmstrong_3());
    printf("\n4 basamakli Armstrong sayilarini hesaplarken gecen sure: %lf ms",isArmstrong_4());
    printf("\n5 basamakli Armstrong sayilarini hesaplarken gecen sure: %lf ms",isArmstrong_5());
}