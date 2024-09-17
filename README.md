## Number Guessing Game

This project is a **Number Guessing Game** implemented in C++. The computer randomly selects a number between 1 and 100, and the player has to guess the number. The game provides feedback whether the guess is too high, too low, or correct.

## How It Works

- The computer generates a random number between 1 and 100.
- The player inputs guesses, and the program informs the player whether their guess is too high, too low, or correct.
- The game continues until the player guesses the correct number.

## Features

- Random number generation.
- Infinite attempts until the correct guess is made.
- Feedback on each guess (too high, too low, or correct).

## How to Run the Program

1. **Clone the repository**:
   ```bash
   git clone https://github.com/Vivekumar-08/Number_Guessing_Game.git

2. **Navigate to the Reprosetory**
   ```
   cd Number_Guessing_Game

3. **Compile the program**
   ```
   gcc Number_guessing_game.CPP -o number_guessing_game

4. **Run the program**
   ```
   ./number_guessing_game

## Play the Game:
The program will prompt you to enter your guess, and it will continue until you correctly guess the number.

## Example
Gameplay  
Welcome to the Number Guessing Game!
I have selected a number between 1 and 100.
Can you guess what it is?

Enter your guess (1-100):
50
Too high!
Enter your guess (1-100):
25
Too low!
Enter your guess (1-100):
37
Too high!
Enter your guess (1-100):
30
Too low!
Enter your guess (1-100):
33
You won!
Congratulations! You guessed the correct number!

## Future Improvements
Add a feature to limit the number of guesses and display a "Game Over" message if the player exceeds the limit.
Provide options for different difficulty levels (e.g., easy with numbers from 1-50, hard with numbers from 1-1000).
Add a score system to track the number of guesses made.

