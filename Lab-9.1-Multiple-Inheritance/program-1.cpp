#include <iostream>
#include <cstring>
using namespace std;
// CustomerDetails Class
class CustomerDetails
{
protected:
    string cusName;
    string cusTelNum;
    string cusNationalId;

public:
    void setCusName(string name)
    {
        this->cusName = name;
    }
    void setCusTelNum(string num)
    {
        this->cusTelNum = num;
    }
    void setCusID(string id)
    {
        this->cusNationalId = id;
    }
    void displayCusDetails()
    {
        cout << "Customer's Name  :" << this->cusName << endl;
        cout << "Customer's Telephone  :" << this->cusTelNum << endl;
        cout << "Customer's nid  :" << this->cusNationalId << endl;
    }
};

// JourneyDetails Class

class JourneyDetails
{
protected:
    string travelDate;
    string travelTo;
    string travelFrom;
    int distance;

public:
    void setTravelDate(string date)
    {
        this->travelDate = date;
    }
    void setTravelTo(string trTo)
    {
        this->travelTo = trTo;
    }
    void setTravelFrom(string tfFr)
    {
        this->travelFrom = tfFr;
    }
    void setDistance(int d)
    {
        this->distance = d;
    }
    void showJourneyDetails()
    {
        cout << "Journey Date  :" << this->travelDate << endl;
        cout << "Journey To  :" << this->travelTo << endl;
        cout << "Journey From  :" << this->travelFrom << endl;
        cout << "Journey Distance  :" << this->distance << endl;
    }
};

// TicketIssue Class

class TicketIssue : public CustomerDetails, public JourneyDetails
{
protected:
    float ticketPrice;
    float charge;
    float perKiloPrice;

public:
    void setperKiloPrice(float perKiloPrice)
    {
        this->perKiloPrice = perKiloPrice;
    }
    void setCharge()
    {
        if (this->distance < 100)
        {
            this->charge = 20;
        }
        else if (this->charge < 200)
        {
            this->charge = 10;
        }
        else
        {
            this->charge = 0;
        }
    }
    void printTicket()
    {
        float beforeChangesPrice = (this->distance * (this->perKiloPrice));
        setCharge();
        this->ticketPrice = beforeChangesPrice +(beforeChangesPrice * (this->charge/100));
        cout << "Per kilometer Price  :" << this->perKiloPrice << endl;
        cout << "Price before changes applied " << beforeChangesPrice << endl;
        cout << "After " << this->charge << "% charges " << this->ticketPrice << endl;
        cout <<  "****** End of Ticket *******" << endl;
    }
};
int main()
{
    // customer 1
    TicketIssue cus1;
    cus1.setCusName("Mohammad Nur");
    cus1.setCusTelNum("018500000");
    cus1.setCusID("12345687895");
    cus1.setTravelDate("6/04/2021");
    cus1.setTravelTo("Dhaka");
    cus1.setTravelFrom("Cox's Bazar");
    cus1.setDistance(99);
    cus1.setperKiloPrice(5.5);
    cus1.displayCusDetails();
    cus1.showJourneyDetails();
    cus1.printTicket();
    cout << endl;
    // customer 2
    TicketIssue cus2;
    cus2.setCusName("Tanjim Rahman");
    cus2.setCusTelNum("018-xxxxxxx");
    cus2.setCusID("9876543211");
    cus2.setTravelDate("10/04/2021");
    cus2.setTravelTo("Chittagong");
    cus2.setTravelFrom("Cox's Bazar");
    cus2.setDistance(99);
    cus2.setperKiloPrice(5.5);
    cus2.displayCusDetails();
    cus2.showJourneyDetails();
    cus2.printTicket();

    return 0;
}