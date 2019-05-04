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
private:
    std::string id;
    std::string firstname;
    std::string lastname;
    RefereeGrade grade;
};

#endif