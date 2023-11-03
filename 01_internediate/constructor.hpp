#ifndef CONSTRUCTOR_HPP
#define CONSTRUCTOR_HPP

#include<iostream>
#include<string_view>

class DateOne{
    private:
    int m_year{};
    int m_month{};
    int m_day{};
    public:
        DateOne(int year,int month,int day);
        void setUp(int year,int month,int day);
        void getDateOne()const;
        int getYear()const{return this->m_year;}
        int getMonth()const{return this->m_month;}
        int getDay()const{return this->m_day;}
};

#endif
