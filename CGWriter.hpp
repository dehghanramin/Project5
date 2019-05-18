#ifndef _CGWRITER_HPP_
#define _CGWRITER_HPP_
#include "CWriter.hpp"

template <typename T>
class CGWriter : public CWriter<T>
{
public:
    CGWriter() : CWriter<T>() {}
    CGWriter(T*, T*) : CWriter<T>(start, end) {}
    void printAssigned() const
    {
        for (T* pIterator = start_; pIterator <= end_; ++pIterator)
        {
            if (!pIterator->isEmpty() && pIterator->isAssigned()) { std::cout << *pIterator << std::endl; }
        }
    }
    void printUnassigned() const
    {
        for (T* pIterator = start_; pIterator <= end_; ++pIterator)
        {
            if (!pIterator->isEmpty() && !pIterator->isAssigned()) { std::cout << *pIterator << std::endl; }
        }
    }
};

#endif