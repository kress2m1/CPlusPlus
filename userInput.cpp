#include <iostream>

/*
To print to the console, "std::cout <<" is used
To accept user input, "std::con >>" is used
*/

int main(){
    int tip = 0;
    
    std::cout << "Enter user amount: ";

    std::cin >> tip;

    std::cout << "Tip entered is £" << tip << ". Thank you. \n";

    double tempF;
    std::cout << "Enter the temperature in Farenheit for New York: \n";

    std::cin >> tempF;

    double tempC;

    tempC = (tempF - 32)/1.8;

    std::cout << "The New York temp in Celsius is " << tempC << " degrees today\n";

}