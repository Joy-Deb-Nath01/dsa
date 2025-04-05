#include<iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++) //for pass//if you dont get n;use arr.size(){can be used in vector only}
    {                                   //for array-->sizeof(arr)/sizeof(arr[0]) cause if return bytes
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];//if you dont declare the size like arr(n),you have to use push back
     }
   /* for(int i=0;i<n;i++)

    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    */
    
    bubblesort(arr,n);
    

}