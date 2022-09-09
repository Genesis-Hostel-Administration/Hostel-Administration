
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