#include <iostream>

using namespace std;
int main()
{
    int mat1[5][5], mat2[5][5], matSub[5][5];
    int rows, cols;
    cout << "Welcome to Matrix Cal" <<endl;
    cout << "Enter The Row Numbers: ";
    cin >> rows;
    cout << "Enter The Colum Numbers: ";
    cin >> cols;
    //Taking Input for 2 Matrix
    cout << "1st matrix Input: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << "Matrix1[" << i << "][" << j << "]:";
            cin >> mat1[i][j];
        }
    }
    cout << "2nd matrix Input: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << "Matrix2[" << i << "][" << j << "]:";
            cin >> mat2[i][j];
        }
    }
    //Subtracting codes
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            matSub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    //outputing all matrixs
    for(int i=0; i <rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout <<matSub[i][j] << " ";
        }
        cout << endl;
    }
}