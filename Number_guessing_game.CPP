#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main() {
    srand((unsigned)time(0));
    int number = rand() % 100 + 1;
    int guess;
    bool correctGuess = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (!correctGuess) {
        cout << "Enter your guess (1-100):" << endl;
        cin >> guess;

        if(guess<number){
            cout << "Too low!" << endl;
        }
            else if (guess > number){
                cout << "Too high!" << endl;
            }
            else{
                cout << "You won!" << endl;
                cout << "Congratulations! You guessed the correct number!" << endl;
                correctGuess = true;
        }
    }
    
    return 0;
}
 
