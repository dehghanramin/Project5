#include "includes.hpp"
#define END_GAME &games[5]
#define END_REF &referees[14]
#define START_GAME games
#define START_REF referees
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
std::string getLastName();
std::string getID();
std::string getGameID();
bool checkgameID(string const&);

int main(void)
{
        readInfo();
        short choice;
        do
        {
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
                // system("clear");
        } while ((choice > 0) && (choice < 13));
        cout << "Bye Bye!" << endl;
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
        CWriter<CReferee> printer(START_REF, END_REF);
        printer.print();
}

void listAllGames()
{
        CWriter<CGame> printer(START_GAME, END_GAME);
        printer.print();
}

void listAllAssignedGames()
{
        CGWriter<CGame> printer(START_GAME, END_GAME);
        printer.printAssigned();
}

void listAllUnassignedGames()
{
        CGWriter<CGame> printer(START_GAME, END_GAME);
        printer.printUnassigned();
}

void listtRefereeInfoWithId()
{
        CRWriter<CReferee> printer(START_REF, END_REF, getLastName());
        printer.printWID();
}

void listtRefereeInfoWithLastName()
{
        CRWriter<CReferee> printer(START_REF, END_REF, getLastName());
        printer.printWLN();
}

void addNewReferee()
{
        CRManager manager(START_REF, END_REF);
        manager.addReferee();
}

void assignGame()
{
        try
        {
                CGManager game_manager(START_GAME, END_GAME);
                CRManager ref_manager(START_REF, END_REF);
                string game_id(getGameID());
                if (game_manager.in(game_id)) { throw "Invalid ID!"; }
                ref_manager.assignGame(game_id);
        }
        catch(string const& e)
        {
                std::cerr << e << endl;
        }
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
        writeInfo();
}

void readInfo()
{
        CReader reader(referees, &referees[14]);
        try
        {
                reader.read();
        }
        catch(string const& e)
        {
                cerr << e << std::endl;
        }
}

void   writeInfo()
{
        CFWriter<CGame> game_writer(games, &games[4]);
        CFWriter<CReferee> referee_writer(referees, &referees[14]);
        try
        {        
                game_writer.print();
                referee_writer.print();
        }
        catch(string const& e)
        {
                cerr << e << endl;
        }
}

short randomIndex()
{
        return static_cast<short>(rand() % 15);
}

std::string getLastName()
{
        std::string input;
        cout << "Enter Last Name: " << endl;
        cin >> input;
        return input;
}

std::string getID()
{
        string input;
        cout << "Enter ID: " << endl;
        cin >> input;
        return input;
}

std::string getGameID()
{
        string input;
        cout << "Enter Game ID:" << endl;
        cin >> input;
        return input;
}