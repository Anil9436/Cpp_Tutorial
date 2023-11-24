#include<iostream>
#include<vector>

class Stack{
    private:
    std::vector<int> arr{};
    public:
        Stack(std::vector<int> intput):arr{intput}{};
        ~Stack() = default;
        void push(int);
        void pop();
        bool isempty();
        void view();
};


//Stack LIFO Last in First out

void Stack::push(int num)
{
    arr.push_back(num);   
}
void Stack::pop()
{   
    arr.pop_back();
}
bool Stack::isempty()
{
    if(std::size(arr)>0)
        return true;
    return false;
}
void Stack::view()
{
    for(const auto& i: arr)
    {
        std::cout<<i<<std::endl;
    }
}

int main()
{
    // std::vector arr{1,2,3,4,5,6};
    Stack one{{1,2,3,4,5,6}}; //brace ellision.
    std::cout<<one.isempty()<<std::endl;
    one.view();


}