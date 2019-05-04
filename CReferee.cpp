#include "CReferee.hpp"

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