#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "enter the all three sides" << endl;
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3 && side3 == side1)
    {
        cout << "its an triangle is equilateral" << endl;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        cout << "it is a isosceles" << endl;
    }
    else
    {

        cout << "its a scalene" << endl;
    }
    return 0;
}