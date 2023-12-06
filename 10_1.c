#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ATIM_SAYISI 100000000

// zar atma programı
double zaryuzde(double zar){
    return 100*(zar/ATIM_SAYISI);
}
int main()
{   
    srand(time(0));
    int zar1 = 0, zar2 = 0, zar3 = 0, zar4 = 0, zar5 = 0, zar6 = 0;
    for (int i = 0; i < ATIM_SAYISI; i++)
    {
        int zar = rand() % 6 + 1;
        switch (zar)
        {
        case 1:
            zar1++;
            break;
        case 2:
            zar2++;
            break;
        case 3:
            zar3++;
            break;
        case 4:
            zar4++;
            break;
        case 5:
            zar5++;
            break;
        case 6:
            zar6++;
            break;
        }
    }
    printf("1 gelen durum sayisi ve yuzdesi: %d %lf\n",zar1, zaryuzde(zar1));
    printf("2 gelen durum sayisi ve yuzdesi: %d %lf\n",zar2, zaryuzde(zar2));
    printf("3 gelen durum sayisi ve yuzdesi: %d %lf\n",zar3, zaryuzde(zar3));
    printf("4 gelen durum sayisi ve yuzdesi: %d %lf\n",zar4, zaryuzde(zar4));
    printf("5 gelen durum sayisi ve yuzdesi: %d %lf\n",zar5, zaryuzde(zar5));
    printf("6 gelen durum sayisi ve yuzdesi: %d %lf\n",zar6, zaryuzde(zar6));

}

