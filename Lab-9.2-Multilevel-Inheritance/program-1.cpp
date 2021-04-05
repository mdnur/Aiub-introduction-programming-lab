#include <iostream>
#include <cstring>
using namespace std;

class Directory
{
protected:
    string personName;
    string dateOfBirth;

public:
    void setPersonInfo(string pn, string db)
    {
       this->personName = pn;
       this->dateOfBirth = db;
    }
    void displayInfo1()
    {
        cout << "Name =" << personName << endl;
        cout << "DoB =" << dateOfBirth << endl;
    }
};
class NationalDirectory : public Directory
{
protected:
    int personAge;
    string personCity;

public:
    void setPersonAge(int age)
    {
        this->personAge =age;
    }
    void setPersonCity(string city)
    {
       this->personCity = city;
    }
    void displayInfo2()
    {
        cout << "city =" << personAge << endl;
        cout << "Address =" << personCity << endl;
    }
};
class LocalDirectory : public NationalDirectory
{
protected:
    string personAddress;
    string personTelNo;
    string personLocalArea;
    double zipCode;

public:
    void setPersonAddress(string address)
    {
       this->personAddress = address;
    }
    void setPersonTelNo(string telNo)
    {
        this->personTelNo = telNo;
    }
    void setPersonLocalArea(string Larea)
    {
        this->personLocalArea = Larea;
    }
    void setPersonZipcode(double zc)
    {
       this->zipCode = zc;
    }
    void displayInfo3()
    {
        cout << "Address =" << personAddress << endl;
        cout << "Tel =" << personTelNo << endl;
        cout << "Local Area =" << personLocalArea << endl;
        cout << "ZIp code =" << zipCode << endl;
    }
};
class Profession : public LocalDirectory
{
protected:
    string personProfession;
    string personInstitution;
    string personGrade;
    double personSalary;

public:
    void setPersonProfession(string prof)
    {
        this->personProfession = prof;
    }
    void setPersonInstitution(string inst)
    {
        this->personInstitution = inst;
    }
    void setPersonGrade(string Pgrade)
    {
        this->personGrade = Pgrade;
    }
    void setPersonSalary(double s)
    {
        this->personSalary = s;
    }
    void displayInfo4()
    {
        cout << "Profession =" << personProfession << endl;
        cout << "Institution =" << personInstitution << endl;
        cout << "Grade =" << personGrade << endl;
        cout << "Salary =" << personSalary << endl;
    }
};

int main()
{
    Profession person;
    person.setPersonInfo("S Ahmed","24/07/1968");
    person.setPersonAge(45);
    person.setPersonCity("Dhaka");
    person.setPersonCity("House-3, Road 18");
    person.setPersonTelNo("01859900333");
    person.setPersonLocalArea("Gulshan 2");
    person.setPersonZipcode(1211);
    person.setPersonProfession("Lecturer");
    person.setPersonInstitution("AIUB");
    person.setPersonGrade("Band-6");
    person.setPersonSalary(50000);

    person.displayInfo1();
    person.displayInfo2();
    person.displayInfo3();
    person.displayInfo4();
    return 0;
}