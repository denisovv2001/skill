#include <iostream>
#include "InvestFund.h" ///< подключение файла InvestFund.h
#include "CInvestment.h" ///< подключение файла CInvestment.h

using namespace std;

// выводит в консоль интерфейс
void print(const InvestFund& pnt) ///< дружественная функция (имеет прямой доступ к полям объекта)
{
    cout << endl;
    std::cout << pnt.totalMoney << " - totalMoney\n";
    cout << pnt.currentMonth << " - current Month\n";
    cout << pnt.conjuncture << " - conjuncture scenario\n";
    cout << pnt.fundExpenses << " - fund expenses for " << pnt.currentMonth << " month\n";
    cout << "print briefcase:\n"; // портфель
    cout << "\t" << pnt.sum << " - sum\n";
    cout << "\t" << pnt.profitability << " - profitability\n";
    cout << "\t" << pnt.risk << " - risk" << endl;
    ///TODO
}

int main()
{
    /**
    ввод
    срок моделирования (12 <= m <= 30)
    шаг (1 - месяц)
    сценарий коньюктуры

    шаг игры (вывод):
    суммарный капитал
    общий доход
    доход по статьям портфеля
    информация о внешней коньюктуре (цена акций, процентные ставки депоз)
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
