#include <iostream>
#include <string>
#include <string_view>



// using the redundant method where we try reducing the variables
class Employee
{
private:
    std::string m_name{};
    int m_id{ default_id };
    static constexpr int default_id { 0 }; 
    void printCreated() const
    {
        std::cout << "Employee " << m_name << " created\n";
    }

public:
    Employee(std::string_view name)
        : Employee{name,0}
    {
        // printCreated();
    }

    Employee(std::string_view name, int id)
        : m_name{ name }, m_id{ id }
    {
        printCreated();
    }
};

int main()
{
    Employee e1{ "James" };
    Employee e2{ "Dave", 42 };
}
/* 
If you have multiple constructors, 
consider whether you can use delegating 
constructors to reduce duplicate code. */


// using Default values 
#include <iostream>
#include <string>
#include <string_view>

class Employee
{
private:
    static constexpr int default_id { 0 }; 
    std::string m_name{};
    int m_id{ 0 }; // default member initializer

public:

    Employee(std::string_view name, int id = default_id) // default argument for id
        : m_name{ name }, m_id{ id }
    {
        std::cout << "Employee " << m_name << " created\n";
    }
};

int main()
{
    Employee e1{ "James" };
    Employee e2{ "Dave", 42 };
}