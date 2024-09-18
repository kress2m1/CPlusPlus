#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

/*where you find yourself reusing the same blocks of code over and again,
it's best to turn them into a 'function'. 
a function, also known as a method or procedure, is a named group of code statements
that accomplish something together

the structure of a function is for it to make a declaration and a definition
declaration: this is the function's name, what the return type is, and if it has any parameters

definition: this is the body of the function, which contains the instruction for what it's supposed to do
*/

void functionStart(){

/* the void specifier, also known as a subroutine, has no return value
this makes it ideal for instances where the goal is to just print
stuff to the terminal
*/
    int number;
    int squareRoot;
    int randoNum;

    //using the in-built math function to acces the square-root function
    cout << "enter a number, for the square root to be found\n";
    cin >> number;
    squareRoot = sqrt(number);

    cout << "The sqaure root of " << number << " is " << squareRoot << "\n";

    cout << "Enter a random number: \n";
    cin >> randoNum;

    cout << "The random number generated is: " << rand() % randoNum << ". \n";
}

int main(){

//the function is called here

    functionStart();

}