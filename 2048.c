#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display(int playground[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (playground[i][j] != 0)
            {
                printf("[%d]", playground[i][j]);
            }
            else
            {
                printf("[ ]");
            }
        }
        printf("\n");
    }
}

int randomAssignment(int playground[4][4])
{
    int stateVar = 1;
    while (stateVar)
    {
        int i = rand() % 4, j = rand() % 4;
        if (playground[i][j] == 0)
        {
            //printf("rastgele sayi bu noktaya konuldu: %d %d\n", i, j);
            playground[i][j] = 2;
            stateVar = 0;
            return playground;
        }
    }
}

int continuityChecker(int playground[4][4])
{
    int zeroCounter = 0;
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4; f++)
        {
            if(playground[k][f] == 2048){
                printf("Tebrikler! Kazandiniz.");
            }
            else if (playground[k][f] == 0)
            {
                zeroCounter++;
            }
        }
    }
    if (zeroCounter == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int right(int playground[4][4])
{
    int tempOf1, tempOf2, tempOf3;
    for (int i = 0; i < 4; i++)
    {
        int temp0 = playground[i][0], temp1 = playground[i][1], temp2 = playground[i][2], temp3 = playground[i][3];
        if (playground[i][1] == 0)
        {
            playground[i][1] = temp0;
            playground[i][0] = 0;
            temp1 = playground[i][1];
            temp0 = playground[i][0];
        }
        if (playground[i][2] == 0)
        {
            playground[i][2] = temp1;
            playground[i][1] = temp0;
            playground[i][0] = 0;
            temp1 = playground[i][1];
            temp2 = playground[i][2];
        }
        if (playground[i][3] == 0)
        {
            playground[i][0] = 0;
            playground[i][1] = temp0;
            playground[i][2] = temp1;
            playground[i][3] = temp2;
        }
        if (playground[i][3] == playground[i][2])
        {
            tempOf3 = playground[i][3] + playground[i][2];
            playground[i][2] = 0;
            playground[i][3] = tempOf3;
        }
        if (playground[i][1] == playground[i][2])
        {
            tempOf2 = playground[i][1] + playground[i][2];
            playground[i][1] = 0;
            playground[i][2] = tempOf2;
        }
        if (playground[i][1] == playground[i][0])
        {
            tempOf1 = playground[i][0] + playground[i][1];
            playground[i][0] = 0;
            playground[i][1] = tempOf1;
        }
    }
    return playground;
}
int left(int playground[4][4])
{
    int tempOf1, tempOf2, tempOf3;
    for (int i = 0; i < 4; i++)
    {
        int temp0 = playground[i][3], temp1 = playground[i][2], temp2 = playground[i][1], temp3 = playground[i][0];
        if (playground[i][2] == 0)
        {
            playground[i][2] = temp0;
            playground[i][3] = 0;
            temp1 = playground[i][2];
            temp0 = playground[i][3];
        }
        if (playground[i][1] == 0)
        {
            playground[i][1] = temp1;
            playground[i][2] = temp0;
            playground[i][3] = 0;
            temp1 = playground[i][2];
            temp2 = playground[i][1];
        }
        if (playground[i][0] == 0)
        {
            playground[i][3] = 0;
            playground[i][2] = temp0;
            playground[i][1] = temp1;
            playground[i][0] = temp2;
        }
        if (playground[i][3] == playground[i][2])
        {
            tempOf3 = playground[i][3] + playground[i][2];
            playground[i][3] = 0;
            playground[i][2] = tempOf3;
        }
        if (playground[i][1] == playground[i][2])
        {
            tempOf2 = playground[i][1] + playground[i][2];
            playground[i][2] = 0;
            playground[i][1] = tempOf2;
        }
        if (playground[i][1] == playground[i][0])
        {
            tempOf1 = playground[i][0] + playground[i][1];
            playground[i][1] = 0;
            playground[i][0] = tempOf1;
        }
    }
    return playground;
}
int up(int playground[4][4])
{
    int tempOf1, tempOf2, tempOf3;
    for (int i = 0; i < 4; i++)
    {
        int temp0 = playground[3][i], temp1 = playground[2][i], temp2 = playground[1][i], temp3 = playground[0][i];
        if (playground[2][i] == 0)
        {
            playground[2][i] = temp0;
            playground[3][i] = 0;
            temp1 = playground[2][i];
            temp0 = playground[3][i];
        }
        if (playground[1][i] == 0)
        {
            playground[1][i] = temp1;
            playground[2][i] = temp0;
            playground[3][i] = 0;
            temp1 = playground[2][i];
            temp2 = playground[1][i];
        }
        if (playground[0][i] == 0)
        {
            playground[3][i] = 0;
            playground[2][i] = temp0;
            playground[1][i] = temp1;
            playground[0][i] = temp2;
        }
        if (playground[3][i] == playground[2][i])
        {
            tempOf3 = playground[3][i] + playground[2][i];
            playground[3][i] = 0;
            playground[2][i] = tempOf3;
        }
        if (playground[1][i] == playground[2][i])
        {
            tempOf2 = playground[1][i] + playground[2][i];
            playground[2][i] = 0;
            playground[1][i] = tempOf2;
        }
        if (playground[1][i] == playground[0][i])
        {
            tempOf1 = playground[0][i] + playground[1][i];
            playground[1][i] = 0;
            playground[0][i] = tempOf1;
        }
    }
    return playground;
}
int down(int playground[4][4])
{
    int tempOf1, tempOf2, tempOf3;
    for (int i = 0; i < 4; i++)
    {
        int temp0 = playground[0][i], temp1 = playground[1][i], temp2 = playground[2][i], temp3 = playground[3][i];
        if (playground[1][i] == 0)
        {
            playground[1][i] = temp0;
            playground[0][i] = 0;
            temp1 = playground[1][i];
            temp0 = playground[0][i];
        }
        if (playground[2][i] == 0)
        {
            playground[2][i] = temp1;
            playground[1][i] = temp0;
            playground[0][i] = 0;
            temp1 = playground[1][i];
            temp2 = playground[2][i];
        }
        if (playground[3][i] == 0)
        {
            playground[0][i] = 0;
            playground[1][i] = temp0;
            playground[2][i] = temp1;
            playground[3][i] = temp2;
        }
        if (playground[3][i] == playground[2][i])
        {
            tempOf3 = playground[3][i] + playground[2][i];
            playground[2][i] = 0;
            playground[3][i] = tempOf3;
        }
        if (playground[1][i] == playground[2][i])
        {
            tempOf2 = playground[1][i] + playground[2][i];
            playground[1][i] = 0;
            playground[2][i] = tempOf2;
        }
        if (playground[1][i] == playground[0][i])
        {
            tempOf1 = playground[0][i] + playground[1][i];
            playground[0][i] = 0;
            playground[1][i] = tempOf1;
        }
    }
    return playground;
}

int main()
{
    int playground[4][4] = {0};
    char option;
    display(randomAssignment(playground));
    do
    {
        srand(time(0));
        printf("Sonraki hamleyi seciniz: ");
        scanf(" %c", &option);
        if (option == 100)
        {
            system("cls");
            display(randomAssignment(right(playground)));
        }
        else if (option == 97)
        {   
            system("cls");
            display(randomAssignment(left(playground)));
        }
        else if (option == 119)
        {
            system("cls");
            display(randomAssignment(up(playground)));
        }
        else if (option == 115)
        {
            system("cls");
            display(randomAssignment(down(playground)));
        }
        else
        {
            system("cls");
            printf("Lutfen gecerli bir yon seciniz: ");
        }
    } while (continuityChecker(playground));
    printf("tahtada yer kalmadigi icin oyun bitti!");
}