#ifndef _CSGPRINTER_HPP_
#define _CSGPRINTER_HPP_
#include "Cprinter.hpp"

class CSGPrinter : public Cprinter
{
public:
    CSGPrinter();
    CSGPrinter(CReferee*, CReferee*);
    virtual void print() const;
private:
    RefereeGrade grade;
    void setGrade();
    RefereeGrade getGrade() const;
    RefereeGrade toGrade(unsigned short const&) const;
};

#endif