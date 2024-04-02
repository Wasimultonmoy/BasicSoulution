#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2;

    // Input for the size of the first matrix
    cout << "Enter the number of rows for the 1st matrix: ";
    cin >> row1;
    cout << "Enter the number of columns for the 1st matrix: ";
    cin >> col1;

    // Input for the size of the second matrix
    cout << "Enter the number of rows for the 2nd matrix: ";
    cin >> row2;
    cout << "Enter the number of columns for the 2nd matrix: ";
    cin >> col2;

    // Check if matrix multiplication is possible
    while (col1 != row2)
    {
        cout << "Error: The number of columns in the 1st matrix must be equal to the number of rows in the 2nd matrix." << endl;
        cout << "Please re-enter the sizes." << endl;

        // Re-input sizes
        cout << "Enter the number of rows for the 1st matrix: ";
        cin >> row1;
        cout << "Enter the number of columns for the 1st matrix: ";
        cin >> col1;
        cout << "Enter the number of rows for the 2nd matrix: ";
        cin >> row2;
        cout << "Enter the number of columns for the 2nd matrix: ";
        cin >> col2;
    }

    int mat1[row1][col1], mat2[row2][col2], matMul[row1][col2];

    // Input for the first matrix
    cout << "Enter elements for the 1st matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "Matrix1[" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements for the 2nd matrix:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "Matrix2[" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            matMul[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                matMul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Output the matrices and their multiplication
    cout << "1st Matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "2nd Matrix:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Multiplication Result:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matMul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
