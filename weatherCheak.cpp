#include <iostream>
using namespace std;
int main()
{
    int Days;
    cout << "Enter the number of days: ";
    cin >> Days;
    double temp, humidity;
    double avgTemp = 0, avgHumidity = 0;

    for(int i = 1; i <=Days; i++)
    {
        cout << "Enter Temperature of Day" << i  << "(in C): ";
        cin >> temp;
        cout << "Enter Humidity of Day" << i  <<": ";
        cin >> humidity;
        avgTemp = avgTemp + temp;
        avgHumidity = avgHumidity + humidity;
    }
    cout << "Average Temperature in " << Days << "is: " << avgTemp << "C" <<endl;
    cout << "Average Humidity in " << Days << "is: " << avgHumidity << "%" <<endl;
    return 0;
}