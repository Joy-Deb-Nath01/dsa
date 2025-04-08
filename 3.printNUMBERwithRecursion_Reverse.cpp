#include <iostream>
using namespace std;
void print1toN(int n)
{
                        //*todo: BASE CALL  
    if(n==0)return;
    cout<<n<<endl;          //* work
     print1toN(n-1);                                //! Recursion call


}
int main()
{
    int n;
    cin>>n;
    print1toN(n);
}