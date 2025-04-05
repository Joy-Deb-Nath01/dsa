#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n)

{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=1;j<=(n-i-1);j++)
        {
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i+1);j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=(n-i-1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<(2*n)-(2*i+1);j++)
        {
            cout<<"*";
        }

        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}
void pattern10(int n)
{
    for(int i=1;i<(2*n);i++)
    {
        int star=i;
        if(i>n)
        {
            star=2*n-i;
        }
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        int start=1;
            if(i%2==0)start=1;
            else start=0;
        for(int j=1;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n)
{
    int space=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        //numbers
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        //space
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";//double space
        }

        //numbers
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        space-=2;
    }
}
void pattern12Update(int n)
{
    

    for (int i = 1; i <= n; i++) {
        // Print increasing part
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << "  ";
        }

        // Print decreasing part
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
}
void pattern13(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
              cout<<num<<" ";
              num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='A';j<='A'+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(char j='A';j<=n-i+'A';j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n)
{
    for(char i='A';i<n+'A';i++)
    {
        for(char j='A';j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n)
{
    for(int i=1;i<=n;i++)
    {
        //space
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        //letter
        char ch='A';
        int breakpoint=(2*i-1)/2;
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<ch;
        if(j<=breakpoint)ch++;
        else ch--;

        }

        //space
        
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n)
{
    char start = 'A';
    
    for (int i = 1; i <=n;i++)
     {
        char letter = start + n - 1;
        for (int j = 1; j <= i;j++) {
            cout << letter << " ";
            letter--;
        }
        cout << endl;
    
     }
}
void pattern19(int n)
{
     int space=0;
    for(int i=1;i<=n;i++)
    {
       
        //star
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*"<<" ";
        }
        //space
        
        for(int j=0;j<space;j++)
        {
            cout<<"  ";
            
        }
        
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<"*"<<" ";
        }
        
        space+=2;
        cout<<endl;
    }
    //for lower part
      space=(n-1)*2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        space-=2;
    }
}
void pattern20(int n)
{
    int space=2*(n-1);
    for(int i=1;i<=(2*n-1);i++)
    {
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++)
        {

            cout<<"*";
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=star;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if(i>(2*n-1)/2)
        space+=2;
        else 
        space-=2;
    }
}
void pattern21(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print stars for the first and last rows
            // Print stars for the first and last columns
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern22(int n)
{
    
}
int main()
{
    int n;
    cout<<"Enter how many row:";
    cin>>n;
    pattern19(n);
    cout<<endl<<endl;
    pattern20(n);

}