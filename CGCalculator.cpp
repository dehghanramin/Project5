#include "CGCalculator.hpp"

CGCalculator::CGCalculator() : CCalculator<CGame>() {}

CGCalculator::CGCalculator(CGame* game) : CCalculator<CGame>(game) {}

unsigned int CGCalculator::calculateTotal() const
{
    return calculate();
}

unsigned int CGCalculator::calculateRef() const
{
    return calculate();
}