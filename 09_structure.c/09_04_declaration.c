#include <stdio.h>
#include <string.h>
struct employee {
    int code;
    float salary ;
    char name[23]; }; // yes , with thr sem colon at the end :)
int main()
{
    struct employee E[2] ;// e[2] because of 3 employees
    E[0].code=181;
    E[0].salary=54000.24;
    strcpy(E[0].name,"kok");
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",E[0].name,E[0].code,E[0].salary);
          
    E[1].code=18;
    E[1].salary=554600.24;
    strcpy(E[1].name," khunia");
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",E[1].name,E[1].code,E[1].salary);

    E[2].code=189;
    E[2].salary=589878.24;
    strcpy(E[2].name,"Abinash ");
    printf(" Employee name is %s and have a code %d , salary is %.3f \n",E[2].name,E[2].code,E[2].salary);

    return 0 ;
}
