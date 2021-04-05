#include <iostream>
#include <cstring>
using namespace std;
class Vehicle
{

public :
 int static vehicleCount;
protected:
    string vehicleName;
   

public:
    void setVehicleName(string vn)
    {
        this->vehicleName = vn;
    }
    int static count()
    {
         vehicleCount +=1;
         return vehicleCount;
    }
    virtual void showVehicle()
    {
        cout << "I am from Vehicle class" << endl;
    }
};
class MotorVehicle :public Vehicle
{
protected:
    string vehicleType;
    int wheels;
    int doors;

public:
    void setMotor(string vt, int wh, int d)
    {
        this->vehicleType = vt;
        this->wheels = wh;
        this->doors = d;
    }
    void showVehicle()
    {
        cout << "vehicleType :" << this->vehicleType << endl;
        cout << "wheels :" << this->wheels << endl;
        cout << "doors :" << this->doors << endl;
    }
};
class Car : public Vehicle
{
protected:
    string name;
    int model;
    string color;

public:
    void setCarInfo(string n, int m, string col)
    {
        this->name = n;
        this->model = m;
        this->color = col;
    }
    void showVehicle()
    {
        cout << "name :" << this->name << endl;
        cout << "model :" << this->model << endl;
        cout << "color :" << this->color << endl;
    }
};
class SUV : public Vehicle
{
protected:
    string name;
    int model;
    string color;
    int engSize;

public:
    void setSUVinfo(string n, int m, string col, int eg)
    {
        this->name = n;
        this->model = m;
        this->color = col;
        this->engSize = eg;
    }
    void showVehicle()
    {
        cout << "Suv Name:" << this->name << endl;
        cout << "model :" << this->model << endl;
        cout << "color :" << this->color << endl;
        cout << "engSize :" << this->engSize << endl;
    }
};

int Vehicle::vehicleCount =1;

/**   Once you develop the classes, write the main(). The main() must contain followings:
1. Calling static method without creating objects.
2. A pointer *v to vehicle class
3. Create objects mv with reference to motorVehicle, car with reference to CAR, suv with
reference to SUV.
4. Use setMotor() method with mv object using .(dot) operator.
5. Pass address of mv to the pointer.
6. Access showVehicle() method by object v.
7. Use setCarInfo() using car object using .(dot) operator.
8. Pass address of car to pointer.
9. Access showVehicle()method by object v.
10. Use setSUVInfo() using suv object using .(dot) operator.
11. Pass address of suv to pointer.
12. Access showVehicle() method by object v.
 */
int main()
{
    cout << Vehicle::count() << endl;
    Vehicle *v;

    // Motor Vehicle
    MotorVehicle mv;
    mv.setMotor("Bike",2,0);
    v = &mv;
    v->showVehicle();
    cout << endl;
    // Car Vehicle
    Car car;
    car.setCarInfo("Mercedes-Benz",2021,"black");
    v = &car;
    v->showVehicle();

    cout << endl;
    // SUV 
    SUV suv;
    suv.setSUVinfo("Range Rover",2021,"black",2995);
    v = &suv;
    v->showVehicle();




    return 0;
}