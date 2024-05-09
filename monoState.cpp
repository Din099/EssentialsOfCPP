//mono state pattern ->same as singleton but without giving constructor declaring in private access modifier
#include<iostream>
#include<string>
using namespace std;
class A{
    private:
    static int x;
    public:
    int getX(){return this->x;}
    void setX(int value){this->x = value;}

};

int main()
{
    A obj;
    obj.setX(12);
    // obj.setX(12);
    // int getValue = obj.getX();
    cout<< "The value in mono state pattern is: "<< obj.getX();
}