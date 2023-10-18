

#include<iostream>

double input()
{
    std::cout<<"Enter the first double value: ";
    double integral1{};
    std::cin>>integral1;
    return integral1;
}
// double input3()
// {
//     std::cout<<"Enter the second double value: ";
//     double integral2{};
//     std::cin>>integral2;
//     return integral2;
// }

std::string getInput()
{
    std::cout<<"Enter one of the following: +, -, *, or /: ";
    std::string operation{};
    std::cin>>operation;
    return operation;
}

int result()
{
    double input1=input();
    double input2=input();
    std::string arithmeticOperation = getInput();
    if("+" == arithmeticOperation)
        return (input1 + input2);
    else if("*" == arithmeticOperation)
        return (input1 * input2);
    else if ("-" == arithmeticOperation)
        return (input1 - input2);
    else if("/" == arithmeticOperation)
        return (input1 / input2);
    else 
        std::cout<<"Please enter the valid one";
        return -1;

    // switch (str2int(arithmeticOperation))
    // {
    // case str2int("+"):
    //     return (input1 + input2);
    //     break;
    // case str2int("-"):
    //     return (input1 - input2);
    //     break;
    // case str2int("*"):
    //     return (input1 * input2);
    //     break;
    // case str2int("/"):
    //     return (input1 / input2);
    //     break;
    // default:
    //    std::cout<<"Please enter the valid one";
    //    return -1; 
    //    break;
    // }
    return 0;
}

int main()
{
    // double integral1 = input();
    // double integral2 = input2();
    // std::string operationName = getInput();
    // //int result = input() getInput() input2();
    // // std::cout<<integral1<<" "<<integral2<<std::endl;
    // std::cout<<integral1 <<" "<<operationName<<" "<<integral2<<std::endl;
    // return 0;

    int res = result();
    std::cout<<res<<std::endl;
}