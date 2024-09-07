#include <iostream> 
#include <vector>

using namespace std;

int main(){

    /*arrays are lower-level construts than vectors and have the following characteristics
    1. they are rigid in size
    2. exisitng elements can only be modified
    */

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    //display the first element
    cout << "Display the 1st element in the vowels array\n";
    cout << "The first element in the array is " << vowels[0] << "\n";

    cout << "Replace the 1st element with character 'x' then display the change to the terminal\n";
    vowels[0] = 'X';
    cout << "\n";
    cout << "The first element in the array is now: " << vowels[0] << "\n";
    cout << "a is now changed to X in the array \n";
    
}