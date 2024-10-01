#include <iostream>
#include <vector>
#include <math.h>   
#include <chrono>

#include "func.hpp"

using namespace std;

int main(){
    cout << average(10.9, 18.9) << "\n";
    cout << tenth_power(11) << "\n";
    cout << is_palindrome("racecar") << "\n";
    
    //measure the time taken to execute nameCall()
    auto start = chrono::high_resolution_clock::now();
    cout << "My name is: " << nameCall("Andre") << "\n";
    auto end = chrono::high_resolution_clock::now(); 
    chrono::duration<double> elapsed = end - start;

    //print the time taken to execute nameCall()
    cout << "The time taken to execute the nameCall() is: " << endl;
}