#include "functions.hpp"
#include <iostream>
#include <stdlib.h>

int menu()
{
    int option;
    std::cout << "             REFEREE ASSIGNING SYSTEM \n\n"
        << " 1.  List All Referees. \n"
        << " 2.  List All Referees Of A Specific Grade. \n"
        << " 3.  List All Referees With Grade Higher A Specific Grade. \n"
        << " 4.  List All Referees With Grade Lower A Specific Grade. \n"
        << " 5.  List Referee Information With ID. \n"
        << " 6.  List Referee Information With Names. \n"
        << " 7.  Add New Referee. \n"
        << " 8.  Remove A Referee. \n"
        << " 9.  Update Referee Grade. \n"
        << "10.  Quit. \n" << std::endl;
    std::cout << "Please select your option: ";
    std::cin >> option;
    while (option < 1 || option > 10)
    {
        std::cout << "Invalid option!!! Please select valid option: ";
        std::cin >> option;
    }
    return option;
}

void listAllReferees()
{

}

void listAllGames()
{

}

void listAllAssignedGames()
{
    
}

void listAllUnassignedGames()
{
    
}

void listtRefereeInfoWithId()
{

}

void listtRefereeInfoWithLastName()
{

}

void addNewReferee()
{

}

void assignGame()
{

}

void addGame()
{

}

void removeGame()
{

}

void calculateGamePayment(short& center, short& ar1, short& ar2)
{

}

void calculateRefereePayment()
{

}

void Quit()
{

}

void readInfo()
{

}

void writeInfo()
{
    
}

short randomIndex()
{
    return static_cast<short>(rand() % 15);
}