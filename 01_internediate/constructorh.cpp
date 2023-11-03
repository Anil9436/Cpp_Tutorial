#include "constructor.hpp"


DateOne::DateOne(int year,int month,int day)
{
    setUp( year, month, day);
}

void DateOne::setUp(int year,int month,int day)
{
    m_year = year;
    m_month = month;
    m_day = day;
   
}

void DateOne::getDateOne() const
{
    std::cout<<m_year<<"/"<<m_month<<"/"<<m_day<<std::endl;
}

int main()
{
    DateOne d{2023,7,3};
    d.getDateOne();
}