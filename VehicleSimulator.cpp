//vehicle simulator
#include<iostream>
#include<string>
using namespace std;
//Abstract class
class Vehicle{
    private:
        string regNumber;
        string name;

    public:
        virtual void start(){cout<<"Key Start"<<endl;}
        virtual void stop(){cout<<"Key Stop"<<endl;}
        virtual void drive() = 0;//pure virtual function, non-implemented
};

class Car:public Vehicle{
    public:
    void start() override {cout<<"Push Button Start"<<endl;}
    void stop() override {cout<<"Push Button Stop"<<endl;}
    void drive(){cout<< "Car drive"<<endl;}//implementation of non-implemented function in Class Vehicle
};

class Truck:public Vehicle{
    public:
    void drive(){cout<<"Truck drive"<<endl;}
};

class VehicleSimulator{
    Vehicle *v;//dependency injection
    public:
    VehicleSimulator(Vehicle *vArg):v{vArg}{}//
        // void start(Vehicle* v){v->start();}
        // void stop(vehicle* v){v->stop();}
        // void drive(vehicle* v){v->drive();}
        void start(){v->start();}
        void stop(){v->stop();}
        void drive(){v->drive();}
};

int main()
{
    Car vehicle1;
    Truck vehicle2;
    VehicleSimulator simulator1(&vehicle1);
    VehicleSimulator simulator2(&vehicle2);
    simulator1.start();
    simulator1.drive();
    simulator1.stop();

    simulator2.start();
    simulator2.drive();
    simulator2.stop();
}