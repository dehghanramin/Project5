#ifndef _CREFEREE_HPP_
#define _CREFEREE_HPP_
#include <string>

enum RefereeGrade {UNKNOWN, CLUB, STATE, NATIONAL, FIFA};

class CReferee
{
public:
    CReferee();
    CReferee(std::string const&, std::string const&, std::string const&, RefereeGrade const&);
    ~CReferee();
    friend std::ostream& operator<<(std::ostream&, CReferee const&);
    friend std::istream& operator>>(std::istream&, CReferee&);
private:
    std::string id;
    std::string firstname;
    std::string lastname;
    RefereeGrade grade;
    std::string gradeToString() const;
    RefereeGrade stringToGrade(std::string const&) const;
};

#endif