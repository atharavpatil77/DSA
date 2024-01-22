#include <iostream>
using namespace std;

int main ()
{
    // void*ptr;
    // int a = 7;
    // ptr=&a;

    // cout<<a<<endl;
    // cout<<*(int*)ptr;

    void * ptr; 
    char c = 'P';
    ptr=&c;

    cout<<c<<endl;
    cout<< *(char*)ptr<<endl; // this line is called type casting 
    cout<< ptr<<endl;

    return 0;


}