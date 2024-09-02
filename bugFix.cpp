#include <iostream>

int main(){

    char answer;
    int score = 0;

    std::cout << "Who wants to be a winner?\n\n";

    std::cout << "Question 1\n\n";

    std::cout << "To make eba, you need 'Garri', 'Hot Water', 'Bowl' and what else?\n\n";

    std::cout << "A. Turning Garri Stick    B. Spoon\n";
    std::cout << "C. Plate                  D. Kettle\n\n";

    std::cout << "Enter your answer\n";
    std::cin >> answer;

    if (answer == 'A' || answer == 'a')
    {
        std::cout << "Correct! Your score is now " << score + 1000 << " score\n";
    }
    else
    {
        std::cout << "Wrong! Unfortunately, you got the wrong answer. Thank you for playing\n";
    }
    
    int width = 20;
    int length = 0;

    int ratio = width / length;
    std::cout << ratio << "\n";

    /* types of bugs
    1. compile-time errors: errors found by the compiler
    2. link-time errors: errors found by the linker when it's trying to combine object files into an executable program
    3. run-time errors: errors found by checks in the running program
    4. logic errors: errors found by the programmer looking for the cause of erroneous results
    */
}