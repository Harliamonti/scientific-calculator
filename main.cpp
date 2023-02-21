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

namespace calc 
{
    
}
int main()
{
    
}