#include "includes.hpp"
using namespace std;



CReferee referees[15];
CGame games[5];

int main(void)
{
       int choice;
       srand((unsigned)time(NULL));
       do
       {
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
       } while (choice > 0 && choice < 10);
       return 0;
}


int main23(void)
{
        CReferee referee;
        CGame game;
        cin >> referee;
        cout << referee << endl;
        cin >> game;
        cout << game;
        return 0;
}
