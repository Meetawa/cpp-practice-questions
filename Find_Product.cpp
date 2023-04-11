#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the non negative number " << endl;
    cin >> n;
    cout << "Print " << n << " factorial" << endl;
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Product of all Factorial Number" << endl;
    int product;
    for (int i = 0; i < n; i++)
    {
        product = i * (i + 1);
    }
    cout << product;
}