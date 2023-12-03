#include <stdio.h>

int main(){
    int sayi;
    for(int i = 0; i < 20; i++)
    printf("%d\n",eemsayisi(i));
}

int eemsayisi(int entry){
    if(entry ==  0 ||entry ==  1||entry ==  2||entry ==  3){
        return entry;
    }
    else{
        return eemsayisi(entry - 1) + eemsayisi(entry - 2) + eemsayisi(entry - 3) + eemsayisi(entry - 4);
    }
}