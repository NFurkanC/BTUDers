#include<stdio.h>
#include<math.h>
int main()
{
int sayi, taban, hedef_taban,basamak,sonuc;
printf("sayi  ve donusturmek istediginiz hedef tabani giriniz\n ");
scanf("%d %d %d",&sayi ,&taban, &hedef_taban);
//onluğa dönüştür
int a = 0,us = 0;
while(sayi != 0){
    basamak = sayi % 10;
    a = a + (basamak * pow(taban, us));
    ++us;
    sayi /= 10;
}
printf("%d\n",a);
//a = onluk sayi
while(a>0){
 sonuc=a%hedef_taban;
 a/=hedef_taban;
 printf(" %d \n",sonuc);   
}

return 0;
}
