#include <iostream> // by Bree for Intro to Comp Sci 802 
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    double hours{}, wage{}, holiday{}, pay{}, pay_birthday{};
    char birthday{};




    cout << " How many hours did you work this week? ";
    cin >> hours;




    cout << "\n What is your hourly wage? ";
    cin >> wage;




    cout << "\n How many hours were holiday hours? ";
    cin >> holiday;


    if (holiday > 0)
    {
        if (hours <= 40)
        {
            pay = (holiday * 2 * wage) + ((hours - holiday) * wage);
        }
        else if (hours > 40 <= 60)
        {
            pay = (holiday * 2 * wage) + ((40 - holiday) * wage) + ((hours - 40) * 1.5 * wage);
        }
        else if (hours > 60 <= 80)
        {
            pay = (holiday * 2 * wage) + ((40 - holiday) * wage) + (20 * 1.5 * wage) + ((hours - 60) * 2 * wage);
        }
    }

    else
    {
        if (hours <= 40)
        {
            pay = wage * hours;
        }
        else if (hours > 40 <= 60)
        {
            pay = (40 * wage) + ((hours - 40) * 1.5 * wage);
        }
        else if (hours > 60 <= 80)
        {
            pay = (40 * wage) + (20 * 1.5 * wage) + ((hours - 60) * 2 * wage);
        }

    }





    cout << "\n Was it your birthday this week? [y/n] ";
    cin >> birthday;

    if (birthday == 'y')
    {
        pay_birthday = pay * 0.07;
        pay = pay + pay_birthday;
        cout << "\nWages due for the week: $" << setprecision(2) << fixed << pay << endl;
        cout << "\nHAPPY BIRTHDAY, you got an extra: $" << setprecision(2) << fixed << pay_birthday << endl;
    }
    else if (birthday == 'n')
    {
        cout << "\nWages due for the week: $" << setprecision(2) << fixed << pay << endl;
    }







    system("pause");
    return 0;



}