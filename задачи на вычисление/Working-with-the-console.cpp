#include <iostream>

int main()
{
    std::cout << "Silence is golden" << std::endl;

    std::cout << "\nThursday\napril\nVasiliy\n\n";

    ///steps of zeros
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

    ///rectangle
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

    ///drawing the `w` character from `*`
    std::cout << std::endl;
    int h = 13;
    int w = 4;
    int left = 0;
    int centreleft = 6;
    int centreright = 7;
    int right = 12;
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < h; j++)
        {
            if(left == i && left == j)
            {
                std::cout << "*";
                left++;
            }
            else if(centreleft == j)
            {
                std::cout << "*";
                centreleft--;
            }
            else if(i > 0 && centreright == j && centreright == (i + 6))
            {
                std::cout << "*";
                centreright++;
            }
            else if(right == j)
            {
                std::cout << "*";
                right--;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "1 + 2 - 4 = " << 1+2-4 << std::endl;

    return 0;
}
