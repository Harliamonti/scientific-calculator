#include <iostream>
#include <string>
#include <queue>
#include <typeinfo>
#include <cmath>
#include <map>
#include <type_traits>

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

namespace calc 
{
    template <typename T1, typename T2>
    auto add(T1 lhs, T2 rhs)
    {
        return lhs + rhs;
    }

    template <typename T1, typename T2>
    auto multiply(T1 lhs, T2 rhs)
    {
        return lhs * rhs;
    }

    // template <typename T, typename U, typename RT = std::common_type<T, U>>
    // RT doOperation(T lhs, U rhs, RT (*func)(T arg1, U arg2))
    // {
    //     return func(lhs, rhs);
    // }
    
    //wont work, rather use an object

}
int main()
{
    int a{ 14 }, b{ 16 };

    std::cout << calc::add(1, 7.5);
}