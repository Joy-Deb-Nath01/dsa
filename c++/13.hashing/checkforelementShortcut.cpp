#include<iostream>
using namespace std;
int countt=0;
int count(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==5)
        countt++;
    }
    return countt;

}
int main()
{

    cout<<"enter how many test cases";
    int a;
    cin>>a;
    while(a--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<count(n,arr)<<endl;
}
}