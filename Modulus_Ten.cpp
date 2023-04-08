#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the value which you need to find modules of ten" << endl;
    cin >> x;
    int mod = x % 10;
    cout << mod;

    return 0;
}