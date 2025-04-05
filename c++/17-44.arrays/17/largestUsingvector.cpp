#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int> &arr,int n)//if you dont understand why & is used check callbyadress program
{
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
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
  cout<<largest(arr,n)<<endl;
}