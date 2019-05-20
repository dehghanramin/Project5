#ifndef _CREADER_HPP_
#define _CREADER_HPP_
#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

template <typename T>
class CReader
{
public:
    CReader() : start_(NULL), end_(NULL) {}
    CReader(T* start, T* end) : start_(start), end_(end) {}
    void read(std::string const& addr)
    {
        std::ifstream inStream;
        inStream.open(addr.c_str());
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
            ++pIterator;
        }
    }
};

#endif