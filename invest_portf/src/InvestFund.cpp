#include "InvestFund.h"
#include <iostream> ///< Подключение встроенной библиотеки ввода вывода
InvestFund::InvestFund()
{
    //ctor
}

InvestFund::InvestFund(int month, int stepSize, double conjunctScen)
{
    lastMonth = month; // срок моделирования (12 <= m <= 30)
    this->stepSize = stepSize; // присваиваем значение шагу
    conjuncture = conjunctScen; // сценарий коньюктуры
}

InvestFund::~InvestFund()
{
    //dtor
}

// заполнить все средства
void InvestFund::setTotalMoney(double newMoney)
{
    totalMoney = newMoney;
}

// узнать все средства
double InvestFund::getTotalMoney() const
{
    return totalMoney;
}
