#include <iostream>

using std::string; 

class AbstractEmployee {
    virtual void AskForPromotion() = 0; // pure virtual function - a function that has no implementation. It is a function that must be implemented by the derived classes.
}; 

class Employee:AbstractEmployee { // inheritance - Employee class is inheriting from the AbstractEmployee class
    private: // they are now encapsulated - the idea of encapsulation is to hide the data from the outside world and only expose the necessary data to the outside world. You will have to go through the getter and setter methods to access the private variables.
        
        string Company;
        int Age;
    protected:
        string Name;

    public:
        void setName(string name) { // getter and setter methods are used to access the private variables
            if (name.size() > 2) {
                Name = name;
            }
        }
        string getName() {
            return Name;
        }
        void setCompany(string company) {
            if (company.size() > 2) {
                Company = company;
            }
        }
        string getCompany() {
            return Company;
        }
        void setAge(int age) {
            if (age >= 18) {
                Age = age;
            }
        }
        int getAge() {
            return Age;
        }
        // abstraction - the idea of abstraction is to hide the complexity of the code from the outside world. You can hide the implementation details of the class from the outside world.

        void IntroduceYourself(){
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Company - " << Company << std::endl;
            std::cout << "Age - " << Age << std::endl;
        }

        void AskForPromotion() {
            if (Age > 30) {
                std::cout << Name << " got promoted!" << std::endl;
            } else {
                std::cout << Name << ", sorry no promotion for you!" << std::endl;
            }
        }
        virtual void Work() { // virtual function - a function that can be overridden in the derived classes. In this case, the Work method is a virtual function in the Employee class.
            std::cout << Name << " is checking email, task backlog, performing tasks..." << std::endl;
        }

        Employee(string name, string company, int age) { // Constructor
            Name = name;
            Company = company;
            Age = age;
        }
};

class Developer:public Employee { // inheritance - Developer class is inheriting from the Employee class
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, int age, string favProgrammingLanguage)
            :Employee(name, company, age)
        {
            FavProgrammingLanguage = favProgrammingLanguage;
        }
        void FixBug() {
            std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
        }
        void Work() { // polymorphism - the idea of polymorphism is to use a single interface to represent different data types. In this case, the Work method is being overridden in the Developer class.
            std::cout << Name << " is coding." << std::endl;
        }
};

class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
    }
    Teacher(string name, string company, int age, string subject) 
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work() { // polymorphism - the idea of polymorphism is to use a single interface to represent different data types. In this case, the Work method is being overridden in the Teacher class.
        std::cout << Name << " is teaching " << Subject << std::endl;
    }

};

int main() 
{

    Employee employee1 = Employee("Saldina", "YT-CodeBeauty", 25);
    /* employee1.Name = "Saldina";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25; */
    employee1.IntroduceYourself();

    Employee employee2("John", "Amazon", 35);
    /* employee2.Name = "John";
    employee2.Company = "Amazon";
    employee2.Age = 35; */
    employee2.IntroduceYourself();


    employee1.setAge(39);
    // if you try to set the age to 17, it will not work because of the if statement in the setAge method.
    employee2.setAge(25);

    employee1.setName("D"); // if you try to set the name to "D", it will not work because of the if statement in the setName method.

    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    Developer d = Developer("Andre", "Microsoft", 44, "C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();
    
    /*
    employee1.Work();
    d.Work();
    t.Work();
    */

    // The most common use of polymorphism is when a parent class reference is used to refer to a child class object.

    Employee* e1 = &d; // e is a pointer to an Employee object that is pointing to a Developer object
    Employee* e2 = &t; // e is a pointer to an Employee object that is pointing to a Teacher object

    e1->Work(); // the Work method in the Developer class is being called
    e2->Work();

    


    return 0;
}