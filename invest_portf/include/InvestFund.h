#ifndef INVESTFUND_H
#define INVESTFUND_H
#include <list>

class InvestFund // ����������
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
        double profit; //�������
        double incomeTax; //����� �� �������
        std::list<double> briefcase{ 100/*�����*/, 0/*����������*/, 100/*���� % */}; // ��������
        int currentMonth = 1; // ������� �����
        double conjuncture = 1; // ����������
        double fundExpenses = 0; //������� �����
        double restructuring; // ����������������
        double sum = 100; // �����
        double profitability = 0; // ����������
        double risk = 100; // ���� � %
    private:
        double totalMoney = 10; //����� �������
        int lastMonth; // ����� ���������� ������
        int stepSize = 1; // ���
};

#endif // INVESTFUND_H
