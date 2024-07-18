//this is a line test
#include <iostream>

int main() {
    std::cout << "this is a test for a multi-line comment\n";
    std::cout << "let's print another comment out test\n";

    /* this is a multi-line comment
    the compiler will ignore this 
    part of the code at runtime
    */
   int year = 2024;
   std::cout << year << "\n";
   std::cout << "the current year today is " << year << ", hurray!\n";
   
   int score = 0;
   std::cout << "Player score: " << score << "\n";
   
}