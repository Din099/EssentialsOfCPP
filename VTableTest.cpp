//V Table test
//Shadow, VTablePtr, Override, final
#include <iostream>
#include <string>
using namespace std;
class A{
public:
	virtual void M1() { cout << "A.M1()" << endl; }//Virtual 
	void M2(){ cout << "A.M2()" << endl; }
    A(){cout<< "A Constructor"<<endl;}
    ~A(){cout<< "A Destructor"<<endl;}
};
class B:public A {
public :
		 void M1() final override  { cout << "B.M1()" << endl; }//virtual
		 void M2() { cout << "B.M2()" << endl; }
		 virtual void M3(){ cout << "B.M3()" << endl; }//virtual 
		 void M4() { cout << "B.M4" << endl; }
         B(){cout<< "B Constructor"<<endl;}
         ~B(){cout<< "B Destructor"<<endl;}
};
class C:public B {
public:
	//void M1()  { cout << "C.M1()" << endl; }
	void M3() override { cout << "C.M3()" << endl; }//virtual 
	void M4()  { cout << "C.M4()" << endl; }
    C(){cout<< "C Constructor"<<endl;}
    ~C(){cout<< "C Destructor"<<endl;}
};



int main() {
	A aObj;
    B bObj;
    C cObj;

    A*aPtr = &aObj;


    
	// A* aPtr=&aObj;
	// aPtr->M1();//virtual call -->A.M1
	// //aPtr->M2();//Non virtual call

	// B bObj;
	// B* bPtr = &bObj;
	// bPtr->M1();//virtual call--> B.M1
	// //bPtr->M2();//non virtual
	// bPtr->M3();//virtual call--> B.M3
	// //bPtr->M4();//non virtual

	// aPtr = &bObj;
	// aPtr->M1();//virtual call--> B.M1
	// //aPtr->M2();//non virtual

	// C cObj;
	// cObj.M1();//virtual
	// //cObj.M2();//non virtual
	// cObj.M3();//virtual
	// //cObj.M4();//non virtual

	// aPtr = &cObj;
	// aPtr->M1();//virtual-->C.M1
	// //aPtr->M2();//non virtual

	// bPtr = &cObj;
	// bPtr->M1();//virtual-->C.M1
	// //bPtr->M2();//non virtual
	// bPtr->M3();//virtual-->C.M3
	// //bPtr->M4();//non virtual
}