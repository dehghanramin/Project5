#include "CCenterCalculator.hpp"

CCenterCalculator::CCenterCalculator() : CGCalculator() {}

CCenterCalculator::CCenterCalculator(CGame* game) : CGCalculator(game) {}

unsigned int CCenterCalculator::calculateRef() const
{
    return static_cast<unsigned int>(calculateTotal() * 0.40);
}