#include "includes.hpp"
using namespace std;

CReferee referees[15];
CGame games[5];


int menu();
void listAllReferees();
void listAllGames();
void listAllAssignedGames();
void listAllUnassignedGames();
void listtRefereeInfoWithId();
void listtRefereeInfoWithLastName();
void addNewReferee();
void assignGame();
void addGame();
void removeGame();
void calculateGamePayment();
void calculateRefereePayment();
void Quit();
void readInfo();
void writeInfo();
short randomIndex();


int main(void)
{
       short choice;
       srand((unsigned)time(NULL));
        do
        {
                system("clear");
                choice = menu();
                switch (choice)
                {
                case 1:
                        listAllReferees();
                        break;
                case 2:
                        listAllGames();
                        break;
                case 3:
                        listAllAssignedGames();
                        break;
                case 4:
                        listAllUnassignedGames();
                        break;
                case 5:
                        listtRefereeInfoWithId();
                        break;
                case 6:
                        listtRefereeInfoWithLastName();
                        break;
                case 7:
                        addNewReferee();
                        break;
                case 8:
                        assignGame();
                        break;
                case 9:
                        addGame();
                        break;
                case 10:
                        removeGame();
                        break;
                case 11:
                        calculateGamePayment();
                        break;
                case 12:
                        calculateRefereePayment();
                        break;
                case 13:
                        Quit();
                        break;
                default:
                        cout << "That was an invalid choice, please try again! \n";
                }
       } while ((choice > 0) && (choice < 10));
       return 0;
}


int menu()
{
    int option;
    std::cout << "             REFEREE ASSIGNING SYSTEM \n\n"
        << " 1.  List All Referees. \n"
        << " 2.  List All Games. \n"
        << " 3.  List All Assigned Games. \n"
        << " 4.  List All Unassigned Games. \n"
        << " 5.  List Referee Information With ID. \n"
        << " 6.  List Referee Information With Last Names. \n"
        << " 7.  Add New Referee. \n"
        << " 8.  Assign Game. \n"
        << " 9.  Add Game. \n"
        << " 10. Remove Game. \n"
        << " 11. Calculate Game Payment. \n"
        << " 12. Calculate Referee Payment. \n"
        << " 13. Quit. \n" << std::endl;
    std::cout << "Please select your option: ";
    std::cin >> option;
    while (option < 1 || option > 13)
    {
        std::cout << "Invalid option!!! Please select valid option: ";
        std::cin >> option;
    }
    return option;
}

void listAllReferees()
{
    CAPrinter printer(referees, &referees[14]);
    printer.print();
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

void calculateGamePayment()
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
        CReader reader(referees);
        try
        {
                reader.read();
        }
        catch(std::string const& e)
        {
                std::cerr << e << std::endl;
        }
        
        
}

void writeInfo()
{
    
}

short randomIndex()
{
    return static_cast<short>(rand() % 15);
}