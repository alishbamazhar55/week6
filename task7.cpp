#include <iostream>
using namespace std;
float lowestprice(int kilometers,string time);
main()
{
    int kilometers;
    string time;
    float result;
    cout << "enter kilometers: ";
    cin >> kilometers;
    cout << "enter time";
    cin >> time;
   result=  lowestprice( kilometers,time);
    cout << result;
}
float lowestprice(int kilometers,string time)
{
    float total;
    if (time=="day"&& kilometers < 20)
    {
        total=(kilometers*0.79)+0.70;
    }
   else if (time=="night"&& kilometers < 20)
    {
        total=(kilometers*0.90)+0.70;
    }
  else if ( kilometers < 100)
    {
        total=kilometers*0.09;
    }
    else if ( kilometers > 100)
    {
        total=kilometers*0.06;
    }
    return total;
}
