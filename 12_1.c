#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int transpose(int matrix[5][6],int result[6][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

void display5by6(int result[5][6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
                printf("[%d]", result[i][j]);
        }
        printf("\n");
    }
}
void display6by5(int result[6][5])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
                printf("[%d]", result[i][j]);
        }
        printf("\n");
    }
}

int randomAssignment(int input[5][6]){
    srand(time(0));
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            input[i][j] = rand()%9 + 1;
        }
    }
    return input;}


int main(){
    int ceviz[5][6] = {0};
    int result[6][5] = {0};
    int randceviz = randomAssignment(ceviz);
    display5by6(randceviz);
    printf("-------------------");
    display6by5(transpose(randceviz,result));
}