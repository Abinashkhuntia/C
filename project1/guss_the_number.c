#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    int number,guess,numofguesses=1;
    srand(time(0)); // the sequence of numbers will change 
    number=rand()%100 +1;
    printf("the number is :%d\n",number);
    do
    {
        printf("guess the num between (1-100):\n");
        scanf("%d",&guess);
        if(guess>number)
            printf("lower!\n");
        else if (guess<number)
            printf("higher!\n");
        else if (guess==number)
            printf("u guessed it right in %d attempts",numofguesses);    
        numofguesses++;
    } while(guess!=number);//this execute till you guessed the correct number .
    return 0 ;
}