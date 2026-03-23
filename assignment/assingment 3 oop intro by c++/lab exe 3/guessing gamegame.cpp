#include <iostream>
using namespace std;

int main()
{
    int secret = 50, guess;

    do
    {
        cout << "Guess a number (1-100): ";
        cin >> guess;

        if (guess > secret)
            cout << "Too high!\n";
        else if (guess < secret)
            cout << "Too low!\n";

    } while (guess != secret);

    cout << "Correct! You guessed it.\n";
    return 0;
}
