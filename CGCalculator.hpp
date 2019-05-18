#ifndef _CGCALCULATOR_HPP_
#define _CGCALCULATOR_HPP_
#include "CCalculator.hpp"
#include "CGame.hpp"

class CGCalculator : public CCalculator<CGame>
{
public:
    CGCalculator();
    CGCalculator(CGame*);
    unsigned int calculateTotal() const;
    virtual unsigned int calculateRef() const;
};


#endif