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
    void work(){
        std::cout<<Name<<"checking email"<<std::endl;
    }
};
class Developer : public Employee{
public:
    string The_fav_laguage; 
    Developer(string name,string company,int age,string laguage):Employee(Name,Company,Age){
        The_fav_laguage = laguage;
    }
    void fixbug(){
        std::cout<<"the fav laguage to fix bug is "<<The_fav_laguage<<std::endl;
    }
    void work(){
        std::cout<<Name<<"develop code"<<std::endl;
    }
};
class Teacher : public Employee{
public:
    string subject; 
    Teacher(string name,string company,int age,string Subject):Employee(Name,Company,Age){
        subject = Subject;
    }
    void lesson(){
        std::cout<<"lesson  is "<<subject<<std::endl;
    }
    void work(){
        std::cout<<Name<<"is teaching "<<std::endl;
    }
};
int main(){ 
    Developer d=Developer("aladin","gini",65,"cpp");
    Teacher t=Teacher("nini","lani",65,"cpp");
    Employee *e1= &d;
    Employee *e2=&t;
    e1->work();
    e2->work();

}
