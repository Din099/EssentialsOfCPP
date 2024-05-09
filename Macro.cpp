//Essentials of CPP 06th May - 10th May 2024
//Defining macros ABS and  MAX using ternery operator
#include<iostream>
#include<string>
using namespace std;
#define ABS(a) ((a>0) ? (a) : (-a))
#define MAX(a,b) ((a>b) ? (a) : (b)) 
int main()
{
    cout << ABS(3) << endl;
    cout << ABS(-12) << endl;
    cout << MAX(16, 20) << endl;
    cout << MAX(7, 5) << endl;
}