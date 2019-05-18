#include "CGManager.hpp"

CGManager::CGManager() : CManager<CGame>(NULL, NULL) {}

CGManager::CGManager(CGame* start, CGame* end) : CManager<CGame>(start, end) {}

bool CGManager::in(std::string const& i) const
{
    for (CGame* pIterator = start_; pIterator <= end_; ++pIterator)
    {
        if (*pIterator == i) { return true; }
    }
    return false;
}