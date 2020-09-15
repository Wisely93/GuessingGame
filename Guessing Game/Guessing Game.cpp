#include <iostream>
using namespace std;

int main()
{
    int HostNum, GuessNum, GuessAttempts;
    do
    {
        GuessAttempts = 3;
        system("cls");

        //Game Title and instruction
        cout << "***** Welcome to Guessing Game *****" << endl;
        cout << "Please key in numbers within 1 - 10" << endl << endl;

        //Host set a number
        cout << "Host, please key in your number : ";
        cin >> HostNum;

        //Check condition if numbers is in between 1 - 10
        if (HostNum > 0 && HostNum <= 10)
        {
            system("cls");

            // Player key in a number
            cout << "Player, please key in your number : ";
            cin >> GuessNum;

            //Check if player key in the number within the range
            if (GuessNum > 0 && GuessNum <= 10)
            {
                //Give player 3 attempts
                do
                {
                    GuessAttempts--;
                    cout << endl << "Attempts left : " << GuessAttempts << endl;
                    cout << "Player, please key in your number : ";
                    cin >> GuessNum;

                } while (GuessNum != HostNum && GuessAttempts != 1);

                (GuessNum == HostNum) ? cout << endl << "Your answer is correct!"<< endl : cout << endl << "Wrong answer. The answer is " << HostNum << endl;  //Match if correct / display correct numbers when wrong.
            }
            else
                cout << "Invalid number"<<endl;
        }
        else
            cout << "Invalid number"<<endl;

        system("pause");
    } while (GuessAttempts == 1 || GuessNum == HostNum);

    system("Pause>0");
};
