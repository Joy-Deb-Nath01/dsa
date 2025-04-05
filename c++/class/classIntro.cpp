#include <iostream>
using namespace std;
class person  
{
    int age;
    int height;//dy default private

};

int main()
{
    person p1;
//    p1.age=10;//you cant access like this.cz,the age in private by default
  //  cout<<p1.age<<endl;
}
/*there are two method to access this
1)make variable public
2)use getter and setter
*/