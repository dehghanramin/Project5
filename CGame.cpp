#include "CGame.hpp"
#include <iomanip>
#include <iostream>

CGame::CGame() :
id("G000"),
duration(ZERO),
payrate(0.0) {}

CGame::CGame(std::string const& id_, GameDuration const& duration_, float const& payrate_) :
id(id_),
duration(duration_),
payrate(payrate_) {}

std::string CGame::durationToString() const
{
    switch (duration)
    {
        case ZERO:
            return "ZERO";
            break;
        case FIFTY:
            return "FIFTY";
            break;
        case SIXTY:
            return "SIXTY";
            break;
        case SEVENTY:
            return "SEVENTY";
            break;
        case EIGHTY:
            return "EIGHTY";
            break;
        case NINETY:
            return "NINETY";
            break;
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
        << std::setw(12) << obj.durationToString() << std::setw(12) << obj.payrate << std::endl;
    return ost;
}

std::istream& operator>>(std::istream& ins, CGame& obj)
{
    std::string temp_duration, temp_payrate;
    ins >> obj.id >> temp_duration >> temp_payrate;
    obj.setDuration(temp_duration);
    obj.setPayrate(temp_payrate);
    return ins;
}