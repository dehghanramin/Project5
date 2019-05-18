#include "CAssistantCalculator.hpp"

CAssistantCalculator::CAssistantCalculator() : CGCalculator() {}

CAssistantCalculator::CAssistantCalculator(CGame* game) : CGCalculator(game) {}

unsigned int CAssistantCalculator::calculateRef() const
{
    return static_cast<unsigned int>(calculateTotal() * 0.30);
}