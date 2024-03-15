#include <iostream>

using namespace std;
int main()
{
    int n;
    float sum =0;
    cout << "Tell me the Term Number: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum += (float)1/(i*i);
    }
    cout<<"SUM = "<<sum;
}