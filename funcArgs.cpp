#include <iostream>

using namespace std;

//mutiple arguments can also be included in a function
void name_x_times(string name, int x){
    //cout << "My name is " << name << " and I am " << x << "yrs old \n";
    while (x > 0)
    {
        cout << name;
        x--;
    }
    
}

//code refactor

string reply;

void it_support(int times){
    while (times > 0)
    {
        cout << "Hello. IT. \n";
        cout << "Have you tried turning it off and on again? yes/no\n";
        cin >> reply;
        times--;
    }
    
}

int main(){

    name_x_times("Andre \n", 8);
    it_support(3);
    cout << "You stole the stress machine? But that's stealing! \n";
    it_support(1);

}