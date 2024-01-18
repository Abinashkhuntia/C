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

    Employee(string name,string company,int age){
        name=name;
        age=age;
        company=company;
    }
};
int main(){
    Employee e1=Employee("abinsh","as",53);
    e1.intoduce_yourself();
    // Employee e1;
    // e1.name="abinsh";
    // e1.age=21;
    // e1.company="tst";

}