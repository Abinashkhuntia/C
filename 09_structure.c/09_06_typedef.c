#include <stdio.h>
#include <string.h>
typedef struct employee{
    int code;
    float salary;
    char name;
}hola; // we declar it as hola 
void show(struct employee emp){
    printf(" Employee have a code %d , salary is %.3f \n",emp.code,emp.salary);
}
int main()
{
    // struct employee e1; =
    hola e1;  
    // struct employee *ptr; =
    hola *ptr;
    ptr= &e1;
    // (*ptr).code=632;
    ptr->code= 121;
    ptr->salary=31234;
    // strcpy((*ptr).name,"shgdg"); 
    show(e1);
    
    return 0 ;

}