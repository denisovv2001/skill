    #include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "");
    cout << " ��������� ��� ������� ��������� ��������� ����: k*x + b = 0 \n";
    double k, b, x;
    cout << " enter k and enter b \n";
    cin >> k >> b;


    if (k == 0 && b != 0)
    {
        cout << " ������ ��������� �� �����!" << endl;
    }
    else if (k != 0 )
    {
        x=-b/k;
        cout << " x = " << x << endl;
    }
    if (k == 0 && b == 0)
    {
        cout << " x - ����� " << endl;
    }

    return 0;
}
