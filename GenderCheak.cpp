/*Take a character as input through the keyboard. Write a program to find out whether the gender is Male or Female.
Inputs: take input ‘M’ or ‘m’ for male and take input ‘F’ or ‘f’ for female. For any other input, the result will show “Undefined”.*/
#include <iostream>
using namespace std;
int main()
{
    char Gender;
    cout << "Tell me what's your Gender: " << endl;
    cout << "M.Male\nF.Female" << endl;
    cout << "Enter your choice: ";
    cin >> Gender;

    if(Gender == 'm' || Gender == 'M')
    {
        cout << "Male" << endl;
    }
    else if(Gender == 'f' || Gender == 'F')
    {
        cout << "Female" << endl;
    } else {
        cout << "Undefined" << endl;
    }
    return 0;
}