#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // vector<int> arr;
    // for(int i=0;i<n;i++)
    // {
    //     int temp;
    //     cin>>temp;
    //     arr.push_back(temp);
    // }
    int hashs[5]={0};
    for(int i=0;i<5;i++)
    {

        cout<<hashs[i]<<" ";
    }
    hashs[3]++;
    cout<<endl;
    for(int i=0;i<5;i++)
    {

        cout<<hashs[i]<<" ";
    }
   

}