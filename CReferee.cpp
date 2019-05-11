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

RefereeGrade CReferee::stringToGrade(std::string const& input) const
{
    if (input == "UNKNOWN")
    {
        return UNKNOWN;
    }
    else if (input == "CLUB")
    {
        return CLUB;
    }
    else if (input == "STATE")
    {
        return STATE;
    }
    else if (input == "NATIONAL")
    {
        return NATIONAL;
    }
    else if (input == "FIFA")
    {
        return FIFA;
    }
    else
    {
        std::cerr << "Incorrect input! Returning \"UNKNOWN\"" << std::endl;
        return UNKNOWN;
    }
}

void CReferee::setGrade(std::string const& input)
{
    grade = stringToGrade(input);
}

void CReferee::setGrade(RefereeGrade const& input)
{
    grade = input;
}

std::ostream& operator<<(std::ostream& ost, CReferee const& obj)
{
    ost << std::endl << obj.id << std::setw(12) << obj.firstname
        << std::setw(12) << obj.lastname << std::setw(12) << obj.gradeToString() << std::endl;
    return ost;
}

std::istream& operator>>(std::istream& ins, CReferee& obj)
{
    std::string temp_grade;
    ins >> obj.id >> obj.firstname
        >> obj.lastname >> temp_grade;
    obj.setGrade(temp_grade);
    return ins;
}