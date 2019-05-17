#ifndef _CREADER_HPP_
#define _CREADER_HPP_
#include "CReferee.hpp"

class CReader
{
public:
    CReader();
    CReader(CReferee*, CReferee*);
    void read();
private:
    CReferee* start_;
    CReferee* end_;
    void readFile(std::ifstream&);
};

#endif