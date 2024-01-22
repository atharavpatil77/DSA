#include <iostream> 
using namespace std;

int main()
{
    int a=5;
    int*ptr;
    ptr=&a;

    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; 

    cout<<"The size int a is "<<sizeof(a)<<endl;
    cout<<"The size of ptr is "<<sizeof(ptr);
    return 0;
}