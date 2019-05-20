#include "CGame.hpp"
#include <iomanip>
#include <iostream>

CGame::CGame() :
id("G000"),
duration(ZERO),
payrate(0.0),
center("None"),
ar1("None"),
ar2("None") {}

CGame::CGame(std::string const& id_, GameDuration const& duration_, float const& payrate_, std::string const& center_, std::string const& ar1_, std::string const& ar2_) :
id(id_),
duration(duration_),
payrate(payrate_),
center(center_),
ar1(ar1_),
ar2(ar2_) {}

std::string CGame::durationToString() const
{
    switch (duration)
    {
        #define DEFINE_DURATION(duration, int) case duration: return #duration;
        #include "game_enum.hpp"
        #undef DEFINE_DURATION
        default:
            std::cerr << "Wrong input! Returning \"ZERO\"" << std::endl;
            return "ZERO";
            break;
    }
}

GameDuration CGame::stringToDuration(std::string const& input)
{
    if (input == "ZERO")
    {
        return ZERO;
    }
    else if (input == "FIFTY")
    {
        return FIFTY;
    }
    else if (input == "SIXTY")
    {
        return SIXTY;
    }
    else if (input == "SEVENTY")
    {
        return SEVENTY;
    }
    else if (input == "EIGHTY")
    {
        return EIGHTY;
    }
    else if (input == "NINETY")
    {
        return NINETY;
    }
    else
    {
        std::cerr << "Wrong input! Returning \"ZERO\"" << std::endl;
        return ZERO;
    }
}

float CGame::stringToFloat(std::string const& input)
{
    return std::stof(input);
}

void CGame::setDuration(std::string const& input)
{
    duration = stringToDuration(input);
}

void CGame::setPayrate(std::string const& input)
{
    payrate = stringToFloat(input);
}

std::ostream& operator<<(std::ostream& ost, CGame const& obj)
{
    ost << std::endl << obj.id
        << std::setw(12) << obj.durationToString() << std::setw(12) << obj.payrate
        << std::setw(12) << obj.center << std::setw(12) << obj.ar1
        << std::setw(12) << obj.ar2 << std::endl;
    return ost;
}

std::istream& operator>>(std::istream& ins, CGame& obj)
{
    std::string temp_duration, temp_payrate;
    ins >> obj.id >> temp_duration >> temp_payrate >> obj.center >> obj.ar1 >> obj.ar2;
    obj.setDuration(temp_duration);
    obj.setPayrate(temp_payrate);

    return ins;
}

bool operator==(CGame const& obj, std::string const& i)
{
    return obj.id == i;
}

bool CGame::isEmpty() const
{
    return id == "G000";
}

bool CGame::isAssigned() const
{
    return !(center == "None" && ar1 == "None" && ar2 == "None");
}

void CGame::reset()
{
    id = "G000";
    duration = ZERO;
    payrate = 0.0;
    center = "None";
    ar1 = "None";
    ar2 = "None";
}

unsigned int CGame::getValue() const
{
    int duration = durationToInt();
    return static_cast<unsigned int>(payrate*duration);
}

int CGame::durationToInt() const
{
    switch (duration)
    {
    #define DEFINE_DURATION(duration, int) case duration: return int;
    #include "game_enum.hpp"
    #undef DEFINE_DURATION
    default: return -1;
    }
}