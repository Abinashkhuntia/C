//Write a program to store the details of 3 employees from user-defined data.
//Use the structure declared above .
#include <stdio.h>
#include <string.h>
struct employee {
    int code;
    float salary ;
    char name[23]; 
    };
int main(){
    struct employee e1,e2,e3 ;
    printf("Ether the salary of the employee e1 ");
    scanf("%f",&e1.salary);
    printf("Ether the name of the employee e1 ");
    scanf("%s",e1.name);
    printf("Ether the code of the employee e1 ");
    scanf("%f",&e1.code);
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",e1.name,e1.code,e1.salary);
    
    printf("Ether the salary of the employee e2 ");
    scanf("%f",&e2.salary);
    printf("Ether the name of the employee e2 ");
    scanf("%s",e2.name);
    printf("Ether the code of the employee e2 ");
    scanf("%f",&e2.code);
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",e2.name,e2.code,e2.salary);

    printf("Ether the salary of the employee e3 ");
    scanf("%f",&e3.salary);
    printf("Ether the name of the employee e3 ");
    scanf("%s",e3.name);
    printf("Ether the code of the employee e3 ");
    scanf("%f",&e3.code);
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",e3.name,e3.code,e3.salary);
    return 0;
}