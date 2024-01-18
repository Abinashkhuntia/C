#include <stdio.h>
#include <string.h>
struct employee {
    int code;
    float salary ;
    char name[23]; // declaring all the quatility ,that the a employee had 
}; // yes , with thr sem colon at the end :)
int main()
{
    struct employee e1 ; // defining the quality that e1 had  
    e1.code=181; // e1 code ?
    e1.salary=54000.24;
    strcpy(e1.name,"Abinash khunia");
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",e1.name,e1.code,e1.salary);
    return 0 ;
}