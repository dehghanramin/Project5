#ifndef _CMANAGER_HPP_
#define _CMANAGER_HPP_
#include <cstddef>
#include <string>

template <typename T>
class CManager
{
public:
    CManager() : start_(NULL), end_(NULL) {}
    CManager(T* start, T* end) : start_(start), end_(end) {}
    virtual T* find(std::string const& value) const
    {
        for (T* pIterator = start_; pIterator <= end_; ++pIterator)
        {
            if (*pIterator == value) { return pIterator; }
        }
        return NULL;
    }
protected:
    T* start_;
    T* end_;
};

#endif