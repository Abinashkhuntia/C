#include <stdio.h>
#include <string.h>
struct employee {
    int code;
    float salary ;
    char name[23]
    };
int main()
{
    struct employee e1 = {133,325647.23,"khuntia"};//another type of initialization
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",e1.name,e1.code,e1.salary);
    return 0 ;
}
