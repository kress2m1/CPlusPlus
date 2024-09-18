#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

//refactor code from codecademy function challenge
void introduction(string first_name, string last_name){

    cout << last_name << ", " << first_name << " " << last_name << "\n";
}

//find the average of two numbers
double averageCalc;
double average(double num1, double num2){
    averageCalc = (num1 + num2)/2;
    return averageCalc;
}

//return a value to the tenth power
long tenth_power(long num){
    return pow(num, 10);
}


//time to water the plant or not!
string needs_water(int days, bool is_succulent){
    if (days > 3 && !is_succulent)
    {
        return "Time to water the plant \n";
    }
    else if (days <= 12 && is_succulent)
    {
        return "Don't water the plant! \n";
    }
    else if (days >= 13 && is_succulent)
    {
        return "Go ahead and give the plant a little water \n";
    }
    else{
        return "Don't water the plant! \n";
    }
}

//check if palindrom
bool is_palindrome(string text){   
    
    string reversed_text = "";
    
    for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
    }
  
    if (reversed_text == text)
    {
        return true;
    } else{
        return false;
    }  
}


int main(){
    introduction("James", "Bond");
    cout << "The average number returned is: " << average(4.2, 6.4) << "\n";
    cout << "The number raised to power 10 is: " << tenth_power(10) << "\n";
    cout << needs_water(4, true);
    //string text = is_palindrome("madam");
    cout << is_palindrome("madams") << "\n";
    cout << is_palindrome("madam") << "\n";
    
}