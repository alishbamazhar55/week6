#include <iostream>
using namespace std;
char calculategrade(int num);
main()
{
    int num;
    char result;
    cout << "enter number: ";
    cin >> num;
    result=calculategrade( num);
 cout << result;
}
char calculategrade(int num)
{ 
    char grade;
    if(num > 85)
    {
    grade='A';
    } 
else if (num <85 && num >=81)
 {
    grade='B';
 }
 return grade;
 }