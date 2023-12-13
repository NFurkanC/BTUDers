#include <stdio.h>
//palindrom kelime bulucu 1000
int main(){
    char diziPalindrom[100];

    printf("kelime girin: ");
    scanf("%s",&diziPalindrom);
    int uzunluk = 0;
    int palindrom = 1;
    for(int i = 0; diziPalindrom[i] != '\0'; i++){
        uzunluk++;

    }
    for(int j = 0; j < uzunluk; j++){
        if(diziPalindrom[j] != diziPalindrom[uzunluk - 1 -j]){
            palindrom = 0;
            break;
        }
    }
    if(palindrom){
        printf("kelime palindrom");}
        else{
            printf("kelime palindrom degil");
        }
    
}