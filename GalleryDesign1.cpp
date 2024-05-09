//Essentials of C++
//Gallery Design - 1
#include<iostream>
#include<string>
using namespace std;

//creating interface or abstraction
class IItem{
    public: 
    virtual void size() = 0;
    virtual void date() = 0;
};
//imageItem class
class imageItem{
    public: 
    void size()
    {

    }
    void date()
    {

    }
};
//Video item class
class videoItem{
    public:
    void size()
    {

    }
    void date()
    {

    }
};

class Photos{
    public: 
    void mediaItem();
};