#include "CReferee.hpp"
#include <iomanip>
#include <iostream>

CReferee::CReferee() :
id("R000"),
firstname("None"),
lastname("None") {}

CReferee::CReferee(std::string const& id_, std::string const& first_, std::string const& last_, RefereeGrade const& grade_) :
id(id_),
firstname(first_),
lastname(last_),
grade(grade_) {}

CReferee::~CReferee() {}

std::string CReferee::gradeToString() const
{
    switch (grade)
    {
    case UNKNOWN:
        return "UNKNOWN";
        break;
    case CLUB:
        return "CLUB";
        break;
    case STATE:
        return "STATE";
        break;
    case NATIONAL:
        return "NATIONAL";
        break;
    case FIFA:
        return "FIFA";
        break;
    default:
        std::cerr << "Unknown grade! Returning \"UNKNOWN\"" << std::endl;
        return "UNKNOWN";
        break;
    }
}

RefereeGrade CReferee::stringToGrade(std::string const& i) const
{
    
}

std::ostream& operator<<(std::ostream& ost, CReferee const& obj)
{
    ost << std::setw(12) << obj.id << obj.firstname
        << obj.lastname << obj.gradeToString() << std::endl;
    return ost;
}

std::istream& operator>>(std::istream& ins, CReferee& obj)
{
    ins >> obj.id >> obj.firstname
        >> obj.lastname >> 
}