#include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");
    double k, b, x;
    cout << "finding the root k*x + b = 0" << endl;
    cout << "enter k and enter b \n";
    cin >> k >> b;

    if((k == 0) && (b != 0))
    {
        cout << "no roots" << endl;
    }
    else
    {
        x = -b/k;
        cout << "x = " << x << endl;
    }

    if((k == 0) && (b == 0))
    {
        cout << "x - любое" << endl;
    }

    return 0;
}
