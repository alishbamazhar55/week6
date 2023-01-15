#include <iostream>
using namespace std;
float checkcost(string city,string product,int quantity);
main()
{
    string city;
    string product;
    int quantity;
    float result;
    cout << "enter city :";
    cin >> city;
    cout << "enter product :";
    cin >> product;
    cout << "enter quantity :";
    cin >> quantity;
   result= checkcost(city,product,quantity);
   cout << result;
}
float checkcost(string city,string product,int quantity)
{
    float total;
    if (city=="sofia")
    {
        if(product=="coffee")
         total=0.50*quantity;
    else if(product=="water")
         total=0.80*quantity;
    else if(product=="beer")
         total=1.20*quantity;
    else if(product=="sweets")
         total=1.45*quantity;
    else if(product=="peanuts")
         total=1.60*quantity;
     }
     if (city=="plovdiv")
     {
        if(product=="coffee")
         total=0.40*quantity;
    else if(product=="water")
         total=0.70*quantity;
    else if(product=="beer")
         total=1.15*quantity;
    else if(product=="sweets")
         total=1.30*quantity;
    else if(product=="peanuts")
         total=1.50*quantity;
     }
     if (city=="varna")
     {
        if(product=="coffee")
         total=0.45*quantity;
    else if(product=="water")
         total=0.70*quantity;
    else if(product=="beer")
         total=1.10*quantity;
    else if(product=="sweets")
         total=1.35*quantity;
    else if(product=="peanuts")
         total=1.55*quantity;
     }
     return total;

 
}
