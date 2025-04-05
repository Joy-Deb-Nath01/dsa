#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int minInedex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minInedex]>arr[j])
            minInedex=j;
        }
        if(minInedex!=i)
        swap(arr[i],arr[minInedex]);
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
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    selectionSort(arr);

}