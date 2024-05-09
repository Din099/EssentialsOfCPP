//Day 3 Essentials of CPP
#include<iostream>
#include<string>
using namespace std;
class Printer{
    private:
        string name;
        string model;
        string version;
    public:
        void print(string content){//all function begin with verb
            cout<< "Print"<< content<<endl;
        }
};

class Scanner{
    private:
        string name;
        string model;
        string version;
    public:
        void scan(string content){//all function begin with verb
            cout<< "Scan"<< content<<endl;
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
    Printer hpPrinter;
    Scanner hpScanner;
    TaskManager taskMgr;
    taskMgr.invokePrintTask(&hpPrinter,"doc.pdf");
    taskMgr.invokeScanTask(&hpScanner,"doc.pdf");
}