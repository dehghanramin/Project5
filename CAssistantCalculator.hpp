#ifndef _CASSISTANTCALCULATOR_HPP_
#define _CASSISTANTCALCULATOR_HPP_
#include "CGCalculator.hpp"

class CAssistantCalculator : public CGCalculator
{
public:
    CAssistantCalculator();
    CAssistantCalculator(CGame*);
    virtual unsigned int calculateRef() const;
};

#endif