#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll_no, marks;
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll_no;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void displaydata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.displaydata();
    return 0;
}