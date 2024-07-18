#include <iostream>

int main(){
    double itemWeight;
    double marWeights;
    double miles;
    double kilometers;

    //calculate weight of item on Mars
    std::cout << "Enter the weight of your item\n";
    std::cin >> itemWeight;
    marWeights = (itemWeight * 3.711)/9.81;
    std::cout << "The weight of the item on Mars is " << marWeights << " kilograms\n";

    //convert miles to kilometers
    std::cout << "Enter the distance of your journey in miles\n";
    std::cin >> miles;
    kilometers = miles * 1.609344;
    std::cout << "The distance in kilometers is " << kilometers << " kilometers\n";
}