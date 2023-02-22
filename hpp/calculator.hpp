#pragma once

class Calculator
{
private:
public:
    template<typename T1, typename T2, typename RT = std::common_type_t<T1, T2>>
    RT add(T1 lhs, T2 rhs) {return lhs + rhs;}

    template<typename T1, typename T2, typename RT = std::common_type_t<T1, T2>>
    RT multiply(T1 lhs, T2 rhs) {return lhs * rhs;}

    template<typename T1, typename T2, typename RT = std::common_type_t<T1, T2>>
    RT doOperation(T1 lhs, T2 rhs, RT (*func)(T1 a, T2 b))
    {
        return func(lhs, rhs);
    }

};