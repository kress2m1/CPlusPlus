#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

/*where you find yourself reusing the same blocks of code over and again,
it's best to turn them into a 'function'. 
a function, also known as a method or procedure, is a named group of code statements
that accomplish something together
*/

int main(){

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

    cout << "The random number generated is: " << rand() % randoNum << " \n";
    
}