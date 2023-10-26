#include <iostream>
#include <string>
#include<string_view>

/* Struct based implementation */

// struct Employee // members are public by default
// { 
//      // should match first initial of name
//     public:
//     std::string name{ "John" };
//     char firstInitial{ 'J' };
//     void print()
//     {
//         std::cout << "Employee " << name << " has first initial " << firstInitial << '\n';
//     }
// };

/* Class based Implementation */

class Employee{
    private:
        std::string m_name{};
        char firstInitial{};
    public:
        void setName(std::string name)
        {
            m_name = name;
            firstInitial = name.front();
        }
        void print()
        {
            std::cout<<m_name<< " " <<firstInitial<<std::endl;
        }
};

int main()
{
    Employee e{}; 
    // defaults to "John" and 'J'
    e.setName("Kirin");
    e.print();

    e.setName("Mark"); // change employee's name to "Mark"
    e.print(); // prints wrong initial

    return 0;
}

/* In CPP structs, a user can modify the struct mem values because
    they all are in public, and user can change it
 */
/* But in case of the classes all the class members are private, 
    we cant change the value of the class mem unless we  are class mem
*/