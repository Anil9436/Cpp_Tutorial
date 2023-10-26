#include <iostream>
// int main()
// {
//     Employee joe {};

//     joe.age = 32;  // use member selection operator (.) to select the age member of variable joe

//     std::cout << joe.age << '\n'; // print joe's age

//     return 0;
// }

// int main()
// {
    // // Employee Anil{};
    // Employee Rupes{};
    // Employee Riyan{};
    // // Anil.age  = 42;
    // Rupes.wage=33333;
    // Riyan.id=4;

    // // std::cout<<Anil.age<<std::endl;
    // std::cout<<Riyan.wage<<std::endl;
    // std::cout<<Rupes.wage<<std::endl;

    // Employee Anil{1,33,44};
    // std::cout<<Anil.wage<<std::endl;

    // Employee Raj{.id{33},.age{4},.wage{4000}};
    // std::cout<<Raj.age<<std::endl;
    // return EXIT_SUCCESS;
// }

/// default member initialization


// int main()
// {
//     Employee Anil{1,2};
//     std::cout<<Anil.wage<<std::endl;
//     return EXIT_SUCCESS;
// }

// typedef struct Employee
// {
//     int id {};
//     int age {};
//     double wage {7};
// }Employee_t;


// Employee FillDetails(int id, int age,double wage)
// {   
//     Employee_t name{id,age,wage};
//     return name;
// }

// int main()
// {
//     Employee_t result;
//     int id { 1 };
//     int age { 24 };
//     double wage { 52400.0 };
//     result = FillDetails(id,age,wage);
//     std::cout<<result.id<<std::endl;

// }
// struct Employee
// {
//     int id {};
//     int age {};
//     double wage {};
// };

// struct Company
// {
//     int numberOfEmployees {};
//     Employee CEO {}; // Employee is a struct within the Company struct
// };

// int main()
// {
//     Company myCompany{ 7, { 1, 32, 55000.0 } }; // Nested initialization list to initialize Employee
//     std::cout << myCompany.CEO.wage << '\n'; // print the CEO's wage

//     return 0;
// }

// #include <iostream>

// struct Employee
// {
//     int id{};
//     int age{};
//     double wage{};
// };

// struct Paw{
//     int count{};
// };

// struct Animal{
//     std::string name{};
//     Paw paw{};
// };

// void printEmployee(const Employee& e)
// {
//     // Use member selection operator (.) to select member from reference to struct
//     std::cout << "Id: " << e.id << '\n';
//     std::cout << "Age: " << e.age << '\n';
//     std::cout << "Wage: " << e.wage << '\n';
// }

int main()
{
    // Employee joe{1,2,222};
    // Employee *ptr{&joe};
    Animal puma{"puma",{4}};
    Animal *ptr{&puma};
    std::cout<<ptr->name<<" "<<ptr->paw.count<<std::endl;
    return 0;
}