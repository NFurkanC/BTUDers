#include <stdio.h>

int fibonacci(int sayi);

int main(){
    for(int i = 0;i < 15;i++){
        printf("%d. sayi= %d\n",i,fibonacci(i));
    }
    return 2;
}

int fibonacci(int sayi){
    if(sayi == 0){
        return 0;
    }
    else if(sayi == 1 || sayi == 2){
        return 1;
    }
    else{
        return fibonacci(sayi-1) + fibonacci(sayi-2);
    }
}