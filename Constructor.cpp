// Online C++ compiler to run C++ program online
//Constructor calling in Parent and Child class
#include <iostream>
class Parent{
    private:
    int q;
    public:
    Parent(int qArg){}
};
class Child: public Parent
{
    private: 
    int x;
    public:
    Child():Parent::Parent(10){}//explicitely call any base class constructor
    Child(int xArg):Parent::Parent(xArg){}//explicitely call base class constructor
};
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    

    return 0;
}

//Note: Any constructor of child can call any constructor of Parent but it must call one constructor or compiler will assign it by default the default constructor.