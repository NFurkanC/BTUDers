#include<stdio.h>
#include<math.h>
int main()
{
int sayi, taban, hedef_taban,basamak,sonuc;
printf("Sayiyi, tabani ve hedef tabani giriniz:\n ");
scanf("%d %d %d",&sayi ,&taban, &hedef_taban);
//onluğa dönüştür
int onluk = 0,us = 0;
while(sayi != 0){
    basamak = sayi % 10;
    onluk += (basamak * pow(taban, us));
    ++us;
    sayi /= 10;
}
printf("%d\n",a);
//a = onluk sayi
while(onluk>0){
 sonuc=onluk%hedef_taban;
 onluk/=hedef_taban;
 printf(" %d \n",sonuc);   
}

return 0;
}
