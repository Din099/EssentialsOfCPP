//Constructor Overloading
//how to avoid delegating telescopic constructor chain - by using Builder (an object Builder)

#include<string>
#include<iostream>

using namespace std;

class Customer {
private:
	string name, address, pan, adhar, emailId, contactNumber;

public:
	Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg
		) :name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg } {
		this->name = nameArg;//avoid
	}

	/*Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg,
		string contactNumberArg
		) :name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }, contactNumber{contactNumberArg} {
		this->name = nameArg;//avoid
	}

	Customer(string nameArg,
		string addressArg,
		string panArg,
		string adharArg,
		string contactNumberArg,
		string emailIdArg
	) :name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg }, contactNumber{ contactNumberArg }, emailId{emailIdArg} {
		this->name = nameArg;//avoid
	}*/

	//Creating Mutators to avoid constructor overloading
	void setContactNumber(string contactNumberArg) {
		this->contactNumber = contactNumberArg;
	}
	void setEmailId(string emailIdArg)
	{
		this->emailId = emailIdArg;
	}
};
//CustomerBuilder is responsible for creating customer objects
class CustomerBuilder {
public:
	CustomerBuilder(string name, string address, string pan, string adhar) {

	}
};
int main()
{
	Customer customerObj1{ "Tom","BLR","AVRYRT338","123456789" };
	Customer customerObj2{ "Tom","BLR","AVRYRT338","123456789","8796778698"};
	Customer customerObj3{ "Tom","BLR","AVRYRT338","123456789","tom@t.com"};
	return 0;
}
