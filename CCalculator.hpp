#ifndef _CCALCULATOR_HPP_
#define _CCALCULATOR_HPP_
#include <cstddef>

template <typename T>
class CCalculator
{
public:
    CCalculator() : data_(NULL) {}
    CCalculator(T* data) : data_(data) {}
    virtual unsigned int calculate() const
    {
        return data_->getValue();
    }
protected:
    T* data_;
};

#endif