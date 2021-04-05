/** Write a class called as CustomerDirectory. The class will have the following private member data/attributes */
#include <iostream>
#include <cstring>
using namespace std;
class CustomerDirectory
{
private:
    string cusFirstName;
    string cusLastName;
    string cusDoB;
    string cusTelNum;
    string cusCountry;

public:
    void setCusInfo(string cusFirstName,
                    string cusLastName, string cusDoB, string cusTelNum,
                    string cusCountry)
    {
        this->cusFirstName = cusFirstName;
        this->cusLastName = cusLastName;
        this->cusDoB = cusDoB;
        this->cusTelNum = cusTelNum;
        this->cusCountry = cusCountry;
    }
    void getCusInfo()
    {
        cout << "Customer First name \t :" << this->cusFirstName << endl;
        cout << "Customer last name \t :" << this->cusLastName << endl;
        cout << "Customer DOB \t\t :" << this->cusDoB << endl;
        cout << "Customer Telephone \t :" << this->cusTelNum << endl;
        cout << "Customer Country \t :" << this->cusCountry << endl;
    }
};

int main()
{
    CustomerDirectory cus101;
    cus101.setCusInfo("Mohammad","Nur","dd/mm/yyy","0185-xxxxxxx","Saudi Arabia");
    cus101.getCusInfo();
    CustomerDirectory cus102;
    cout << endl;
    cus102.setCusInfo("Tanjim","Rahman","dd/mm/yyy","0184-xxxxxxx","Bangladesh");
    cus102.getCusInfo();
    return 0;
}