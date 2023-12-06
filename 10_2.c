#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 20

int main()
{
    int arr[ARR_SIZE] = {0};
    int puan[10] = {0};
    double toplam = 0;
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d. yildizi giriniz.", i + 1);
        scanf("%d",&arr[i]);
        /*switch (arr[i])
        {
        case 1:
            puan[0]++;
            break;
        case 2:
            puan[1]++;
            break;
        case 3:
            puan[2]++;
            break;
        case 4:
            puan[3]++;
            break;
        case 5:
            puan[4]++;
            break;
        case 6:
            puan[5]++;
            break;
        case 7:
            puan[6]++;
            break;
        case 8:
            puan[7]++;
            break;
        case 9:
            puan[8]++;
            break;
        case 10:
            puan[9]++;
            break;
        }*/
    }
    for(int k = 0; k < ARR_SIZE; k++){
        puan[arr[k]-1]++;
        toplam += arr[k];
    }
    for(int j = 0; j < 10; j++){
        printf("%d puan veren kisi sayisi: %d\n", j+1, puan[j]);
    }
    printf("Ortalama = %lf",toplam/ARR_SIZE);
}