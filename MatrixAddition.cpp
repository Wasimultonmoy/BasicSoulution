#include <iostream>

using namespace std;
int main()
{
    int arr1[5][5], arr2[5][5], arrAdd[5][5];
    int r, c;

    cout << "Please Give the row number(Max 5): ";
    cin >> r;
    cout << "Please Give the colum Number(Max 5): ";
    cin >> c;
    cout << "1st Matrix input" << endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "Matrix1 [" << i << "]" << "[" << j << "]:";
            cin >> arr1[i][j];
        }
    }
    cout << "Matrix 2 Input" << endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "Matrix2 [" << i << "]" << "[" << j << "]:";
            cin >> arr2[i][j];
        }
    }
    for(int i=0; i <r; i++)
    {
        for(int j=0; j < c; j++)
        {
            arrAdd[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "1st Matrix is : " << endl;
    for(int i=0; i < r; i++)
    {
        for(int j =0; j<c; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "2nd Matrix is : " << endl;
    for(int i=0; i < r; i++)
    {
        for(int j =0; j<c; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Addition of The Matrix" << endl;
    for(int i=0; i <r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout <<arrAdd[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}