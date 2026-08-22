#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter numbers a: ";
    cin>>a;
    cout<<"Enter numbers b: ";
    cin>>b;
    cout<<"Before swapping a: "<<a<<endl;
    cout<<"Before swapping b: "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a: "<<a<<endl;
    cout<<"After swapping b: "<<b<<endl;
    return 0;
}//Completed and Checked by Professor in lab...