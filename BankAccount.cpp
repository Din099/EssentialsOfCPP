//Operator overloading
#include<iostream>
#include<string>
using namespace std;
class BankAccount{

    private:
        int balance;
        public:
        BankAccount(int initBalance):balance{initBalance}{}
        int getBalance(){ return this->balance;}
        public:
        operator+{
            
        }
    
};

int main()
{
    BankAccount acc1{1000};
    BankAccount acc2{2000};
    cout<<acc1<<endl;
    cout<<acc2<<endl;

    BankAccount acc3 = acc1 + acc2;
    cout<<acc3<<endl;
}