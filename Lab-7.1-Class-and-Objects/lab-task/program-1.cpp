/** Write a class named as BankAccount. The class has following member data and member functions. */
#include <iostream>
#include <cstring>
using namespace std;

class BankAccount
{
private:
    string CusName;
    string CusID;
    float accbalance;
    float dep;
    float withdraw;

public:
    void setCusDetails(string CusName, string CusID, float accbalance)
    {
        this->CusName = CusName;
        this->CusID = CusID;
        this->accbalance = accbalance;
    }
    float checkBalance()
    {
        return this->accbalance;
    }
    float depositMoney(float amount)
    {
        this->dep = amount;
        this->accbalance += amount;
        return this->dep;
    }
    float withdrawMoney(float amount)
    {
        this->withdraw = amount;
        if (amount >= this->accbalance)
        {
            cout << "You don't have enough money to withdraw";
            return 0;
        }
        this->accbalance -= this->withdraw;
        return this->withdraw;
    }
    void showInfo()
    {
        cout << "Name: " << this->CusName << endl;
        cout << "ID: " << this->CusID << endl;
        cout << "balance: " << this->accbalance << endl;
    }
};
int main()
{
    BankAccount customer1, customer2;
    customer1.setCusDetails("Mohammad Nur","01859900333",600000);
    customer1.checkBalance();
    customer1.depositMoney(50000.00);
    customer1.withdrawMoney(20000.00);
    customer2.setCusDetails("Jubair","24589856587",50000);
    customer2.checkBalance();
    customer2.depositMoney(15000.00);
    customer2.withdrawMoney(5000.00);
    customer1.showInfo();
    customer2.showInfo();
    return 0;
}