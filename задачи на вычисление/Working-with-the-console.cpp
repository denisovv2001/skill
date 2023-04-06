#include <iostream>

int main()
{
    std::cout << "Silence is golden" << std::endl;

    std::cout << "\nThursday\napril\nVasiliy\n\n";

    ///ступеньки из нулей
    int i = 0;
    int number = 0;
    while(i < 5)
    {
        while(number <= i)
        {
            std::cout << 0;
            number = number + 1;
        }
        number = 0;
        std::cout << std::endl;
        i++;
    }

    ///прямоугольник
    std::cout << std:: endl;
    char symbol = 'A';
    int hight = 5;
    int width = 8;
    int j = 0;
    int k = 0;
    while(j != hight)
    {
        k = 0;
        while(k != width)
        {
            std::cout << symbol;
            k++;
        }
        std::cout << std::endl;
        j++;
    }

    /*
    1000001000001
    0100010100010
    0010100010100
    0001000001000
    */
    return 0;
}
