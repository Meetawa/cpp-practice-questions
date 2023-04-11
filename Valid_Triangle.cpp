#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "enter the three sides of triangle" << endl;
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3)
    {
        cout << "yes its a Valid Triangle";
    }
    else
    {
        cout << "ohh its not a Valid triangle";
    }
    return 0;
}