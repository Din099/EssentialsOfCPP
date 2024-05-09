//Object slice

#include<iostream>
#include<string>
using namespace std;

//Interface
//Contract
class IEmployee {
public: 
	virtual void professional() = 0;//No implementation, body of class equating to zero

};

class IFamilyMember {
public: 
	virtual void cranky() = 0;
	virtual void casualBehavior() = 0;
};
//Person fullfills(Impliments) IEmployee and IFamilyMember Contract
//Multiple Interfaces
class Person : public IEmployee, public IFamilyMember{
	//default interface of the object
public:
	void casualBehavior(){}
	void professional(){}
	void cranky(){}

};

class OfficeContext {
public:
	//void Enter(Person* obj)
	void Enter(IEmployee* obj){
		//obj->casualBehavior();
		//obj->cranky();
		obj->professional();

	}
};

class FamilyContext {
public:
	//void Enter(Person* obj) 
	void Enter(IFamilyMember* obj){
		obj->casualBehavior();
		obj->cranky();
		//obj->professional();// becomes redudndant as not declared in IFamilyMemver
	}
};

int main()
{
	Person tom;
	FamilyContext fContext;
	OfficeContext oContext;
	fContext.Enter(&tom);
	oContext.Enter(&tom);
}