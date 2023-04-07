#include <iostream>

/// ѕрограмма считает произведение двух double чисел

using namespace std;


int main()
{
    double a,b; //об€вление а и б
    cout << "input a and b: ";
    cin >> a >> b; //данные с клавиатуры
    double s = a * b;

    cout << "multiple = " << a << " * " << b << " = " << s << endl;

    return 0;
}
