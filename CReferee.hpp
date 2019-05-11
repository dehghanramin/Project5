#ifndef _CREFEREE_HPP_
#define _CREFEREE_HPP_
#include <string>

enum RefereeGrade
{
    #define DEFINE_GRADE(grade, int) grade,
    #include "referee_enum.hpp"
    #undef DEFINE_GRADE
};

class CReferee
{
public:
    CReferee();
    CReferee(std::string const&, std::string const&, std::string const&, RefereeGrade const&, std::string const&);
    ~CReferee();
    friend std::ostream& operator<<(std::ostream&, CReferee const&);
    friend std::istream& operator>>(std::istream&, CReferee&);
private:
    std::string id;
    std::string firstname;
    std::string lastname;
    RefereeGrade grade;
    std::string game_id;
    std::string gradeToString() const;
    RefereeGrade stringToGrade(std::string const&) const;
    void setGrade(std::string const&);
    void setGrade(RefereeGrade const&);
};

#endif