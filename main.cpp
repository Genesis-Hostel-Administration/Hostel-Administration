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
        int t = 0;
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
            cout<<  "\n\t| Type 1 to Try Again           |\n";
            cout<<  "\n\t| Type 2 to return to main menu |\n";
            cout<<  "\t    Enter your details --> ";
            cin >> t;
        }
        cin >> t;
        switch(t){
            case 1:
                loginRector();
                break;
            case 2:
                firstpage();
                break;
            case 3:
                cout<<"  |Invalid number!!               |\n";
        }
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

class student{
    public:
    void Studentpage()
    {
        system("cls");
        int r;
        cout << "\t\t\t--------------------------------------------------------------------\n\n";
        cout << "\t\t\t\t\t            STUDENT MENU                                        \n\n";
        cout << "\t\t\t--------------------------------------------------------------------\n\n";
        cout << "\t| Press 1 for STUDENT LOGIN        |\n";
        cout << "\t| Press 2 for STUDENT REGISTRATION |\n";
        cout << "\t| Press 3 for FORGOT  PASSWORD     |\n\n";
        cout << "Enter your choice --> ";
        cin >> r;

        switch (r)
        {
        case 1:
            loginStudent();
            break;
        case 2:
            registerStudent();
            break;
        default:
            forgot();
            break;
        }
    }
    void loginStudent()
    {
        int t = 0;
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

        ifstream studentcreds("students.txt");

        while (studentcreds >> idR >> passR)
        {
            if (idR == userIDR and passR == password)
            {
                cnt++;
                system("cls");
            }
        }
        studentcreds.close();

        if (cnt)
        {
            cout << "\t" << userIDR << "\n\tYour LOGIN is successfull!";
        }
        else
        {
            cout << "\n\t Account NOT FOUND\n\t Please enter correct Credentials\n";
            cout<<  "\n\t| Type 1 to Try Again           |\n";
            cout<<  "\n\t| Type 2 to return to main menu |\n";
            cout<<  "      Enter your details --> ";
            cin >> t;
        }
        cin >> t;
        switch(t){
            case 1:
                loginStudent();
                break;
            case 2:
                Studentpage();
                break;
            case 3:
                cout<<" |Invalid number!!               |\n";
        }
    }
    void registerStudent()
    {
        string Suserid, Spassword, Sid, Spass;
        int c;
        system("cls");
        cout << "\t\t USERNAME --> ";
        cin >> Suserid;
        cout << "\t\t PASSWORD --> ";
        c = getch();
        while (c != 13)
        {
            Spassword.push_back(c);
            cout << "*";
            c = getch();
        }
        ofstream rectorcreds("students.txt", ios::app);
        rectorcreds << "\n"
                    << Suserid << " " << Spassword;
        system("cls");
        cout << "\n\n\t\t Registration was successfull!! \n";
        rectorcreds.close();
        Studentpage();
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
                string SuserId,SId,Spass;
                cout<<"\n\t\t\tEnter the username you remember: ";
                cin >> SuserId;

                ifstream Studentcreds("students.txt",ios::app);
                while(Studentcreds>>SId>>Spass)
                {
                    if(SId  == SuserId)
                    {
                        count = 1;
                        break;
                    }
                }
                
                Studentcreds.close();
                
                if(count == 1)
                {
                    cout<<"\n\n Your account is found! \n";
                    cout<<"\n\n Your password is : "<<Spass;
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

class Guard{
    public:
    void GuardPage()
    {
        system("cls");
        int r;
        cout << "\t\t\t--------------------------------------------------------------------\n\n";
        cout << "\t\t\t\t\t            STUDENT MENU                                        \n\n";
        cout << "\t\t\t--------------------------------------------------------------------\n\n";
        cout << "\t| Press 1 for GUARD LOGIN        |\n";
        cout << "\t| Press 2 for GUARD REGISTRATION |\n";
        cout << "\t| Press 3 for FORGOT  PASSWORD   |\n\n";
        cout << "Enter your choice --> ";
        cin >> r;

        switch (r)
        {
        case 1:
            loginGuard();
            break;
        case 2:
            registerGuard();
            break;
        default:
            forgot();
            break;
        }
    }
    void loginGuard()
    {
        int t=0;
        int cnt = 0;
        int c;
        string GuserID, Gpassword, Gid, Gpass;
        system("cls");
        cout << "\n\n\t\t Please enter your Credentials : \n";
        cout << "\t\t USERNAME --> ";
        cin >> GuserID;
        cout << "\t\t PASSWORD --> ";
        c = getch();
        while (c != 13)
        {
            Gpassword.push_back(c);
            cout << "*";
            c = getch();
        }

        ifstream guardcreds("guards.txt");

        while (guardcreds >> Gid >> Gpass)
        {
            if (Gid == GuserID and Gpass == Gpassword)
            {
                cnt++;
                system("cls");
            }
        }
        guardcreds.close();

        if (cnt)
        {
            cout << "\t" << GuserID<< "\n\tYour LOGIN is successfull!";
            getch();
        }
        else
        {
            cout << "\n\t Account NOT FOUND\n\t Please enter correct Credentials\n";
            cout<<  "\n\t| Type 1 to Try Again           |\n";
            cout<<  "\t  | Type 2 to return to main menu |\n";
            cout<<  "\t    Enter your details --> ";
            cin >> t;
        }
        
        switch(t){
            case 1:
                loginGuard();
                break;
            case 2:
                GuardPage();
                break;
            case 3:
                cout<<"  |Invalid number!!               |\n";
        }
        
    }
    void registerGuard()
    {
        string Guserid, Gpassword, Gid, Gpass;
        int c;
        system("cls");
        cout << "\t\t USERNAME --> ";
        cin >> Guserid;
        cout << "\t\t PASSWORD --> ";
        c = getch();
        while (c != 13)
        {
            Gpassword.push_back(c);
            cout << "*";
            c = getch();
        }
        ofstream guardcreds("guards.txt", ios::app);
        guardcreds << "\n"
                    << Guserid << " " << Gpassword;
        system("cls");
        cout << "\n\n\t\t Registration was successfull!! \n";
        guardcreds.close();
        GuardPage();
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
                string GuserId,GId,Gpass;
                cout<<"\n\t\t\tEnter the username you remember: ";
                cin >> GuserId;

                ifstream guardcreds("guards.txt",ios::app);
                while(guardcreds>>GId>>Gpass)
                {
                    if(GId  == GuserId)
                    {
                        count = 1;
                        break;
                    }
                }
                
                guardcreds.close();
                
                if(count == 1)
                {
                    cout<<"\n\n Your account is found! \n";
                    cout<<"\n\n Your password is : "<<Gpass;
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

    case 2:
        Guard G;
        G.GuardPage();

    case 3:
        student S;
        S.Studentpage();

    default:
        break;
    }
    return 0;
}
