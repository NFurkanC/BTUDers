#include <stdio.h>
#include <math.h>

void isPrimeTo(int ustSinir)
{
    int kalan = 0,asal;
    for (int j = 2; j < ustSinir; j++)
    {
        for (int i = 2; i < j; i++)
        {
            kalan = j % i;
            if (kalan == 0)
            {
                asal = 0;
                break;
            }
            else{
                asal = 1;
            }
        }
        if(asal){
            printf("%d\n",j);
        }
    }
}

int main()
{
    int ustSinir;
    //printf("Sayiyi giriniz: ");
    //scanf("%d", &sayi);
    printf("Ust siniri giriniz: ");
    scanf("%d", &ustSinir);
    isPrimeTo(ustSinir);
}