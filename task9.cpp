#include <iostream>
using namespace std;
main()
{
    float budget;
    string category;
    int number;
    cout << "enter budget";
    cin >> budget;
    cout << "enter category: ";
    cin >> category;
    cout << "enter number of people :";
    cin >> number;
    float total;
    float calculate;
    float result;
    float amount;
    if (number <= 4)
    {
        total = (budget * 75) / 100;
        calculate = budget - total;
    }
    else if (number >= 5 && number <= 9)
    {
        total = (budget * 60) / 100;
        calculate = budget - total;
    }
    else if (number >= 10 && number <= 24)
    {
        total = (budget * 50) / 100;
        calculate = budget - total;
    }
    else if (number >= 25 && number <= 49)
    {
        total = (budget * 40) / 100;
        calculate = budget - total;
    }
    else if (number >= 50)
    {
        total = (budget * 25) / 100;
        calculate = budget - total;
    }
    if (category == "normal")
    {
        result = number * 249.99;
    }
    if (category == "vip")
    {
        result = number * 499.99;
    }
    if (result < calculate)
    {
        amount = calculate - result;
        cout << "yes!you have" << amount << "QR left" << endl;
    }
    if (result > calculate)
    {
        amount = result-calculate;
        cout << "not enough money! you need" << amount << "QR"<< endl;
    }
}
