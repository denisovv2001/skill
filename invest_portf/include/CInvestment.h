#ifndef CINVESTMENT_H
#define CINVESTMENT_H
#include <iostream>
#include "InvestFund.h"

using namespace std;

class CInvestment : public InvestFund //����� �������� ��������� ����� ����������
{
    public:
        CInvestment();
        virtual ~CInvestment();
        void updateBriefcase() //��������� �������� ������ ����������
        {
            sum = 300;
            profitability = 50; // ���������� ������������ �������
            risk = 0;
        }

    protected:

    private:
};

#endif // CINVESTMENT_H
