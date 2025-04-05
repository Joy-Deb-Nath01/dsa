#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> arr)
{
    int n=arr.size();

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}
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
void insertionSort(vector<int> arr)
{
    int n=arr.size();

    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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

    bubblesort(arr);

}