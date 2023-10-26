// #include <iostream>

// class Foo
// {
// private:
//     int m_x {};
//     int m_y {};

// public:
//     Foo() = default; // generate an implicit default constructor

//     Foo(int x, int y)
//         : m_x { x }, m_y { y }
//     {
//         std::cout << "Foo(" << x << ", " << y << ") constructed\n";
//     }
// };

// int main()
// {
//     Foo foo{5,6}; // calls Foo() default constructor

//     return 0;
// }
#include <iostream>

class User
{
private:
    int m_a; // note: no default initialization value
    int m_b {};

public:
    User() {} // user-provided empty constructor

    int a() const { return m_a; }
    int b() const { return m_b; }
};

class Default
{
private:
    int m_a; // note: no default initialization value
    int m_b {};

public:
    Default() = default; // explicitly defaulted default constructor

    int a() const { return m_a; }
    int b() const { return m_b; }
};

class Implicit
{
private:
    int m_a; // note: no default initialization value
    int m_b {};

public:
    // implicit default constructor

    int a() const { return m_a; }
    int b() const { return m_b; }
};

int main()
{
    User user{}; // default initialized
    std::cout << user.a() << ' ' << user.b() << '\n';

    Default def{}; // zero initialized, then default initialized
    std::cout << def.a() << ' ' << def.b() << '\n';

    Implicit imp{}; // zero initialized, then default initialized
    std::cout << imp.a() << ' ' << imp.b() << '\n';

    return 0;
}