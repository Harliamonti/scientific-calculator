#include <iostream>
#include <string>
#include <queue>
#include <typeinfo>
#include <cmath>

template <typename T, typename T2>
auto add(T lhs, T2 rhs)
{
    return lhs + rhs;
}

template <typename T>
auto foo(T number)
{
    if (std::trunc(number) == number)
        return static_cast<int> (number);
}

int main()
{
    std::string input{"1+2*4"};
    std::queue <int> operands {}; 
    std::queue <char> operators {};

    int num{};

    for (auto it{input.begin()}; it != input.end(); it++)
    {
        std::cout << "Test" << ++num << std::endl;
    }

    for (std::string ::iterator it{input.begin()}; it != input.end(); it++ )
    {
        std::cout << ++num << std::endl;
    }

    for (auto it : input)
        std::cout << "test" << num++ << std::endl;

    int a{}, b{10}, x{11};

    b < x 
        ? std::cout << "True"
        : std::cout << "False";
}