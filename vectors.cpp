#include <iostream>
#include <vector>

using namespace std;

int main(){

    //a vector is a sequence of elements that can be easily accessed by index
    vector<double> subway_adult = {100, 200, 354};
    vector<double> subway_child = {544, 258, 547};
    vector<string> fruits = {"Mango", "Banana", "Orange"};

    /* a vector can be created in many forms
    1. undeclared - vector<double> name-of-vector;
    2. declared initialized with specific values - vector<double> name-of-vector = {300, 400};
    3. presizing when the values are yet unknown - vector<double> name-of-vector(number-of-element-size);
    */

    //access the elements using the index
    cout << subway_adult[0] << "\n";
    cout << subway_adult[1] << "\n";
    cout << subway_adult[2] << "\n";

    //add more elements to the vector
    subway_child.push_back(555);
    subway_child.push_back(646);

    cout << subway_child[0] << "\n";
    cout << subway_child[1] << "\n";
    cout << subway_child[2] << "\n";
    cout << subway_child[3] << "\n";
    cout << subway_child[4] << "\n";

    //return the size of a vector
    cout << subway_adult.size() << "\n";
    cout << subway_child.size() << "\n";

    //add more fruits to the fruit vectors
    fruits.push_back("Melon");
    cout << "The size of the fruit vector is now: " << fruits.size() << "\n";

    //a for-loop can be used to change the values inside a vector
    cout << "print out the values in the subway_adult vector: \n";
    cout << subway_adult[0] << "\n";
    cout << subway_adult[1] << "\n";
    cout << subway_adult[2] << "\n";

    cout << "add 1000 to each value and print out the number: \n";
    for (int i = 0; i < subway_adult.size(); i++)
    {
        subway_adult[i] = subway_adult[i] + 1000;
        cout << subway_adult[i] << "\n";
    }
    
    cout << " \n";
    cout << "let's work on some more vectors \n";

    vector<int> numbers = {2, 4, 3, 6, 1, 9};
    int totalEvens = 0;
    int totalOdds = 1;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            totalEvens = numbers[i] + totalEvens;
        }        
    }
    cout << "The total sum of even numbers is: " << totalEvens << "\n";

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 1)
        {
            totalOdds = numbers[i] * totalOdds;
        }
    }
    cout << "The product of odd number is: " << totalOdds;
}