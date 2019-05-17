#include "CReader.hpp"
#include <cstddef>
#include <fstream>
#include <iostream>

CReader::CReader() : start_(NULL), end_(NULL) {}

CReader::CReader(CReferee* start, CReferee* end) : start_(start), end_(end) {}

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
    CReferee* pItr = start_;
    while((pItr <= end_) && (ins >> *pItr))
    {
        ++pItr;
    }
}