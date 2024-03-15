#include <iostream>
using namespace std;
int main()
{
    int numberCake, priceCake = 70, totalPrice;
    float discountPrice;
    cout << "Welcome to Robi shop!!" << endl;
    cout << "Tell me how many cake you want to buy: ";
    cin >> numberCake;
    if(numberCake >= 2)
    {
        cout << "There's a offer Buy 2 GEt one free" << endl;
        cout << "You are getting a free cake" << endl;
    }
    totalPrice = priceCake* numberCake;
    if(totalPrice > 700)
    {
        discountPrice =(float)totalPrice - (totalPrice * 0.08);
        cout << "Congo you got a 8% discount. Your bill after discount is: " << discountPrice;
    } else {
        cout << "Your bill is: " << totalPrice;
    }

    return 0;
}