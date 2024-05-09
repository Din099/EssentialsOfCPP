//Creating objects in stack and heap 
#include<string>
#include<iostream>

using namespace std;

class LocationModel {
private: 
	string name;
	float coOrdinate;
	static int inCounter;//Will not create a state for the same as we are using Static keyword
public:
	static void dumpCounter(){}
	string getName(LocationModel *this) {//LocationModel * this is added implicitely by compiler
		return this->name;
	}
	void setName(LocationModel *this, string value) {
		//LocationModel * this is added implicitely by compiler
		this->name = value;//name = value;
	}
};
class LocationCSVDataReader {
private: 
	string filePath;
};
class Converter {
public:
	void Convert(std::string filePath) {
		//logic
		//Read CSV file line by line
		//Split each line - ","
		//represent line content
		//Validate line
		//Create XML node
		//update XM tree
		//save XML tree
	}
};
int main_()
{
	//stck objects
	int x;//int datatype
	LocationModel obj;//User Defined Datatype
	obj.setName("BLR");//LocationModel::setName(&obj, "BLR");
	obj.getName();//LocationModel::getName(&obj);

	//Heap Allocation
	LocationModel* ptr =new LocationModel();
	ptr->setName("DEL");
	LocationModel::dumpCounter();//writing this to call dumpCounter to execute without having a object or state
	return 0;
}