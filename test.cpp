#include <iostream>
using namespace std;

void introduceMe(string name)
{
    cout << "My name is: " << name << endl;
}

int main()
{ 
    string name;
    cout << "please enter your name: ";
    cin >> name;

    introduceMe(name);
    
    return 0;
}
