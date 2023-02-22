#include <iostream>
#include <string>
#include <queue>
#include <typeinfo>
#include <cmath>
#include <map>
#include <type_traits>

#include "hpp/calculator.hpp"

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

    // template <typename T, typename U, typename RT = std::common_type_t<T, U>> This works as well but make sure to include the "_t"!
    template <typename T, typename U, typename RT = typename std::common_type<T, U>::type>
    RT doOperation(T lhs, U rhs, RT (*func)(T arg1, U arg2))
    {
        return func(lhs, rhs);
    }
    
    template <int value, typename T>
    void addValue(T &x)
    {
        x += value;
    }

    template <typename T>
    void doOnVec(std::vector<T> &vec, void (*func)(T &arg))
    {
        for (auto &it : vec)
        {
            func(it);
        }
    }


    // The thing is that we need to define T, T1 and RT constantly.
    // Within an object this wouldn't be a problem as they would be "global"

}
int main()
{
    int a{ 14 }, b{ 16 };
    float c{ 16.26 };
    std::vector<int> vec{ 1, 2, 3, 4, 5 };

    std::cout <<calc::doOperation(a, c, calc::add) << std::endl;
    std::cout << calc::add(1, 7.5) << std::endl;
    Calculator calc;
    std::cout << calc.add(5, 4.5) << std::endl;

    calc::doOnVec(vec, calc::addValue<10>);

    for (const auto &it : vec)
    {
        std::cout <<it << std::endl;
    }




}