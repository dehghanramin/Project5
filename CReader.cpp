#include "CReader.hpp"
#include <cstddef>
#include <fstream>
#include <iostream>

CReader::CReader() : start_(NULL) {}

CReader::CReader(CReferee* start) : start_(start) {}

void CReader::read()
{
    std::ifstream inStream;
    inStream.open("Referees_input.dat");
    if (inStream.fail()) {throw "File fail!";}
    readFile(inStream);
    inStream.close();
}

void CReader::readFile(std::ifstream& ins)
{
    const CReferee* END = &start_[((sizeof(start_)/sizeof(*start_)) - 1)];
    CReferee* pItr = start_;
    while((ins >> *pItr) && (pItr <= END))
    {
        ++pItr;
    }
}