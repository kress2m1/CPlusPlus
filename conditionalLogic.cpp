#include <iostream>

int main(){
    
    int grade = 90;
    double ph = 4.6;
    int pokemon = 9;

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

    //switch statements
    std::cout << "Let's practice some Switch code\n";

    switch (pokemon)
    {
    case 1:
        std::cout << "Bulbusaur\n";
        break;
    case 2:
        std::cout << "Ivysaur\n";
        break;
    case 3:
        std::cout << "Venusaur\n";
        break;
    case 4:
        std::cout << "Charmander\n";
        break;
    case 5:
        std::cout << "Charmeleon\n";
        break;
    case 6:
        std::cout << "Charizard\n";
        break;
    case 7:
        std::cout << "Squirtle\n";
        break;
    case 8:
        std::cout << "Wartortle\n";
        break;
    case 9:
        std::cout << "Blastoise\n";
        break;
    default:
        break;
    }
    
}