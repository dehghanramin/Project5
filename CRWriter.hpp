#ifndef _CRWRITER_HPP_
#define _CRWRITER_HPP_
#include "CWriter.hpp"

template <typename T>
class CRWriter : public CWriter<T>
{
public:
    CRWriter();
    CRWriter(T*, T*, std::string);
    void printWID() const;
    void printWLN() const;
private:
    std::string data_;
};

template <typename T>
CRWriter<T>::CRWriter() : CWriter<T>() {}

template <typename T>
CRWriter<T>::CRWriter(T* start, T* end, std::string data) : CWriter<T>(start, end), data_(data) {}

template <typename T>
void CRWriter<T>::printWID() const
{
    for (T* pIterator = this->start_; pIterator <= this->end_; ++pIterator)
    {
        if (!pIterator->isEmpty() && *pIterator==data_) { std::cout << *pIterator << std::endl; }
    }
}

template <typename T>
void CRWriter<T>::printWLN() const
{
    for (T* pIterator = this->start_; pIterator <= this->end_; ++pIterator)
    {
        if (!pIterator->isEmpty() && *pIterator==data_) { std::cout << *pIterator << std::endl; }
    }
}

#endif