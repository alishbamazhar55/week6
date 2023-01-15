#include<iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    float speed;
    string result;
    cout << "enter speed : ";
    cin >> speed;
    result=checkspeed( speed);
cout << result;

}
string checkspeed(float speed)
{
    string race;
    if (speed<=10)
    {
        race="slow";
    }
    else if (speed>10&&speed<=50)
    {
        race="average";
    }
      else if (speed>50&&speed<=150)
    {
        race="fast";
    }
      else if (speed>150&&speed<=1000)
    {
        race="ultra fast";
    } 
    else
    {
        race="extremely fast";
    }
    return race;
}