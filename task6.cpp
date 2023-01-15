#include <iostream>
using namespace std;
float totalimcome(string screen, int rows, int columns);
main()
{
    string screen;
    int rows;
    float result;
    int columns;
    cout << "enter screen name : ";
    cin >> screen;
    cout << " enter rows:";
    cin >> rows;
    cout << " enter columns ";
    cin >> columns;
    result = totalimcome(screen, rows, columns);
    cout << result;
}
float totalimcome(string screen, int rows, int columns)
{
    float total;
    if (screen == "premiere")
    {
        total = rows * columns * 12.0;
    }
    else if (screen == "normal")
    {
        total = rows * columns * 7.5;
    }
    else if (screen == "discount")
    {
        total = rows * columns * 5.0;
    }
    return total;
}
