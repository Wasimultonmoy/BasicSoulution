#include <iostream>

using namespace std;
int main()
{
    int NumberItem, QuantitiesItem, PriceItem, TotalPrice = 0;

    cout << "Welcome to Hentai shop" << endl;
    cout << "Tell me how many items you have buy: ";
    cin >> NumberItem;
    for(int i = 1; i <= NumberItem; i ++)
    {
        cout << "Tell me the Quantities of item " << i << ": ";
        cin >> QuantitiesItem;
        cout << endl;
        cout << "Tell me the price of the item " << i << ": ";
        cin >> PriceItem;
        cout << endl;

        TotalPrice = QuantitiesItem * PriceItem;
    }
    cout << "Total price is: " << TotalPrice << "tk" << endl;
    return 0;
}