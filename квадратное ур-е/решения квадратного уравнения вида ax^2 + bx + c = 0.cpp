#include<cmath>
#include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");
    cout << " Программа для решения квадратного уравнения вида: a*x*x + b*x + c = 0 \n";
    double a, b, c, x, x1, x2, D;
    cout << " Enter a and enter b and enter c \n";
    cin >> a >> b >> c;
    D = b*b-4*a*c;

    if (a == 0)
    {
        if (b != 0 )
        {
            x = -c/b;
            cout << " x = " << x << endl;
        }
        else if (c != 0)
        {
            cout << " Корней уравнение не имеет!" << endl;
        }
        else
        {
            cout << " x - любое. " << endl;
        }
    }
    else
    {
        if (D < 0)
        {
            cout << " Корней нет." << endl;
        }
        else if (D > 0)
        {
            cout << " Уравнение имеет два корня x1 и x2: " << endl;
            sqrt(D);
            x1= -b/(2*a) + sqrt(D)/(2*a);
            x2= -b/(2*a) - sqrt(D)/(2*a);
            cout << "x1=" << x1;
            cout << "x2=" << x2;
        }
        else {
            cout << "Уравнение имеет 2 корня, которые совпадают." << endl;
            x= -b/(2*a);
            cout << " x= " << x;
        }
    }

    return 0;
}
