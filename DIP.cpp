//DIP = Dependancy Inversion Principle
//Strategy Design Pattern
//Runtime Polymorphism

#include<iostream>
#include<string>
 

//Abstraction
class IEngine {
public: virtual void start() = 0;
	  virtual void stop() = 0;
};

//Low Level Module
class MPFIEngine :public IEngine{
public: 
	void start() {}
	void stop() {}
};

class GDIEngine:public IEngine {
public:
	void start() {};
	void stop() {};
};

//High Level Module
class XUV3X0 {
	//Dependency(Abstract)
	IEngine* engine;
public:
	//Constructor dependency Injection
	XUV3X0(IEngine* engineArg) :engine{ engineArg }{}
	void drive()
	{
		this->engine->start();
        std::cout<<"Engine started! \n";

	}

	void halt() 
	{
		this->engine->stop();
        std::cout<<"Engine stopped! \n";
	}
	//destructor
	~XUV3X0() {
		delete engine;//as the XUV3X0 and engine are Composition which is 'has-a relationship' which is a death relationship
	}
};




class StallinEngine {

};

int main()
{
	MPFIEngine napEngine;//naturally aspirated petrol engine
	GDIEngine turboEngine;
	XUV3X0 car{&napEngine};//base class ptr pointing to derived class object
	car.drive();
	XUV3X0 turboSeries{ &turboEngine };
    car.drive();
    car.halt();
	return 0;
}

//Car uses Engine
//Car Depends on Engine