#include <iostream>
using namespace std;
int main()
{
    double StateTax, CountryTax, TotalTax, TotalSales, Sales = 95000;
    cout << "Total sales: " << Sales << endl;
    double StateTaxRate = 0.04;
    StateTax = Sales * StateTaxRate;
    cout << "Sate Tax: " << StateTax <<endl;
    double CountryTaxRate = 0.02;
    CountryTax = Sales * CountryTaxRate;
    cout << "Country Tax: " << CountryTax << endl;
    TotalTax = StateTax + CountryTax;
    cout << "Total Tax: " << TotalTax << endl;
    TotalSales = Sales - TotalTax;
    cout << "Eraings after paying taxes: " << TotalSales << endl;

    return 0;
}