#include <bits/stdc++.h>
using namespace std;
void explainpair()
{
    pair<int ,int>p={2,5};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p2={2,{4,5}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
    pair<int,int> arr[]={{3,5},{4,9}};
    cout<<arr[1].second<<endl;
}
int main()
{
    explainpair();
}
