#include <iostream>

using namespace std;
int main()
{
    int number[5], tempNum;
    for(int i = 0; i < 5; i++)
    {
         cout << "tell me the number" << i + 1 << ": ";
         cin >> number[i];
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = i +1; j < 5; j++)
        {
            if(number[i] > number[j])
            {
                tempNum = number[i];
                number[i] = number[j];
                number[j] = tempNum;
            }
        }
    }
    cout << "2nd smallest number" << number[1] << endl;
    return 0;
}