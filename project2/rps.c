//RPS.GAME
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rps(char you,char comp){
    if (you==comp)
    {
        return 0;
    }
    if (you=='r' && comp=='s'){
        return 1;
    }
    else if (you=='s' && comp=='r'){
        return -1;
    }

    if (you=='r' && comp=='p'){
        return -1;
    }
    else if (you=='p' && comp=='r'){
        return 1;

    }

    if (you=='p' && comp=='s'){
        return -1;
    }
    else if (you=='s' && comp=='p'){
        return 1;
    }
}
int main()
{
    char you,comp;
    srand (time(0));
    int num=rand()%100 +1;
    if (num<33){
        comp='r';
    }
    else if (num>33 && num<66){
        comp='p';
    }
    else if(num>66){
        comp='s';
    }
    printf("your turn \n");
    scanf("%c",&you);
    int result=rps(you,comp);
    if (result==1)
    {
        printf("you win\n");
    }
    else if (result ==0)
    {
        printf("you draw\n");
    }
    else if (result==-1){
        printf("you lose\n");
    }
    printf("you chose %c and computer choces %c",you,comp);
    return 0 ;
}