#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"\n--- Complexity Analysis ---\n";
    cout<<"Time Complexity: O(n)\n";
    cout<<"Space Complexity: O(1)\n";

    return 0;
}