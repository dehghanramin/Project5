#ifndef _CMANAGER_HPP_
#define _CMANAGER_HPP_
#include <cstddef>

template <typename T>
class CManager
{
public:
    CManager();
    CManager(T*, T*);
protected:
    T* start_;
    T* end_;
};

template <typename T>
CManager<T>::CManager() : start_(NULL), end_(NULL) {}

template <typename T>
CManager<T>::CManager(T* start, T* end) : start_(start), end_(end) {}

#endif