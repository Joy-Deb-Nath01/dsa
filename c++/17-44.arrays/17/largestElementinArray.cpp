#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    cout<<largest<<endl;
}

//here time complexity is O(N).but if you do it by brute force I meant by sorting it would take nlog(n)