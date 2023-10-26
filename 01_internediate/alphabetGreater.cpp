#include<iostream>
#include<string_view>
// Takes two std::string objects, returns the one that comes first alphabetically
// const std::string& firstAlphabetical(const std::string& a, const std::string& b)
// {
// 	return (a < b) ? a : b; // We can use operator< on std::string to determine which comes first alphabetically
// }
// const std::string *firstAlphabetical(const std::string *a,const std::string *b)
// {
//     return (*a < *b) ? (*a) : (*b);//we cannot use terinary for the pointers
// }



class Employee{
    std::string m_name{};
    public:
        void setName(std::string_view name ){m_name = name;}
         /* when we are returning the reference of the 
         value better to use the auto keyword so that
         we need not to bother about the return type of the lvalue */
        const auto& getName()const {return m_name;}
        /* The auto keyword will automatically deduce the return type 
         to the m_name   */
};

int main()
{
	// std::string hello { "Rajesh" };
	// std::string world { "Anil" };

	// std::cout << firstAlphabetical(hello, world); // either hello or world will be returned by reference
    Employee joe{};
    joe.setName("Joe");
    std::cout<<joe.getName()<<std::endl;
    
	return 0;
}


