#include<iostream>

struct dummy{
    int x{};
    int y{};
};
class dummy_c{
    
    // public:
        int m_x{};
        int m_y{};
    public:
    dummy_c(int x,int y):m_x{x},m_y{y}{
        std::cout << "Foo(" << x << ", " << y << ") constructed\n";
    }
    void print()
    {
        std::cout<<m_x<<" "<<m_y<<std::endl;
    }
};
class nick{
    int x;
    int y;
    public:
        nick(int x,int y)
        :x{x},y{y}{
            std::cout << "nick(" << x << ", " << y << ") constructed\n";
        }
        void print()
        {
            std::cout<<x<<" "<<y<<std::endl;
        }
        

};

class boo{
    int x_u;
    int y_v;
    public:
        boo(int x,int y)
        :y_v{x} 
        ,x_u{y} 
        {
            std::cout << "boo(" << x << ", " << y << ") constructed\n";
        }
};

class Loop{
    private:
        int x{};
        int y{5};
        int z;
    public:
        Loop(int a)
        : x{a}{
            std::cout << "Loop(" << a << ") constructed\n";
            
        }
        void print()
        {
            std::cout<<x<<" "<<y<<" "<<z<<std::endl;
        }
};

class Foo
{
private:
    int m_x{};
    int m_y{};

public:
    Foo(int x, int y)
    {
        m_x = x; // incorrect: this is an assignment, not an initialization
        m_y = y; // incorrect: this is an assignment, not an initialization
    }

    void print() const
    {
        std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};

int main()
{
    Foo foo{ 6, 7 };
    foo.print();
    dummy_c str{1,2};
    nick nikone{1,2};
    boo booone{1,2};
    Loop loop1{1};
    str.print();
    nikone.print();
    loop1.print();
    return 0;

    return 0;
}

/* Prefer using the member initializer list to initialize your members 
  over assigning values in the body of the constructor. */