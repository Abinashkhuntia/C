// Complete this show function to display the content of the employee.
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[];
};
void show(struct employee emp){
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",emp.name,emp.code,emp.salary);
}
int main()
{
    struct employee e1;
    struct employee *ptr; 
    ptr= &e1;
    // (*ptr).code=632;
    ptr->code= 121;
    ptr->salary=31234;
    strcpy(ptr->name,"s"); 
    show(e1);
    return 0 ;
}