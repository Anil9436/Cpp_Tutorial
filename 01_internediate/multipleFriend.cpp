#include<iostream>

class humidity;

class temperature{
    private:
        double temp{0};
    public:
        explicit temperature(double value):temp{value}{} // constructor
        friend void printWeather( const temperature& one, const humidity& two);
};

class humidity{
    private:
        double humi{0};
    public:
        explicit humidity(double value):humi{value}{} // constructor
        friend void printWeather( const temperature& one, const humidity& two);
};


void printWeather(const temperature& one, const humidity& two)
{  
    std::cout<<one.temp <<" "<<two.humi<<std::endl;

}

int main()
{
    temperature temp{43.3};
    humidity humi{33.5};
    printWeather(temp,humi);
}
//Instead of passsing the function as a friend better to write it as the non-friend func