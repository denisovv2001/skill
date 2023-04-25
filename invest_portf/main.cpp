#include <iostream>
#include "InvestFund.h" ///< ����������� ����� InvestFund.h
#include "CInvestment.h" ///< ����������� ����� CInvestment.h

using namespace std;

// ������� � ������� ���������
void print(const InvestFund& pnt) ///< ������������� ������� (����� ������ ������ � ����� �������)
{
    cout << endl;
    std::cout << pnt.totalMoney << " - totalMoney\n";
    cout << pnt.currentMonth << " - current Month\n";
    cout << pnt.conjuncture << " - conjuncture scenario\n";
    cout << pnt.fundExpenses << " - fund expenses for " << pnt.currentMonth << " month\n";
    cout << "print briefcase:\n"; // ��������
    cout << "\t" << pnt.sum << " - sum\n";
    cout << "\t" << pnt.profitability << " - profitability\n";
    cout << "\t" << pnt.risk << " - risk" << endl;
    ///TODO
}

int main()
{
    /**
    ����
    ���� ������������� (12 <= m <= 30)
    ��� (1 - �����)
    �������� ����������

    ��� ���� (�����):
    ��������� �������
    ����� �����
    ����� �� ������� ��������
    ���������� � ������� ���������� (���� �����, ���������� ������ �����)
    */
    InvestFund myfund;
    double totalMoney = 540;
    myfund.setTotalMoney(totalMoney);
    cout << "Total money: " << myfund.getTotalMoney() << endl;

    myfund.setTotalMoney(400);
    print(myfund);

    CInvestment myfund2;
    print(myfund2);
    myfund2.updateBriefcase();
    print(myfund2);

    return 0;
}
