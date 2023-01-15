#include <iostream>
using namespace std;
string checktitle(float age, char gender);
main()
{
    float age;
    char gender;
    string result;
    cout << "enter age : ";
    cin >> age;
    cout << "enter gender : ";
    cin >> gender;
    result = checktitle(age, gender);
    cout << result;
}
string checktitle(float age, char gender)
{
    string title;
    if (gender == 'm' && age >= 16)
    {
        title = "Mr.";
    }
    else if (gender == 'm' && age < 16)
    {
        title = "master";
    }
    else if (gender == 'f' && age >= 16)
    {
        title = "Ms.";
    }
    else if (gender == 'f' && age < 16)
    {
        title = "Miss";
    }
    return title;
}
