#include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");
    cout << " ��������� ��� ������� ����������� ��������� ����: a*x*x + b*x + c = 0 \n";
    double a, b, c, x;
    cout << " enter a and enter b and enter c \n";
    cin >> a >> b >> c; ///����� � - b ������ b - c

    if (a==0)
    {
        if (b != 0 )
        {
            x=-c/b;
            cout << " x = " << x << endl;
        }
        else if (c != 0)
        {
            cout << " ������ ��������� �� �����!" << endl;
        }
        else
        {
            cout << " x - ����� " << endl;
        }
    }

    return 0;
}
