#include <iostream>
using namespace std;
int amount(string day, string month, int price);
main()
{
    string day;
    string month;
    int price;
    int result;
    cout << " enter price: ";
    cin >> price;
    cout << " enter month: ";
    cin >> month;
    cout << "enter day : ";
    cin >> day;
    result = amount(day, month, price);
    cout << result;
}
int amount(string day, string month, int price)
{
    int totalamount;
    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        totalamount = price - price * 10 / 100;
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        totalamount = price - price * 5 / 100;
        
    }
    else
    {
        totalamount = price;
    }
    return totalamount;
}
