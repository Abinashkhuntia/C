// //using for loop sum of naturals numbers.
#include <stdio.h>
#include <math.h>
int main()
{
    int i,sum=0,n=10;
    for ( i = 0; i<=n; i++) // dry run !
    {
        sum+=i;
        printf("sum of all natural upto 10 is :%d,%d\n",sum,i);//do experiment with this line
    }
    printf("sum of all natural upto 10 is :%d\n",sum);
    return 0 ;
}

//using while loop sum of naturals numbers.
#include <stdio.h>
#include <math.h>
int main()
{
    int i=1,sum=0,n=10;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("sum of all natural upto 10 is :%d\n",sum);
    return 0 ;
}

//using do-while loop sum of naturals numbers.
#include <stdio.h>
#include <math.h>
int main()
{
    int i=0,sum=0,n=10;
    do{
    sum+=i;       //difference bettwen sum=i+i ,and sum+=i 
        i++;                       /// error output 93.
    }while(i<=n);
    printf(":%d \n",sum);
    return 0 ;

}    