#include <iostream> //by Bree for Intro to Comp Sci 802
#include <cstdlib>
#include <ctime>
#include<cmath>



using namespace std;




int main()
{
    int number, guess, tries, divisors, dividend;
    double trials, games, result;
    string decision;

    trials = 0;  
    games = 0;

    do
    {

        srand(time(0)); 
        number = rand() % 50 + 1; 

        divisors = 0;  
        tries = 0;
        for (dividend = 2; dividend < number; dividend++) //starting at 2 because instructions say to skip 1 and the number itself
        {
            if (number % dividend == 0)
                divisors = divisors + 1;
        }

        cout << "I've picked a number between 1 and 50 that has " << divisors << " divisors.\n\n";

        do
        {
            cout << "Guess the number: ";
            cin >> guess;

            if (guess > number) {
                cout << "Too high!\n\n";
                tries++;
            }

            else if (guess < number) {
                cout << "Too low!\n\n";
                tries++;
            }

            else if (guess == number) {
                tries++;
                cout << "Right! It took you " << tries << " trials!\n\n";
                games = games + 1;  
            }

        } while (guess != number); 

        trials = trials + tries;   
        cout << "Play again? [y/n]: ";
        cin >> decision;

    } while (decision != "n");

    result = trials / games;

    cout << "You averaged " << result << " in " << games << " games.";




    system("pause");
    return 0;


}