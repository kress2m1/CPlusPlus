#include <iostream>
#include <vector>

using namespace std;

string greeting;
string food;

bool needs_it_support(){

    bool support;

    cout << "Hello, this is IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no \n";
    cin >> support;
    //cout << support;
    return support;
}

//make a sandwich
string make_sandwich(){

    cin >> greeting;

    if (greeting == "morning" || greeting == "Morning")
    {
        food += "eggs\n";
    }
    food += "cheese\n";
    food += "bread\n";
    return food;
}

//new emergency number
string get_emergency_number(string emergency_number){
    cout << "Dial " << emergency_number << " \n";
    return emergency_number;
}

int main(){

    string new_emergency_number = "0118 999 881 999 119 725 3";

    cout << needs_it_support() << " \n";
    cout << " \n";
    cout << "Enter a greeting to select your food for the day: \n";
    cout << make_sandwich() << "Your sandwich is being prepared \n";
    cout << " \n";
    get_emergency_number(new_emergency_number);
    //cout << emergency << " a\n";
}
