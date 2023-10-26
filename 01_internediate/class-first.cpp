#include <iostream>

struct Date       // we changed struct to class
{    
public:      // and added this line, which is called an access specifier
    int test()
    {
        std::cout<<m_day<<std::endl;
        return 0;
    }
    void printDate()
    {
        std::cout << m_day << '/' << m_month << '/' << m_year<<std::endl;
        std::cout << m_timeinmins << '/' << m_timeinsec <<'/'<<m_time<<std::endl;
    }
private: 
    int m_day{3322}; // and added "m_" prefixes to each of the member names
    int m_month{22};
    int m_year{222};
    int m_time{1231};
    int m_timeinsec{123413};
    int m_timeinmins{141213};
protected:



 
};   



int main()
{
    Date date;
    date.test();
    // date.printDate();
    return 0;
}

// when an function is called as an member function then it is named as member of a function
// they should be declared inside the class to name it as member function


//===========================Best practice============================
//If your class type has no data members, prefer using a namespace.

// Access level	Access specifier	Member access	Derived class access	Public access
// Public	        public:	                yes	            yes             	yes
// Protected	    protected:	            yes	            yes             	no
// Private	        private:	            yes         	no	                no