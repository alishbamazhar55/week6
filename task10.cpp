#include <iostream>
using namespace std;
bool greaternumber(int a, int b, int c);
main()
{
    int a;
    int b;
    int c;
    int result;
    cout << "enter first number :";
    cin >> a;
    cout << "enter 2nd number :";
    cin >> b;
    cout << "enter 3rd number :";
    cin >> c;
    result = greaternumber(a, b, c);
    if (result == true)
    {
    cout << "yes" << endl;
    }
    if (result == false)
    {
        cout << "no"<< endl;
    }
}
bool greaternumber(int a, int b, int c)
  {
    if (a == b && a == c && b==c)
    {
     return true;
    }
     else 
     {
     return false;
    }
    return 0;
  }