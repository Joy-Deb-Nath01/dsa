#include<iostream>
using namespace std;
int main()
{
    int count=0;
    cout<<"enter how many element you want to store in array:";
    int n;
    cin>>n;
    cout<<endl<<"enter the elements of the array:";
    //taking input in array
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element you want to find:"<<endl;
    int a;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        count++;
    }
    cout<<a<<" found"<<count<<" times"<<endl;

}