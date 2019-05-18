#ifndef _CGWRITER_HPP_
#define _CGWRITER_HPP_
#include "CWriter.hpp"

template <typename T>
class CGWriter : public CWriter<T>
{
public:
    CGWriter();
    CGWriter(T*, T*);
    void printAssigned() const;
    void printUnassigned() const;
};

template <typename T>
CGWriter<T>::CGWriter() : CWriter<T>() {}

template <typename T>
CGWriter<T>::CGWriter(T* start, T* end) : CWriter<T>(start, end) {}

template <typename T>
void CGWriter<T>::printAssigned() const
{
    for (T* pIterator = start_; pIterator <= end_; ++pIterator)
    {
        if (!pIterator->isEmpty() && pIterator->isAssigned()) { std::cout << *pIterator << std::endl; }
    }
}

template <typename T>
void CGWriter<T>::printUnassigned() const
{
    for (T* pIterator = start_; pIterator <= end_; ++pIterator)
    {
        if (!pIterator->isEmpty() && !pIterator->isAssigned()) { std::cout << *pIterator << std::endl; }
    }
}

#endif