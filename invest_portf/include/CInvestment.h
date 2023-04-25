#ifndef CINVESTMENT_H
#define CINVESTMENT_H
#include <iostream>
#include "InvestFund.h"

using namespace std;

class CInvestment : public InvestFund //класс вложение наследует класс инвестфонд
{
    public:
        CInvestment();
        virtual ~CInvestment();
        void updateBriefcase() //обновляем портфель новыми значениями
        {
            sum = 300;
            profitability = 50; // доходность определяется заранее
            risk = 0;
        }

    protected:

    private:
};

#endif // CINVESTMENT_H
