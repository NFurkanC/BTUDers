#include <stdio.h>
#include <stdlib.h>//srand & rand
#include <time.h> //time(0) şu ana kadarki epoch zamanını döndürür

int main(){
    unsigned int seed;
    scanf("%d",&seed);
    srand(seed);
    //printf("%ld",time(0));
    for(int i = 0; i < 20; i++){
       printf("%d\n",1+rand()%100);
    }
}