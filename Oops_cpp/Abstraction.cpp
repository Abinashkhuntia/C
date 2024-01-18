#include<iostream>
using std::string;
class AbstractEmployee{
    virtual void Ask_for_Promotion()=0;
};
class Employee : AbstractEmployee{
public:
    string Name;
    string Company;
    int Age;

    void intoduce_yourself(){
        std::cout<<"Name _"<<Name<<std::endl;
        std::cout<<"Age _"<<Age<<std::endl;
        std::cout<<"Company _"<<Company<<std::endl;
    }

    Employee(string name,string company,int age){
        Name=name;
        Age=age;
        Company=company;
    }
    void Ask_for_Promotion(){
        if (Age>31)
            std::cout<<Name<<"Got promoted"<<std::endl;
        else 
            std::cout<<Name<<"not promoted"<<std::endl;
    }
};
int main(){
    Employee e1=Employee("abinsh","ass",13);
    Employee e2=Employee("suh","kos",63);
    e1.Ask_for_Promotion();
    e2.Ask_for_Promotion();

}