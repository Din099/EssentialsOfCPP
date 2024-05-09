//Day 3 Essentials of CPP
//Diamond Problem
#include<iostream>
#include<string>
using namespace std;
//Interface for Printer
class IPrinter{
    public:
    virtual void print() = 0;
    
};

//Interface for Scanner
class IScanner{
    public:
    virtual void scan() = 0;
};
class Device{
    private:
        string name;
        string model;
        string version;
    protected://This class can be resues but cannot be instanciated
        Device(string nameArg, string modelArg, string versionArg): name{nameArg}, model{modelArg}, version{versionArg}{
            cout<<"Device Constructor Instantiated"<<endl;
        }
        ~Device(){
            cout<<"DEvice Destructed"<<endl;
        }
};

class Printer:virtual public Device,public IPrinter{//this will solve diamond problem and not create 2 datamembers of Device class
    //IPrinter* printerPtr;
    public:
        Printer():Device{"","",""}{
            cout<<"Printer Constructor Instantiated"<<endl;
        }
        ~Printer(){
            cout<<"Printer Destructed"<<endl;
        }
        void print(string content){//all function begin with verb
            cout<< "Print"<< content<<endl;
        }
        
};

class Scanner:virtual public Device, public IScanner{//this will solve diamond problem and not create 2 datamembers of Device class
    //IScanner* scannerPtr;
    public:
        Scanner():Device{"","",""}{
            cout<<"Scanner Constructor Instantiated"<<endl;
        }
        ~Scanner(){
            cout<<"Scanner Destructed"<<endl;
        }
        void scan(string content){//all function begin with verb
            cout<< "Scan"<< content<<endl;
        }
};
class PrintScanner: public Device, public IPrinter, public IScanner{
    Printer printerObj;
    Scanner scannerObj;
  public: 
    void print(string content){//PrintScanner class delegating calls to neighbour Printer class
        this->printerObj.print(content);
    }

    void scan(string content){//PrintScanner class delegating calls to neighbour Scanner class
        this->scannerObj.scan(content);
    }
        PrintScanner(string nameArg, string modelArg, string versionArg):Device{nameArg, modelArg, versionArg}{
            cout<<"Print Scanner Constructor Instantiated"<<endl;
        }
        ~PrintScanner(){
            cout<<"Print SCanner Destructed"<<endl;
        }
};
class TaskManager{
    public:
        void invokePrintTask(IPrinter* printerPtr, string content){
            printerPtr->print(content);
        }
        void invokeScanTask(IScanner* scannerPtr, string content){
            scannerPtr->scan(content);
        }
};

int main()
{
    //Printer hpPrinter;
    //Scanner hpScanner;
    PrintScanner hpPrintScanner("","","");
    TaskManager taskMgr;
    //taskMgr.invokePrintTask(&hpPrinter,"doc.pdf");
    //taskMgr.invokeScanTask(&hpScanner,"doc.pdf");
    taskMgr.invokePrintTask(&hpPrintScanner,"doc.pdf");
    taskMgr.invokeScanTask(&hpPrintScanner,"doc.pdf");
    
}