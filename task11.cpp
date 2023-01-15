#include <iostream>
using namespace std;
int volleyball (string year,int holidays,int weekends);
main()
{
    string year;
    int holidays;
    int weekends;
    int final;
    cout << "enter year";
    cin >> year;
    cout << "enter holidays";
    cin >> holidays;
    cout << "enter weekends";
    cin >> weekends;
   final = volleyball ( year,holidays,weekends);
   cout << final;
}
int volleyball (string year,int holidays,int weekends)
{ 
    float calculate;
    float result;
    float total;
    float value;
    float amount;
    float value2;
    if (year=="normal")
    {
        calculate=holidays*0.6;
        result = 48-weekends;
        value=result*0.75;
        total=calculate+weekends+value;
        return total;
    
    }
     if (year=="leap")
    {
        calculate=holidays*0.6;
        result = 48-weekends;
        value=result*0.75;
        total=calculate+weekends+value;
        amount = total*0.15;
        value2=amount+total;
        return value2;
    
    }
}