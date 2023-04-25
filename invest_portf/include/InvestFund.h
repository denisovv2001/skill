#ifndef INVESTFUND_H
#define INVESTFUND_H
#include <list>

class InvestFund // инвестфонд
{
    public:
        InvestFund();
        InvestFund(const InvestFund& A);
        InvestFund(int month, int stepSize, double conjunctScen);
        virtual ~InvestFund();
        friend void print(const InvestFund& pnt);
        void setTotalMoney(double newMoney);
        double getTotalMoney() const;

    protected:
        double profit; //прибыль
        double incomeTax; //налог на прибыль
        std::list<double> briefcase{ 100/*сумма*/, 0/*доходность*/, 100/*риск % */}; // портфель
        int currentMonth = 1; // текущий мес€ц
        double conjuncture = 1; // коньюктура
        double fundExpenses = 0; //расходы фонда
        double restructuring; // реструктуризаци€
        double sum = 100; // сумма
        double profitability = 0; // доходность
        double risk = 100; // риск в %
    private:
        double totalMoney = 10; //всего средств
        int lastMonth; // номер последнего мес€ца
        int stepSize = 1; // шаг
};

#endif // INVESTFUND_H
