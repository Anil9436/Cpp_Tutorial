#include <iostream>
#include<string_view>

class Date
{
private:
    int m_year { 2020 };
    int m_month { 10 };
    int m_day { 14 };
    std::string_view m_monthname{"January"};

public:
    void print()
    {
        std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
    }

    int getYear() const { return m_year; }  
    std::string_view getMonthName() const {return m_monthname;}      // getter for yea
    void setYear(int year) { m_year = year; }     // setter for year

    int getMonth() const  { return m_month; }    // getter for month
    void setMonth(int month) { m_month = month; } // setter for month

    int getDay() const { return m_day; }          // getter for day
    void setDay(int day) { m_day = day; }         // setter for day
};

// getter need to be const
// setters need not to be const 

int main()
{
    Date d{};
    d.setYear(2021);
    std::cout << "The year is: " << d.getYear() << '\n';
    std::cout << "The Month name: " << d.getMonthName() << '\n';

    return 0;
}