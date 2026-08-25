#include<iostream>
using namespace std;
const int m=3;
const int n=3;
void createArray(int arr[m][n]){
    cout<<"Enter elements of the array:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void displayArray(int arr[m][n]){
    cout<<"The elements of the array are:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void updateArray(int arr[m][n],int i,int j,int value){
    if(i>=0 && i<m && j>=0 && j<n){
        arr[i][j] = value;
    } else {
        cout<<"Invalid row or column index."<<endl;
    }
}
void transposeArray(int arr[m][n], int transposed[n][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transposed[j][i] = arr[i][j];
        }
    }
}
int calcAdd(int base,int w, int r, int c, int n)
{
    return base + w * (r * n + c);
}
int main(){
    int arr[m][n], transposed[n][m];
    int ur,uc,value;
    createArray(arr);
    displayArray(arr);
    cout<<"Enter the row, column and new value to update the array: ";
    cin>>ur>>uc>>value;
    updateArray(arr, ur, uc, value);
    displayArray(arr);
    transposeArray(arr, transposed);
    cout<<"The transposed array is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transposed[i][j]<<" ";
        }
        cout<<endl;
    }
    int base, w, r, c, n;
    cout<<"Enter the baseAddress, size, row, and column and number of columns: ";
    cin>>base>>w>>r>>c>>n;
    int address = calcAdd(base, w, r, c, n);
    cout<<"The calculated address is: "<<address<<endl;
    return 0;
}
