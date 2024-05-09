//Override
//latebinding

#include<iostream>
#include<string>
using namespace std;
class TextBox{
    public:
        virtual void accept(string text){cout<<"TextBox Accepted"<<endl;}
};

class NumericTextBox:public TextBox{//copying base call members called as shadowing
    public:
        void accept(string text)override {cout<<"NumericTextBox Accepted"<<endl;}
};

class MaskedTextBox:public TextBox{//copying base call members called as shadowing
    public:
        void accept(string text)override {cout<<"MaskedTextBox Accepted"<<endl;}
};

int main()
{
    TextBox nameTextBox;
    nameTextBox.accept("Tom");

    NumericTextBox ageTextBox;
    ageTextBox.accept("25");

    TextBox* basePtr = &ageTextBox;
    basePtr->accept("35");

    MaskedTextBox phoneNumberTextBox;
    basePtr = &phoneNumberTextBox;
    basePtr->accept("+91 123456789");
}