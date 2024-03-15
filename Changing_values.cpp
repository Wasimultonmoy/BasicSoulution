#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a=1, b=3, temp;
    temp = a;
    a = b;
    a = temp;
    cout << a << b << endl;
    cout << "Press any key to Exit" << endl;
    getch();
}