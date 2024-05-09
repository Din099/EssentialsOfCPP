//Day 3 Essentials of CPP
//Diamond Problem
#include<iostream>
#include<string>
using namespace std;

class Device{
    private:
        string name;
        string model;
        string version;
    public:
        Device(){
            cout<<"Device Constructor Instantiated"<<endl;
        }
        ~Device(){
            cout<<"DEvice Destructed"<<endl;
        }
};

class Printer:virtual public Device{//this will solve diamond problem and not create 2 datamembers of Device class

    public:
        Printer(){
            cout<<"Printer Constructor Instantiated"<<endl;
        }
        ~Printer(){
            cout<<"Printer Destructed"<<endl;
        }
        void print(string content){//all function begin with verb
            cout<< "Print"<< content<<endl;
        }
};

class Scanner:virtual public Device{//this will solve diamond problem and not create 2 datamembers of Device class

    public:
        Scanner(){
            cout<<"Scanner Constructor Instantiated"<<endl;
        }
        ~Scanner(){
            cout<<"Scanner Destructed"<<endl;
        }
        void scan(string content){//all function begin with verb
            cout<< "Scan"<< content<<endl;
        }
};
class PrintScanner:public Printer, public Scanner{
public: 
        PrintScanner(){
            cout<<"Print Scanner Constructor Instantiated"<<endl;
        }
        ~PrintScanner(){
            cout<<"Print SCanner Destructed"<<endl;
        }
};
class TaskManager{
    public:
        void invokePrintTask(Printer* printerPtr, string content){
            printerPtr->print(content);
        }
        void invokeScanTask(Scanner* scannerPtr, string content){
            scannerPtr->scan(content);
        }
};

int main()
{
    //Printer hpPrinter;
    //Scanner hpScanner;
    PrintScanner hpPrintScanner;
    TaskManager taskMgr;
    //taskMgr.invokePrintTask(&hpPrinter,"doc.pdf");
    //taskMgr.invokeScanTask(&hpScanner,"doc.pdf");
    taskMgr.invokePrintTask(&hpPrintScanner,"doc.pdf");
    taskMgr.invokeScanTask(&hpPrintScanner,"doc.pdf");
}