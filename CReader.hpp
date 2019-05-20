#ifndef _CREADER_HPP_
#define _CREADER_HPP_
#include <cstddef>
#include <fstream>
#include <iostream>

template <typename T>
class CReader
{
public:
    CReader() : start_(NULL), end_(NULL) {}
    CReader(T* start, T* end) : start_(start), end_(end) {}
    void read(char* addr)
    {
        std::ifstream inStream;
        inStream.open(addr);
        if (inStream.fail()) {throw "File fail!";}
        readFile(inStream);
        inStream.close();
    }
private:
    T* start_;
    T* end_;
    void readFile(std::ifstream& ins)
    {
        // if (!start_) {throw "No destination!";}
        T* pIterator = start_;
        while((pIterator <= end_) && (!ins.eof()))
        {
            ins >> *pIterator++;
        }
    }
};

#endif