#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#pragma region struct
struct
{
    int id;
    string bc_no;
    string rank;
    string name;
    string collegue;
    int age;
    double height;
    double salary;
    string marrige;
    string dob;

} myProfile[2];

#pragma endregion
int main()
{
    int length = 128;
    int size = 2;
    string option;
    cout << endl
         << endl;
#pragma region Title
    cout << "\033[1;32m|\033[0m" << setfill('=') << setw(length) << "\033[1;32m|\033[0m" << endl;
    cout << "\033[1;32m|\033[0m" << setfill(' ') << setw(79) << "\033[1;32m 🌵 PROFILE INFORMATION SYSTEM \033[0m"
         << setfill(' ') << setw(4) << "🌵" << setfill(' ') << setw(60)
         << "\033[1;32m|\033[0m"
         << endl;
    cout << "\033[1;32m|\033[0m" << setfill('=') << setw(length) << "\033[1;32m|\033[0m" << endl
         << endl;
#pragma endregion
#pragma region Input String
    for (int i = 0; i < size; i++)
    {
        cout << setfill(' ') << setw(79) << "\033[1;32m 🐢 Enter User \033[0m"
             << setfill(' ') << setw(4) << "🐢 " << setfill(' ') << setw(60)
             << "\033[1;32m\033[0m"
             << endl;

        cout << setfill(' ') << setw(65) << "\033[1;31mBC:  \033[0m";
        getline(cin >> ws, myProfile[i].bc_no);
        cout << setw(65) << "\033[1;32mRANK:  \033[0m";
        getline(cin >> ws, myProfile[i].rank);

        cout << setw(65) << "\033[1;33mNAME:  \033[0m";
        getline(cin >> ws, myProfile[i].name);

        cout << setw(65) << "\033[1;34m Collegue:  \033[0m";
        getline(cin >> ws, myProfile[i].collegue);

        cout << setw(65) << "\033[1;35mMarrige:  \033[0m";
        getline(cin >> ws, myProfile[i].marrige);

        cout << setw(65) << "\033[1;36mDateofBirth:  \033[0m";
        getline(cin >> ws, myProfile[i].dob);

        cout << setw(65) << "\033[1;37mAGE:  \033[0m";
        cin >> myProfile[i].age;
        while (cin.fail())
        {
            cout << setw(65) << "\033[1;31mWrong! must be an integer, AGE: \033[0m  ";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> myProfile[i].age;
        }

        cout << setw(65) << "\033[1;32mHeight:  \033[0m";
        cin >> myProfile[i].height;
        // getline(cin >> ws, myProfile[i].height);
        while (cin.fail())
        {
            cout << setw(65) << "\033[1;31mWrong! must be a numeric, HEIGHT: \033[0m  ";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> myProfile[i].height;
        }
        cout << setw(65) << "\033[1;36mSalary:  \033[0m";
        cin >> myProfile[i].salary;
        while (cin.fail())
        {
            cout << setw(65) << "\033[1;31mWrong! must be a numeric, salary: \033[0m  ";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> myProfile[i].salary;
        }
        // getline(cin >> ws, myProfile[i].salary);
        cout << endl;
    }
#pragma endregion End of Input
#pragma region Column Header
    cout << "\033[1;32m|\033[0m" << setfill('=') << setw(length) << "\033[1;32m|\033[0m" << endl;
    cout
        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
        << right << "ID"
        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << left << "BC"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << "RANK"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
        << "NAME"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << "COLLEGUE"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
        << "AGE"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << "HIGHT"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << "SALARY"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << "MARRIGE"

        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
        << "DOB"
        << "\033[1;32m| \033[0m" << endl;
    cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
         << "\033[1;32m| \033[0m" << endl;

    for (int j = 0; j < size; j++)
    {
        cout
            << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
            << right << j + 1
            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << left << myProfile[j].bc_no

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << myProfile[j].rank

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
            << myProfile[j].name

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << myProfile[j].collegue

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
            << myProfile[j].age

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << myProfile[j].height

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << myProfile[j].salary

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << myProfile[j].marrige

            << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
            << myProfile[j].dob
            << "\033[1;32m| \033[0m" << endl;
    }
    cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
         << "\033[1;32m|\033[0m" << endl;
#pragma endregion End of Table Column Header
#pragma region Option
    cout << endl
         << endl
         << endl
         << endl
         << endl
         << endl
         << endl;
    cout << "\n\t\t\t\t\t\t"
         << "\033[1;33m OPTIONS \033[0m" << endl;
    cout
        << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
    cout
        << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
        << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
        << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
        << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
        << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
        << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
        << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
        << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
        << "\033[1;32m\033[0m" << endl;
    cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
    cout << "\n\t\t\t\t"
         << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
    do
    {
        cin >> option;
#pragma region Name
        if (option == "N")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from Name's Process \033[0m";
#pragma region Enter any num for for all Names
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any numeric for showing all NAMES: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {

                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].name << endl;
            }
#pragma endregion of All Names
#pragma region Query with Name
            //=========Select full sentence===========//
            cout
                << endl
                << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32mSelect the Name from above table :\033[0m";
            string name;
            getline(cin >> ws, name);
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << "\033[1;32m|\033[0m" << setfill('=') << setw(length) << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < size; j++)
            {
                while (name == myProfile[j].name)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            //========End of full sentence=========//

#pragma endregion End of Name
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region BC
        if (option == "B")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from BC's Process \033[0m";
#pragma region Enter any num for for all BC
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all BC No: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {

                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].bc_no << endl;
            }
#pragma endregion of All BC
#pragma region // Query with BC
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m(2).Select the BC_NO from above table :\033[0m";
            string bc;
            getline(cin >> ws, bc);
            // cout << endl;
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < 2; j++)
            {
                while (bc == myProfile[j].bc_no)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region Rank
        if (option == "R")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from Rank's Process \033[0m";
#pragma region Enter any num for for all Ranks
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all Ranks: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].rank << endl;
            }
#pragma endregion of All Ranks
#pragma region Query with Rank
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m(3).Select the Rank from above table :\033[0m";
            string rank;
            getline(cin >> ws, rank);
            // cout << endl;
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < 2; j++)
            {
                while (rank == myProfile[j].rank)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region Collegues
        if (option == "C")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from Collegue's Process \033[0m";
#pragma region Enter any num for for all Collegues
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all Collegues: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {

                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].collegue << endl;
            }
#pragma endregion of All Collegue
#pragma region Query with Collegue
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m(3).Select the Collegue from above table :\033[0m";
            string collegue;
            getline(cin >> ws, collegue);
            // cout << endl;
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < 2; j++)
            {
                while (collegue == myProfile[j].collegue)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region Age
        if (option == "A")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from Age's Process \033[0m";
#pragma region Enter any num for for all Ages
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all Ages \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].age << endl;
            }
#pragma endregion of All Ages
#pragma region Query with Age

#pragma region Select Age and retrieve full sentence
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32mRetrieve any Age from main table :\033[0m";
            int age;
            cin >> age;
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < 2; j++)
            {
                while (age == myProfile[j].age)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion //=============================//

#pragma region Select Age and compare to less than
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m Enter any age less than of :\033[0m";
            int smallage;
            cin >> smallage;
            cout << "\t\t\t\t"
                 << "\033[1;33m The smaller ages are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < size; j++)
            {
                while (smallage > myProfile[j].age)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion //=============================//
#pragma region Select any Age and compare to greather than
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m Enter any age greather than of :\033[0m";
            int bigage;
            cin >> bigage;
            cout << "\t\t\t\t"
                 << "\033[1;33m The greather age are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < size; j++)
            {
                while (bigage < myProfile[j].age)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion //=============================//
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region Height
        if (option == "H")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from Hight's Process \033[0m";
#pragma region Enter any num for for all Height
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all Height: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].height << endl;
            }
#pragma endregion of All Height
#pragma region Query with Height
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m(3).Select the Height from above table :\033[0m";
            double height;
            cin >> height;
            // getline(cin >> ws, salary);
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < size; j++)
            {
                while (height == myProfile[j].height)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region Salary
        if (option == "S")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from Salary's Process \033[0m";
#pragma region Enter any num for for all salary
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all Salary: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {
                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].salary << endl;
            }
#pragma endregion of All salary
#pragma region Query with salary
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m(3).Select the Salary from above table :\033[0m";
            double salary;
            cin >> salary;
            // getline(cin >> ws, salary);
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < size; j++)
            {
                while (salary == myProfile[j].salary)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
#pragma region DOB
        if (option == "D")
        {
            cout << "\n\t\t\t\t\t"
                 << "\033[1;32m Welcome from DateOfBirth's Process \033[0m";
#pragma region Enter any num for for all DOB
            cout
                << endl;
            int num;
            cout << "\t\t\t\t"
                 << "\033[1;32mEnter any number for showing all DOB: \033[0m";
            cin >> num;
            while (cin.fail())
            {
                cout << setfill(' ') << setw(65) << left << "\033[1;31mWrong! must be a numeric number, re-enter it : \033[0m  ";
                cin.clear();
                cin.ignore(256, '\n');
                cin >> num;
            }
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            for (int i = 0; i < size; i++)
            {

                cout << setfill(' ') << setw(33) << right << "(" << i + 1 << ") " << myProfile[i].dob << endl;
            }
#pragma endregion of All DOB
#pragma region Query with DOB
            // query with DOB
            cout << endl
                 << endl;
            cout << "\t\t\t\t"
                 << "\033[1;32m Select any person with DOB:\033[0m";
            string dob;
            getline(cin >> ws, dob);
            cout << "\t\t\t\t"
                 << "\033[1;33mThe Results are as follow :\033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            cout
                << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                << right << "ID"
                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << left << "BC"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "RANK"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                << "NAME"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "COLLEGUE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                << "AGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "HIGHT"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "SALARY"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "MARRIGE"

                << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                << "DOB"
                << "\033[1;32m| \033[0m" << endl;
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m| \033[0m" << endl;
            for (int j = 0; j < size; j++)
            {
                while (dob == myProfile[j].dob)
                {
                    cout
                        << "\033[1;32m|\033[0m" << setfill(' ') << setw(3)
                        << right << j + 1
                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << left << myProfile[j].bc_no

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].rank

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(20)
                        << myProfile[j].name

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].collegue

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(5)
                        << myProfile[j].age

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].height

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].salary

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].marrige

                        << "\033[1;32m| \033[0m" << setfill(' ') << setw(10)
                        << myProfile[j].dob
                        << "\033[1;32m| \033[0m" << endl;
                    break;
                }
            }
            cout << setfill('=') << setw(length) << "\033[1;32m|\033[0m"
                 << "\033[1;32m|\033[0m" << endl;
            //==============//
            
#pragma endregion
#pragma region Option
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "\n\t\t\t\t\t\t"
                 << "\033[1;33m OPTIONS \033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout
                << "\033[1;32m\033[0m" << setfill(' ') << setw(20) << left << "\033[1;32mN = Name\033[0m"
                << setfill(' ') << setw(20) << right << "\033[1;33mB = BC\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mR = Rank\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mA = Age\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;32mC = Collegue\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;33mS = Salary\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;34mH = Height\033[0m"
                << setfill(' ') << setw(25) << right << "\033[1;35mD = DOB\033[0m" << setfill(' ') << setw(25) << right << "\033[1;31mE = Exit\033[0m"
                << "\033[1;32m\033[0m" << endl;
            cout << "\033[1;32m\033[0m" << setfill('-') << setw(length) << "\033[1;32m\033[0m" << endl;
            cout << "\n\t\t\t\t"
                 << "\033[1;33m choose correct option: \033[0m";

#pragma endregion
        }
#pragma endregion
    } while (option != "E");
    return 0;
}