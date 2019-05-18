#include "CGManager.hpp"
#include <iostream>

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

void CGManager::addGame()
{
    CGame* game = find("G000");
    if (!game) { throw "No space available!"; }
    std::cin >> *game;
}

void CGManager::removeGame(std::string const& target)
{
    CGame* game = find(target);
    if (!game) { throw "No such game!"; }
    game->reset();
}