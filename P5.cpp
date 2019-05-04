#include "CReferee.hpp"
#include "CGame.hpp"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

srand((unsigned)time(NULL));

 

int menu();
void listAllReferees();
void listRefereesOfSpecificGrade();
void listtRefereesWithGradeHigherThanSpecificGrade();
void listtRefereesWithGradeLowerThanSpecificGrade();
void listtRefereeInfoWithId();
void listtRefereeInfoWithNames();
void addNewReferee();
void removeReferee();
void updateRefereeGrade();
void Quit();


 

// CReferee referees[10];

 

// Function to read referee information from the file Referees.dat
void readRefereeInfo();



// Function to write referee information back to the file Referees.dat
void writeRefereeInfo();



int main(void)
{
       int choice;
       do {
             system("clear");
             choice = menu();
             switch (choice) {
             case 1:
                     listAllReferees();
                     break;
             case 2:
                     listRefereesOfSpecificGrade();
                     break;
             case 3:
                     listtRefereesWithGradeHigherThanSpecificGrade();
                     break;
             case 4:
                     listtRefereesWithGradeLowerThanSpecificGrade();
                     break;
             case 5:
                     listtRefereeInfoWithId();
                     break;
             case 6:
                     listtRefereeInfoWithNames();
                     break;
             case 7:
                     addNewReferee();
                     break;
             case 8:
                     removeReferee();
                     break;
             case 9:
                     updateRefereeGrade();
                     break;
             case 10:
                     Quit();
                     break;
             default:
                     cout << "That was an invalid choice, please try again! \n";
             }
             return 0;
       } while (choice > 0 && choice < 10);
}

 

int menu()
{
       int option;
       cout << "             REFEREE ASSIGNING SYSTEM \n\n"
            << " 1.  List All Referees. \n"
            << " 2.  List All Referees Of A Specific Grade. \n"
            << " 3.  List All Referees With Grade Higher A Specific Grade. \n"
            << " 4.  List All Referees With Grade Lower A Specific Grade. \n"
            << " 5.  List Referee Information With ID. \n"
            << " 6.  List Referee Information With Names. \n"
            << " 7.  Add New Referee. \n"
            << " 8.  Remove A Referee. \n"
            << " 9.  Update Referee Grade. \n"
            << "10.  Quit. \n" << endl;
       cout << "Please select your option: ";
       cin >> option;
       while (option < 1 || option > 10)
       {
             cout << "Invalid option!!! Please select valid option: ";
             cin >> option;
       }
       return option;
}