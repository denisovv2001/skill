#include "InvestFund.h"
#include <iostream> ///< ����������� ���������� ���������� ����� ������
InvestFund::InvestFund()
{
    //ctor
}

InvestFund::InvestFund(int month, int stepSize, double conjunctScen)
{
    lastMonth = month; // ���� ������������� (12 <= m <= 30)
    this->stepSize = stepSize; // ����������� �������� ����
    conjuncture = conjunctScen; // �������� ����������
}

InvestFund::~InvestFund()
{
    //dtor
}

// ��������� ��� ��������
void InvestFund::setTotalMoney(double newMoney)
{
    totalMoney = newMoney;
}

// ������ ��� ��������
double InvestFund::getTotalMoney() const
{
    return totalMoney;
}
