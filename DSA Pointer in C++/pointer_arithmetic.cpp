#include <iostream> 
using namespace std;

int main()
{
    int a =5 ;
    int b = 6;
    int*ptr1 =&a;
    int*ptr2 =&b;

    int sum = *ptr1 + *ptr2;
    int sub = *ptr1 - *ptr2;
    int mul = *ptr1 * *ptr2;
    int div = *ptr1 / *ptr2;


   cout<<"The sum is "<<sum<<endl;
   cout<<"The sum is "<<sub<<endl;
   cout<<"The sum is "<<mul<<endl;
   cout<<"The sum is "<<div<<endl;



(*ptr1)++; //increment 
(*ptr2)--; // Decrement 

cout<<a<<endl;
cout<<b;

    return 0;

}