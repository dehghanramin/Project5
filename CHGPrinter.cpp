#include "CHGPrinter.hpp"

CHGPrinter::CHGPrinter() : Cprinter(), grade(UNKNOWN) {}

CHGPrinter::CHGPrinter(CReferee* start, CReferee* end) : Cprinter(start, end)
{
    setGrade();
}

void CHGPrinter::print() const
{
    bool empty= true;
    for (CReferee* pIterator = start_pointer; pIterator <= end_pointer; ++pIterator)
    {
        if ((*pIterator > grade) && !pIterator->isEmpty())
        {
            std::cout << *pIterator << std::endl;
            empty = false;
        }
    }
    if (empty)
    {
        printEmpty();
    }
}

void CHGPrinter::setGrade()
{
    grade = getGrade();
}

RefereeGrade CHGPrinter::getGrade() const
{
    std::cout << "Select Grade:\n1. CLUB\n2. STATE\n3. NATIONAL\n4. FIFA\n";
    unsigned short input;
    std::cin >> input;
    std::cout << std::endl;
    return toGrade(input);
}

RefereeGrade CHGPrinter::toGrade(unsigned short const& input) const
{
    switch (input)
    {
        #define DEFINE_GRADE(grade, int) case int: return grade;
        #include "referee_enum.hpp"
        #undef DEFINE_GRADE
        default: return UNKNOWN;
    }
}