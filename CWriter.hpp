#include <cstddef>
#include <iostream>

template <typename T>
class CWriter
{
public:
    CWriter();
    CWriter(T*, T*);
    virtual void print() const;
    T* getStart() const;
    T* getEnd() const;
protected:
    T* start_;
    T* end_;
};

template <typename T>
CWriter<T>::CWriter() : start_(NULL), end_(NULL) {}

template <typename T>
CWriter<T>::CWriter(T* start, T* end) : start_(start), end_(end) {}

template <typename T>
void CWriter<T>::print() const
{
    for (T* pIterator = start_; pIterator <= end_; ++pIterator)
    {
        if (!pIterator->isEmpty()) { std::cout << *pIterator << std::endl; }
    }
}

template <typename T>
T* CWriter<T>::getStart() const
{
    return start_;
}

template <typename T>
T* CWriter<T>::getEnd() const
{
    return end_;
}