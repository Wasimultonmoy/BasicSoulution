/*Wasimul Bari Tonmoy
 * ID: 24-56653-1
 * Section B-12*/
#include<iostream>
#include <conio.h>
using namespace std;
int main(){
    string name;
    int nameSize = 0;
    cout<<"Enter Your Sequence: "; //Out putting Enter Your Sequence
    getline(cin,name); //taking a string for the name of the user
    while (name[nameSize]!= '\0'){ // using this while loop replicating the size function
        nameSize ++; //Incrementing nameSize with 1 When a character is found
    }
    for(int i=0;i<nameSize; i = i +2) // looping for checking is i less then the nameSize
    {
        for(int j=i+1;j<nameSize;j++){ //loop to give spaces
            cout<<" ";
        }
        for(int n=0;n<=i;n++){
            cout<<name[n]<<" "; // outputting the  name
        }
        cout<<endl;
    }
    getch();
}