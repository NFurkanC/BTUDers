#include <stdio.h>
#include <math.h>

//kullanıcı ax^2+bx+c=0 şeklinde bir denklem yazacak
//kökler reelse bul bastır, kökler eşitse bastır, karmaşıksa karmaşık olarak basıcak
// -b -/+ kok delta / 2a

int main(){
    double a,b,c,delta,kok1,kok2;
    printf("Ilk katsayi= ");
    scanf("%lf",&a);
    printf("Ikinci katsayi= ");
    scanf("%lf",&b);
    printf("Ucuncu katsayi= ");
    scanf("%lf",&c);
    delta = pow(b,2) - 4*a*c;
    //printf("%lf",delta);
    if(delta > 0){
        kok1 = (-b-sqrt(delta))/(2*a);
        kok2 = (-b+sqrt(delta))/(2*a);
        printf("2 gercek koku vardir ve kokler = %lf %lf",kok1,kok2);
    }
    else if(delta == 0){
        kok1 = (-b+sqrt(delta))/(2*a);
        printf("kokler esit ve kok = %lf", kok1);
    }
    else{
        double kok1real, kok1imag, kok2real, kok2imag;
        //kok1 = (-b-sqrt(delta))/(2*a);
        kok1real = (-b)/(2*a);
        kok1imag = -sqrt(-delta)/(2*a);
        //kok2 = (-b+sqrt(delta))/(2*a);
        kok2real = (-b)/(2*a);
        kok2imag = sqrt(-delta)/(2*a);
        printf("karmasik ve kokler = %lf + %.3lfi, %lf + %.3lfi", kok1real ,kok1imag, kok2real, kok2imag);
    }
}