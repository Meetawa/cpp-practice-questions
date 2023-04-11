#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << "All Even Numbers : " << endl;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}