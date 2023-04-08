#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int h, m; // h stands for hour and m for minutes
    cout << "enter the test case : " << endl;
    cin >> t;
    while (t--)
    {
        cout << "enter the hour";
        cin >> h;
        cout << "enter the minutes";
        cin >> m;
        // TODO : angle finding formula's
        double h_angle = (60 * h + 1 * m) / 2;
        double m_angle = (h * 0 + m * 6);
        double angle = abs(h_angle - m_angle);
        if (angle <= 180)
        {
            cout << angle;
            cout << endl;
        }
        else
        {
            cout << (360 - angle) << endl;
        }
    }
    return 0;
}