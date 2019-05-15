#include "CReferee.hpp"
#include <iomanip>
#include <fstream>
#include <iostream>

CReferee::CReferee() :
id("R000"),
firstname("None"),
lastname("None"),
game_id("None") {}

CReferee::CReferee(std::string const& id_, std::string const& first_, std::string const& last_, RefereeGrade const& grade_, std::string const& game_id_) :
id(id_),
firstname(first_),
lastname(last_),
grade(grade_),
game_id(game_id_) {}

CReferee::~CReferee() {}

std::string CReferee::gradeToString() const
{
    switch (grade)
    {
        #define DEFINE_GRADE(grade, int) case grade: return #grade;
        #include "referee_enum.hpp"
        #undef DEFINE_GRADE
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
        << std::setw(12) << obj.lastname << std::setw(12) << obj.gradeToString()
        << std::setw(12) << obj.game_id << std::endl;
    return ost;
}

std::istream& operator>>(std::istream& ins, CReferee& obj)
{
    std::string temp_grade;
    ins >> obj.id >> obj.firstname
        >> obj.lastname >> temp_grade
        >> obj.game_id;
    obj.setGrade(temp_grade);
    return ins;
}

bool operator>(CReferee const& a, RefereeGrade const& b)
{
    return a.grade > b;
}

bool operator<(CReferee const& a, RefereeGrade const& b)
{
    return a.grade < b;
}

bool CReferee::isEmpty() const
{
    return id == "0000";
}

bool operator==(CReferee const& a, std::string const& id)
{
    return a.id == id;
}

bool operator==(CReferee const& a, RefereeGrade const& b)
{
    return a.grade == b;
}

std::ofstream& operator<<(std::ofstream& ost, CReferee const& obj)
{
    ost << obj.id << std::setw(12) << obj.firstname
        << std::setw(12) << obj.lastname << std::setw(12) << obj.gradeToString()
        << std::setw(12) << obj.game_id << std::endl;
    return ost;
}

std::ifstream& operator>>(std::ifstream& ins, CReferee& obj)
{
    ins >> obj.id;
    ins >> obj.firstname;
    ins >> obj.lastname;
    std::string grade;
    ins >> grade;
    obj.grade = obj.stringToGrade(grade);
    return ins;
}

bool CReferee::isSameName(std::string const& input) const
{
    return lastname == input;
}