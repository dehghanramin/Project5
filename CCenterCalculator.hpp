#ifndef _CCENTERCALCULATOR_HPP_
#define _CCENTERCALCULATOR_HPP_
#include "CGCalculator.hpp"

class CCenterCalculator : public CGCalculator
{
public:
    CCenterCalculator();
    CCenterCalculator(CGame*);
    virtual unsigned int calculateRef() const;
};

#endif