#ifndef _CGMANAGER_HPP_
#define _CGMANAGER_HPP_
#include "CManager.hpp"
#include "CGame.hpp"

class CGManager : public CManager<CGame>
{
public:
    CGManager();
    CGManager(CGame*, CGame*);
    bool in(std::string const&) const;  
    void addGame();
    void removeGame(std::string const&);
};

#endif