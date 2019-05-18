#ifndef _CRMANAGER_HPP_
#define _CRMANAGER_HPP_
#include "CManager.hpp"
#include "CReferee.hpp"
#include <string>

class CRManager : public CManager<CReferee>
{
public:
    CRManager();
    CRManager(CReferee*, CReferee*);
    void addReferee();
    void assignGame(std::string const&);
};

#endif