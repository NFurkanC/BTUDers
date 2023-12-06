#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sleep(int timer){
    clock_t start_t, end_t;
    start_t = clock();
    while(1)
    { 
            end_t = clock();
            if(end_t - start_t == timer)
            break;
    }
    }

int main(){
    int wait;
    printf("Beklenecek sureyi milisaniye cinsinden yaziniz: ");
    scanf("%d", &wait);
    sleep(wait);
}