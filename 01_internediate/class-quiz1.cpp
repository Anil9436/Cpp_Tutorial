#include<iostream>

class Point3d{
private:
    int m_x{};
    int m_y{};
    int m_z{};
public:
    void setValues(int a,int b,int c)
    {
        m_x = a;
        m_y = b;
        m_z = c;
    }
    void print()
    {
        std::cout<<"<"<<m_x<<", "<<m_y<<", "<<m_z<<">"<<std::endl;
    }
    bool isEqual(const Point3d& p) const
	{
		return m_x == p.m_x && m_y == p.m_y && m_z == p.m_z;
	}
};


int main()
{
    Point3d point{};
    point.setValues(1, 2, 3);
    Point3d point2{};
    point.setValues(1, 2, 3);
    Point3d point2{};
    point.setValues(1, 2, 3);

    // point.print();
    std::cout << '\n';

    return 0;
}

// Three private member variables of type int named m_x, m_y, and m_z;
// A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
// A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>
// <1, 2, 3>