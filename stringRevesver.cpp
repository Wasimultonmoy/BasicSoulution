#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char name1[100];
    char name2[100];
    cout << "Enter your name: ";
    cin.getline(name1, 100);

    int i = 0, len =0, j;
    while (name1[i]!= '\0')
    {
        i ++;
        len ++;
    }
    for(j = 0, i = len - 1; i >=0; i --, j++)
    {
        name2[j] = name1[i];
    }
    name2[j] = '\0';

    cout << "The 1st string: " << name1 << endl;
    cout << "The new string: " << name2 << endl;

    if(name1 == name2)
    {
        cout << "Plain";
    } else {
        cout << "Not plain";
    }
    return 0;
}
