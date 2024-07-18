#include <iostream>

int main(){
    
    int grade = 90;
    int ph = 4.6;

    if (grade < 60){
        std::cout << "Pass\n";
    }
    else
    {
        std::cout << "Fail\n";
    }

    //if-elseIf-else
    std::cout << "Let's check for an if-elseIf-else statement\n";

    if (ph > 7)
    {
        std::cout << "Basic\n";
    }
    else if (ph < 7)
    {
        std::cout << "Acidic\n";
    }
    else
    {
        std::cout << "Neutral\n";
    }
    
}