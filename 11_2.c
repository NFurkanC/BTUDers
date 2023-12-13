#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define ARR_SIZE 50
int main(){
    int arr[ARR_SIZE];
    srand(time(0));
    for(int i = 0; i < ARR_SIZE; i++){
        arr[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < 50; i++)
    {
        printf("%3d",arr[i]);
    }
    
    printf("en buyuk sayi: %d\n",buyuktenKucuge(arr));
    printf("en kucuk sayi: %d\n",kucuktenBuyuge(arr));
}

int kucuktenBuyuge(int b[]){
    for(int j = 0; j < ARR_SIZE; j++){
        for(int k = 0; k < ARR_SIZE; k++ ){
            if(b[j]<b[k]){
                int temp = b[j];
                b[j] = b[k];
                b[k] = temp;
            }
        }
    }
    for(int h = 0; h < ARR_SIZE; h++)
    printf("%4d",b[h]);
    return b[0];
}
int buyuktenKucuge(int b[]){
    for(int j = 0; j < ARR_SIZE; j++){
        for(int k = 0; k < ARR_SIZE; k++ ){
            if(b[j]>b[k]){
                int temp = b[j];
                b[j] = b[k];
                b[k] = temp;
            }
        }
    }
    for(int h = 0; h < ARR_SIZE; h++)
    printf("%4d",b[h]);
    return b[0];
}