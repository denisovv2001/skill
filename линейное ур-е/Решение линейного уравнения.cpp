    #include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");
    cout << " ѕрограмма дл€ решени€ линейного уравнени€ вида: k*x + b = 0 \n";
    double k, b, x;
    cout << " enter k and enter b \n";
    cin >> k >> b;


    if (k == 0 && b != 0)
    {
        cout << " корней уравнение не имеет!" << endl;
    }
    else if (k != 0 )
    {
        x=-b/k;
        cout << " x = " << x << endl;
    }
    if (k == 0 && b == 0)
    {
        cout << " x - любое " << endl;
    }

    return 0;
}
