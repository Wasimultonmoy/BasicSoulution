#include <iostream>

using namespace std;
int main()
{
    int numCourse = 5, totalMarks = 0;
    int marks[5];
    double avgMarks;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter your marks for course" << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    avgMarks = (double)totalMarks / numCourse;



    for( int i = 0; i < numCourse; ++i )
    {
        cout << " Course" << i + 1 << " ";
        if (marks[i] >= 90)
        {
            cout << "A";
        }
        else if(marks[i] >= 80)
        {
            cout << "B";
        }
        else if (marks[i] >= 70)
        {
            cout << "C";
        } else {
            cout << "F";
        }

    }
    cout << endl;
    cout << "Average Marks: " << avgMarks << endl;
    return 0;
}