#include <iostream>
using namespace std;

struct Student
{
 int rollno;
 string name;
 int dob;
};

int main()
{
    Student a[2];
    for(int i=0;i<=2;i++)
    {
        cout<<"Enter the roll no :";
        cin>>a[i].rollno;

        cout<<"Enter the name :";
        cin>>a[i].name;

        cout<<"Enter the dob :";
        cin>>a[i].dob;
    }

    for(int i = 0;i<=2;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].rollno<<endl;
        cout<<a[i].dob<<endl;
    }

    return 0;
}

