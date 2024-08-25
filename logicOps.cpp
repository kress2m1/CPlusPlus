#include <iostream>

int main(){

    //this code is to calculate if the year entered is a leap year or not
    int leapYear;

    std::cout << "Enter a 4-digit year: \n";
    std::cin >> leapYear;

    if ((leapYear % 4 == 0) || ((leapYear % 100 == 0) && (leapYear % 400 != 0)) || (leapYear % 400 == 0))
    {
        std::cout << leapYear << " is a leap year\n";
    }
    else
    {
        std::cout << leapYear << " is not a leap year\n";
    }

    std::cout << "\n";
    //this is a while-loop used to guess a number

    int guess;
    int tries = 0;
    int guessNumber;

    std::cout << "I have a number between 1 & 10\n";
    std::cout << "Have a go at guessing it. Type your number into the prompt: \n";
    std::cin >> guess;

    while (guess != 8 && tries < 50)
    {
        std::cout << "Wrong guess, try again: \n";
        std::cin >> guess;

        tries++;
    }

    if (guess == 8)
    {
        std::cout << "Well done! you got the correct number\n";
    }
    
    //write code to display a number and the square of the number from 0 to 9, using a while-loop

    int initializer = 0;
    int squared = 0;

    std::cout << "Let's start counting the numbers: \n";
    
    
}