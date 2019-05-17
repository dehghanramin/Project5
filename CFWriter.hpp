#include "CWriter.hpp"
#include <fstream>

template <typename T>
class CFWriter : CWriter<T>
{
public:
    CFWriter();
    CFWriter(T*, T*);
    virtual void print() const;
};

template <typename T>
CFWriter<T>::CFWriter() : CWriter<T>() {}

template <typename T>
CFWriter<T>::CFWriter(T* start, T* end) : CWriter<T>(start, end) {}

template <typename T>
void CFWriter<T>::print() const
{
    std::ofstream outStream;
    outStream.open("Referees_output.dat");
    if (outStream.fail()) { throw "Fail in open!"; }
    for (T* pIterator = CWriter<T>::getStart(); pIterator <= CWriter<T>::getEnd(); ++pIterator)
    {
        if (!pIterator->isEmpty()) { outStream << *pIterator << std::endl; }
    }
    outStream.close();
}