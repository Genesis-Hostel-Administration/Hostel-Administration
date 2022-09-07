#include <bits/stdc++.h>
#include <conio.h>
#include <cstdio>
using namespace std;

int main();

class rector
{
public:
    void firstpage()
    {
        system("cls");
        int r;
        cout << "\t\t\t--------------------------------------------------------------------\n\n";
        cout << "\t\t\t\t\t            RECTOR MENU                                        \n\n";
        cout << "\t\t\t--------------------------------------------------------------------\n\n";
        cout << "\t| Press 1 for RECTOR LOGIN        |\n";
        cout << "\t| Press 2 for RECTOR REGISTRATION |\n";
        cout << "\t| Press 3 for FORGET PASSWORD     |\n\n";
        cout << "Enter your choice --> ";
        cin >> r;

        switch (r)
        {
        case 1:
            loginRector();
            break;
        case 2:
            registerRector();
            break;
        default:
            forgot();
            break;
        }
    }
    void loginRector()
    {
        int cnt = 0;
        int c;
        string userIDR, password, idR, passR;
        system("cls");
        cout << "\n\n\t\t Please enter your Credentials : \n";
        cout << "\t\t USERNAME --> ";
        cin >> userIDR;
        cout << "\t\t PASSWORD --> ";
        c = getch();
        while (c != 13)
        {
            password.push_back(c);
            cout << "*";
            c = getch();
        }

        ifstream rectorcreds("Rectors.txt");

        while (rectorcreds >> idR >> passR)
        {
            if (idR == userIDR and passR == password)
            {
                cnt++;
                system("cls");
            }
        }
        rectorcreds.close();

        if (cnt)
        {
            cout << "\t" << userIDR << "\n\tYour LOGIN is successfull!";
        }
        else
        {
            cout << "\n\t Account NOT FOUND\n\t Please enter correct Credentials\n";
        }
        // firstpage();
    }

    void registerRector()
    {
        string ruseridR, rpasswordR, ridR, rpassR;
        int c;
        system("cls");
        cout << "\t\t USERNAME --> ";
        cin >> ruseridR;
        cout << "\t\t PASSWORD --> ";
        c = getch();
        while (c != 13)
        {
            rpasswordR.push_back(c);
            cout << "*";
            c = getch();
        }
        ofstream rectorcreds("Rectors.txt", ios::app);
        rectorcreds << "\n"
                    << ruseridR << " " << rpasswordR;
        system("cls");
        cout << "\n\n\t\t Registration was successfull!! \n";
        rectorcreds.close();
        firstpage();
    }

    void forgot()
    {
        int option;
        system("cls");
        cout<<"\t\t\tForgot password? Chill! We are here\n\n";
        cout<<"| Press 1 to search your id by username |"<<endl;
        cout<<"| Press 2 to go back to the main menu   |\n "<<endl;
        cout<<"  Enter your choice -->";
        cin >> option;

        switch(option)
        {
            case 1:
            {
                int count = 0;
                string suserId,sId,spass;
                cout<<"\n\t\t\tEnter the username you remember: ";
                cin >> suserId;

                ifstream rectorcreds("Rectors.txt",ios::app);
                while(rectorcreds>>sId>>spass)
                {
                    if(sId  == suserId)
                    {
                        count = 1;
                        break;
                    }
                }
                
                rectorcreds.close();
                
                if(count == 1)
                {
                    cout<<"\n\n Your account is found! \n";
                    cout<<"\n\n Your password is : "<<spass;
                    getch();
                    main();
                }
                else{
                    cout<<"\n\t Sorry! Your account is not found: \n";
                    getch();
                    main();
                }
                break;
            }

            case 2:
            {
                main();
            }

            default:
                cout<<"\t\t\t Wrong choice ! Please try again "<<endl;

        }
    }
};

int main()
{
    system("cls");
    int c;
    cout << "\t\t\t--------------------------------------------------------------------\n\n";
    cout << "\t\t\t\t\t                MENU                                        \n\n";
    cout << "\t\t\t--------------------------------------------------------------------\n\n";
    cout << "\t Press 1 for RECTOR LOGIN\n";
    cout << "\t Press 2 for GUARD LOGIN\n";
    cout << "\t Press 3 for STUDENT LOGIN\n\n";
    cout << "Enter your choice --> ";
    cin >> c;

    switch (c)
    {
    case 1:
        rector R;
        R.firstpage();
        break;

    default:
        break;
    }

    return 0;
}
