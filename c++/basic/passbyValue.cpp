#include<bits/stdc++.h>
using namespace std;

void doSomething(string str)
{
    str[0]='t';
    cout<<str<<endl;
}

int main()
{
    string str="joy";
    doSomething(str);
    cout<<str<<endl;
}