#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    // declare the local variables  
    int i, j, k, m = 1;    
    for ( i = 5; i >= 1; i--)  
    {  
          
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  "); // print the space  
        }  
      
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        m++;  
        printf ("\n");  
    }  
    getch();  
}  