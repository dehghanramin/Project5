#include "CRManager.hpp"
#include <time.h>
#include <iostream>
#define RAND_MAX 14

CRManager::CRManager() : CManager<CReferee>(NULL, NULL) {}

CRManager::CRManager(CReferee* start, CReferee* end) : CManager<CReferee>(start, end) {}

void CRManager::addReferee()
{
    for (CReferee* pIterator = start_; pIterator <= end_; ++pIterator)
    {
        if (pIterator->isEmpty()) { std::cin >> *pIterator; break; }
    }
    throw "Array full!";
}

void CRManager::assignGame(std::string const& game_id)
{
    srand((unsigned)time(NULL));
    (start_ + rand())->assign(game_id);
}