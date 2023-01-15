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
 else if (num < 81 && num >=70)
 {
    grade='C';
 }
 else if (num <70 && num >=61)
 {
    grade='D';
 }
 else if (num <61 && num >=51)
 {
    grade='E';
 }
 else  
 {
    grade='F';
 }
 return grade;
 }