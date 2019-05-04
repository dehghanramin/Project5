#include <iostream>

#include <string>

#include "Referee.h"

using namespace std;

 

 

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

 

 

CReferee referees[10];

 

// Function to read referee information from the file Referees.dat

void readRefereeInfo();

 

// Function to write referee information back to the file Referees.dat

void writeRefereeInfo();

 

void main()

{

 

       int choice;

       do {

             system("CLS");

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

             system("PAUSE");

       } while (choice > 0 && choice < 10);

 

       system("PAUSE");

 

}

 

int menu()

{

       int option;

       cout << "             REFEREE ASSIGNING SYSTEM \n\n";

       cout << " 1.  List All Referees. \n";

       cout << " 2.  List All Referees Of A Specific Grade. \n";

       cout << " 3.  List All Referees With Grade Higher A Specific Grade. \n";

       cout << " 4.  List All Referees With Grade Lower A Specific Grade. \n";

       cout << " 5.  List Referee Information With ID. \n";

       cout << " 6.  List Referee Information With Names. \n";

       cout << " 7.  Add New Referee. \n";

       cout << " 8.  Remove A Referee. \n";

       cout << " 9.  Update Referee Grade. \n";

       cout << "10.  Quit. \n\n";

 

       cout << "Please select your option: ";

       cin >> option;

       while (option < 1 || option > 10)

       {

             cout << "Invalid option!!! Please select valid option: ";

             cin >> option;

       }

       return option;

}

 

void listAllReferees()

{

       cout << "Inside listAllReferees () \n\n";  //Remove when starting coding

       //Your code here

}

 

void listRefereesOfSpecificGrade()

{

       cout << "Inside listRefereesOfSpecificGrade () \n\n";  //Remove when starting coding

       //Your code here

}

 

void listtRefereesWithGradeHigherThanSpecificGrade()

{

       cout << "Inside listtRefereesWithGradeHigherThanSpecificGrade () \n\n";  //Remove when starting coding

       //Your code here

}

 

void listtRefereesWithGradeLowerThanSpecificGrade()

{

       cout << "Inside listtRefereesWithGradeLowerThanSpecificGrade () \n\n";  //Remove when starting coding

       //Your code here

}

 

void listtRefereeInfoWithId()

{

       cout << "Inside listtRefereeInfoWithId () \n\n";  //Remove when starting coding

       //Your code here

}

 

void listtRefereeInfoWithNames()

{

       cout << "Inside listtRefereeInfoWithNames () \n\n";  //Remove when starting coding

       //Your code here

}

 

void addNewReferee()

{

       cout << "Inside addNewReferee () \n\n";  //Remove when starting coding

       //Your code here

}

 

void removeReferee()

{

       cout << "Inside removeReferee () \n\n";  //Remove when starting coding

       //Your code here

}

 

void updateRefereeGrade()

{

       cout << "Inside updateRefereeGrade () \n\n";  //Remove when starting coding

       //Your code here

}

 

void Quit()

{

       // Write Referee information back to the file Referees.dat

       writeRefereeInfo();

 

       cout << "Have a nice day \n\n";

}

 

void readRefereeInfo()

{

       cout << "Inside readRefereeInfo () \n\n";  //Remove when starting coding

}

 

void writeRefereeInfo()

{

       cout << "Inside writeRefereeInfo () \n\n";  //Remove when starting coding

}