#include <iostream>
using namespace std;

void printNtimes(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("hello world\n");
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    printNtimes(n);
}