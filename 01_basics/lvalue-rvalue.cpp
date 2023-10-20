#include<iostream>

// int main()
// {
//     int x{5};
//     int ref{x};
//     std::cout<<x<<" "<< ref<<std::endl;
// }


// can't bind to the non-reference values
//  cant bind uninitialized values



// void print(char *name)
// {
//     printf("%s\n",name);
// }
// int main()
// {
//     char *name = "Anil";
//     print(name);
// }


// ++++++++++ pass by reference example ========
// void PrintStr(const std::string& name)
// {
//     std::cout<<name<<std::endl;
// }
// int main()
// {
//     const std::string s{"Anil"};
//     PrintStr(s);
//     return 0;
// }

/* we cant reference to the const lreference values like 
if the variable is const and binding as reference it to the function 
then it wont work */
// ++++++++++++++++++++++++++ pass by value ++++++++++

void add( int& x)
{
    ++x;
}

// int main()
// {
//     int n{7};
//     add(n);
//     std::cout<<n<<std::endl;
// }

/*
As a rule of thumb, pass fundamental types by value,
and class (or struct) types by const reference.
Other common types to pass by value: enumerated types and std::string_view.
Other common types to pass by (const) reference: std::string, std::array, and std::vector.
*/


// int main()
// {
//     std::cout<<std::boolalpha;
//     std::cout<<true<<std::endl;
// }

// void DoPrint(std::string_view& c)
// {
//     std::cout<<c<<std::endl;
// }
// int main()
// {
//     std::string_view name{"name"};
//     DoPrint(name);
// }

/* using double quotes in char it goes for the string
so prefer using single quotes for the characters */


// Pointers

// int main()
// {
//     char x{'a'};
//     char& ref{x};
    
//     std::cout<<ref<<std::endl;
//     // std::cout<<&ref<<std::endl;
//     // std::cout<<&x<<std::endl;
//     printf("%p\n",&ref);
//     printf("%p\n",&x);
// }
// #include <iostream>

// int main()
/* {
    double x{ 5.9 };
    std::cout << x << '\n';  // print the value of variable x
    std::cout << typeid(&x).name() << '\n'; // print the memory address of variable x
    std::cout << *(&x) << '\n'; // print the value at the memory address of variable x 
    //dereferencing the x (parentheses not required, but make it easier to read)

 
    return 0;
}*/

// always initialize the  pointer
// int *p{}// this denotes the nullptr
// int main()
// {
//     int x = 44;
//     int *pointer;
//     int *pointer2{&x};

//     std::cout<<x<<std::endl;
//     std::cout<<*pointer<<std::endl; // this prints strange 1;
//     std::cout<<pointer2<<std::endl;
//     //*pointer = 432;
//     std::cout<<x<<std::endl;
// }

// const pointers

// int main()
// {
//     // const int x{55};
//     // int y{43};
//     // const int* ptr{&x};

//     // int* ptr2{&y};
    
//     // std::cout << ptr<<std::endl;
//     // std::cout << &y<<std::endl;
//     // ptr = 4;
//     // std::cout << &y<<std::endl;




// }

/// pass by address and pass by reference

#include<iostream>
#include <cassert>

using namespace std;
void print(std::string_view *name)
{
    assert(name);
    cout<<*name<<endl;
    *name = "Kiran";
    cout<<*name<<endl;
}
int main()
{
    string_view n{"ANIL"};
    print(&n);
    cout<<n<<endl;
    print(nullptr);
}