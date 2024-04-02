#include <iostram>

using namespace std;
int main()
{
    int mat1[5][5], mat2[5][5], matMul[5][5];
    int row1, row2, col1, col2;
    cout << "Enter The 1st row: ";
    cin >> row1;
    cout << "Enter The 2nd row: ";
    cin >> row2;
    cout << "Enter The 1st col: ";
    cin > col1;
    cout << "Enter The 2nd col: ";
    cin >> col2;
    while (col1 !=row2)
    {
        cout << "Error. Your 1 matrix Colum isn't equal to 2nd matrix Row Number" << endl;
        cout << "Please Enter 1st matrix Row & col again: ";
        cin >> row1 >> col1;
        cout << "Please Enter 2nd matrix Row & col again: ";
        cin >> row2 >> col2;
    }
    cout << "1st Matrix Input: " << end;
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cout << "Matrix1[" << i << "][" << j <<"]:";
            cin >> mat1[i][j];
        }
    }
    cout << "2nd Matrix Input: " << end;
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            cout << "Matrix2[" << i << "][" << j <<"]:";
            cin >> mat2[i][j];
        }
    }
    //Matrix Multiplication
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            matMul[i][j] = 0;
            for(int k=0; k<col2; k++)
            {
                matMul[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
    cout << "1st Matrix is : " << endl;
    for(int i=0; i <row1; i++)
    {
        for(int j =0; j<col1; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "2nd Matrix is : " << endl;
    for(int i=0; i <row2; i++)
    {
        for(int j =0; j<col2; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Multiplication" << endl;
    for(int i=0; i <row1; i++)
    {
        for(int j =0; j<col1; j++)
        {
            cout << matMul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}