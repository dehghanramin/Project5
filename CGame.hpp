#ifndef _CGAME_HPP_
#define _CGAME_HPP_
#include <string>

enum GameDuration {ZERO, FIFTY = 50, SIXTY = 60, SEVENTY = 70, EIGHTY = 80, NINETY = 90};

class CGame
{
public:
    CGame();
    CGame(std::string const&, GameDuration const&, float const&);
    friend std::ostream& operator<<(std::ostream&, CGame const&);
    friend std::istream& operator>>(std::istream&, CGame&);
private:
    std::string id;
    GameDuration duration;
    float payrate;
    GameDuration stringToDuration(std::string const&);
    float stringToFloat(std::string const&);
    std::string durationToString() const;
    void setDuration(std::string const&);
    void setPayrate(std::string const&);
};

#endif