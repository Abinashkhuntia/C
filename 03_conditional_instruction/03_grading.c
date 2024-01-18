#include <stdio.h>
#include <math.h>
int main()
{
    int math ,phy,chem;
    float total;
    printf("enter math mark \n");
    scanf("%d",&math);
    printf("enter phy mark \n");
    scanf("%d",&phy);
    printf("enter chem mark \n");
    scanf("%d",&chem);
    total= (phy+math+chem)/3;
    
    if((total>=40)&&((phy>=33)&&(math>=33)&&(chem>=33))){
      printf("you r pass nigga ! \n");  
    }

    else{
       printf("you are fail"); 
    }
     return 0 ;
}