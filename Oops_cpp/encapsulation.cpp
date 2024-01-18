#include<iostream>
using std::string;
class Employee{
private:
    string Name;
    string Company;
    int Age;
public:                            //setter and gettter
    void setName(string name){
        Name=name; }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;}
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(Age>=18)
        Age=age;} 
    int getAge() {
        return Age;
    }

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
};
int main(){
    Employee e1=Employee("abinsh","ass",13);
    e1.setAge(6); //
    std::cout<<e1.getName()<<"is"<<e1.getAge()<<"years old"<<std::endl;
    e1.intoduce_yourself();
    

}