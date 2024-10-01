#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

double average(double num1, double num2){
    return(num1 + num2) / 2;
}

long tenth_power(long num){
    return pow(num, 10);
}

bool is_palindrome(string text){
    string reversed_text = "";

    for (int i = text.size() - 1; i >= 0; i--){
        reversed_text += text[i];
    }

    if (reversed_text == text)
    {
        return true;
    } else
    {
        return false;
    }
}

