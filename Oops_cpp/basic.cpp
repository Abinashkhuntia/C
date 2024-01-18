#include<iostream>
using std::string;
class Employee{
public:
    string name;
    string company;
    int age;
    void intoduce_yourself(){
        std::cout<<"name _"<<name<<std::endl;
        std::cout<<"age _"<<age<<std::endl;
        std::cout<<"company _"<<company<<std::endl;
    }
};
int main(){
    Employee e1;
    e1.name="abinsh";
    e1.age=21;
    e1.company="tst";
    e1.intoduce_yourself();

    Employee e2;
    e2.name="jony";
    e2.age=31;
    e2.company="amazon";
    e2.intoduce_yourself();

}