//Essentials of C++
//Gallery Design
#include<iostream>
#include<string>
using namespace std;

//Low level Module

//OpenItem Class
class openItem{
    public: 
    void details()
    {

    }
    void size()
    {

    }

};
//High level module -Gallery class
class Gallery {
    public:
    void showItem()
    {

    }
    void shareItem()
    {

    }
};

//Another approach by Inheritance
//Design for a Gallery application
#include<iostream>
#include<string>

using namespace std;

//abstraction
class IItem {
public:
	virtual void 
};

//low level module
class imageItem {
	float size;
	string date;
	//enum format;
};

class videoItem {
	float size;
	string data;
	//enum format;
};

//high level module
class Gallery {
public:
	Gallery();
	void item(){
		float size;
		string date;
	}
	void shareItem(){
			
	}
};