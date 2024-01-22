//enrollment for examination
//marks entry
// regualr exam re exam
//regular exams ke liye passed subjects
//failed exams ke liye

// #include <iostream>
// using namespace std;

// struct Student{

        

//     public:
//         float sub1 , sub2 , sub3 , sub4 , sub5  ;
//         float *python=&sub1;
//         float *cpp=&sub2;
//         float *dsa=&sub3;
//         float *maths=&sub4;
//         float *english=&sub5;

//         float total_average;
//         string name ;
//         int roll_no;
 
//         void getdata (){
//             cout<< "Name : \n";
//             cin>> name;
            
//             cout<<"Roll No : \n";
//             cin>>roll_no;

//             cout << " Python marks  -   \n";
//             cin >>sub1;

//             cout<< " C++ marks  -   \n";
//             cin >>sub2;

//             cout<<" DSA marks  -   \n";
//             cin >>sub3;

//             cout<< " Maths marks  -   \n";
//             cin >>sub4;

//             cout<< " English  marks  -   \n";
//             cin >>sub5;

//             total_average =(sub1+sub2+sub3+sub4+sub5)/5.0;
//         }

//         bool total_eligiblitycheck(){

//             if (total_average>=70.00 && sub1 > 40.00 && sub2 > 60.00 && sub3 > 40.00 && sub4 > 40.00 && sub5 > 40.00){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

//         void per_subject_eligibility(){
//             int failed_subjects[5];
//             int n;
//             for (int i=0;i<=n; i++){
//                 if (sub1 <= 40.00){
                
//                     cout<<"Subject Failed in: Python";
//                 }
//                 else if (sub2 <= 40.00){
                    
//                     cout<<"Subject Failed in: C++";
//                 }
//                 else if (sub3 <= 40.00){
                   
//                     cout<<"Subject Failed in: DSA";
//                 }
//                 else if (sub3 <= 40.00){
                
//                     cout<<"Subject Failed in: Maths";
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"Subject Failed in: English";
//                 }
//                 else{
//                     cout<<"The students have failed in NO SUBJECTS!";
//                 }
//                 cout<<"\n-------------------------------------------";
//                 }
//             }
//         void re_enter_marks(){
//             if (sub1 <= 40.00){
//                     cout<<"Re-enter new marks for Python: ";
//                     cin>>*python;
//                 }
//                 else if (sub2 <= 40.00){
//                     cout<<"Re-enter new marks for C++: ";
//                     cin>>*cpp;
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"Re-enter new marks for DSA: ";
//                     cin>>*dsa;
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"Re-enter new marks for Maths: ";
//                     cin>>*maths;
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"Re-enter new marks for English: ";
//                     cin>>*english;
//                 }
//                 else{
//                     cout<<"The students have failed in NO SUBJECTS!";
//                 }
//                 cout<<"\n-------------------------------------------";
//                 }
            
        

//         //Displaying data of the object
//         void displaydata_passed(){
           
//             cout<<"\nName    : " << name <<"\n";
//             cout<<"Roll No : "<<roll_no<<"\n";
//             cout<<"Average : " << total_average <<"\n";
//             if (sub1 >= 40.00){
//                     cout<<"Python: "<<sub1;
//                 }
//                 else if (sub2 > 40.00){
//                     cout<<"C++: "<<sub2;
//                 }
//                 else if (sub3 > 40.00){
//                     cout<<"DSA: "<<sub3;
//                 }
//                 else if (sub3 > 40.00){
//                     cout<<"Maths: "<<sub4;
//                 }
//                 else if (sub3 > 40.00){
//                     cout<<"English: "<<sub5;
//                 }
//                 else{
//                     cout<<"Invalid output";
//                 }
//                 cout<<"\n-------------------------------------------";
        
//                 }
//         void displaydata_failed(){
           
//             cout<<"\nName    : " << name <<"\n";
//             cout<<"Roll No : "<<roll_no<<"\n";
//             cout<<"Average : " << total_average <<"\n";
//             if (sub1 <= 40.00){
//                     cout<<"Python: "<<sub1;
//                 }
//                 else if (sub2 <= 40.00){
//                     cout<<"C++: "<<sub2;
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"DSA: "<<sub3;
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"Maths: "<<sub4;
//                 }
//                 else if (sub3 <= 40.00){
//                     cout<<"English: "<<sub5;
//                 }
//                 else{
//                     cout<<"Invalid output";
//                 }
//                 cout<<"\n-------------------------------------------";
        
//                 }


// };


// int main(){

//     int n , search;
//     char a;

//     cout<<"How many Data you want to enter : ";
//     cin>>n;
//     Student stud[n];
//     int main_choice;
//     int passed_main;
//     int failed_main;
//     char cont;
//     int i;

//     for(int i = 0 ; i<n ; i++){

//         stud[i].getdata();
//     }
//     cout<<"What do you want to choose\n1. Display Data \n2. Marks Entry:\n"; 
//     cin>>main_choice;
//     if (main_choice==1){
//         cout<<"What do you want to choose\n1. For Passed Subjects \n2. Failed Subjects:\n";
//         cin>>passed_main;
//         if (passed_main==1){
//             if (stud[i].total_eligiblitycheck() == true)
//                 for(int i = 0 ; i<n ; i++){
//                     stud[i].displaydata_passed();
//         }
//         }
//         else{
//             for(int i = 0 ; i<n ; i++){
//                 stud[i].displaydata_failed();
//         }
//         }
//         stud[i].total_eligiblitycheck();
//     }
//     else{
//     cout<<"Do you want to Check some student's eligiblity \n";
//     cin>>a;

//     if (a == 'y' || a == 'Y'){
//         cout<<"Write the Roll No. you want to look for \n";
//         cin>>search;

//         for (int i = 0 ; i < n ; i ++){
//             if (search == stud[i].roll_no){
//                  if (stud[i].total_eligiblitycheck() == true){
//                     stud[i].displaydata_passed();
//                     cout<<"\n"<<stud[i].name<<" IS ELIGIBLE FOR THE NEXT SEMESTER"<<"\n";
//                     }
//                 else {
//                     cout<<"\n"<<stud[i].name<<" IS NOT ELIGIBLE FOR THE NEXT SEMESTER"<<"\n";
//                     stud[i].per_subject_eligibility();
//                     //stud[i].displaydata_failed();
//                     cout<<"Do you want to re-enter marks: ";
//                     cin>>cont;
//                     if (cont=='Y' or cont=='y'){
//                         stud[i].re_enter_marks();
//                         stud[i].displaydata_passed();
//                     }
//                 }
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     }
//       return 0;
// }



#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

struct Student
{
    char regular;
    int id,enroll;
    
    string dob,name;
    string chosen[5];
    int subject[5] = {};
};



void func(int* ptr , string subject){
    cout<<subject<<" : ";
    cin>>*ptr;
}

int main(){
    int id , enroll;

    cout<<"Enter your Roll No. (eg : \"1\" for Romil)";
    cin>>id;


    Student arr[100];

    arr[0].id = 1;
    arr[0].name = "Romil Pandey";
    arr[0].dob = "12 August 2005";

    Student temp;
    for (int i = 0 ; i < 100 ; i++){
        if(arr[i].id == id){
            cout<<"\n\nHey Welcome back "<<arr[i].name;
            temp = arr[i];
            break;
        }
        else{
            cout<<"\n\nRegistering the user : ";
            arr[i].id = id;
            cout<<"\nEnter name";
            cin>>arr[i].name;
            cin.ignore();
            cout<<"\nEnter Dob";
            getline(cin,arr[i].dob);
            temp = arr[i];
            break;
        }

    }

    rerun:
    cout<<"\n\nEnter the type of Task : \n1. Enrollment for exam\n2. Enter the marks for the exam\n3. Exit";
    cin>>enroll;

    switch(enroll)
    {
        case 1:
        if(toupper(temp.regular) == 'Y' || toupper(temp.regular) == 'N' ){
            cout<<"Already Enrolled for ";
            if(toupper(temp.regular) == 'Y'){
                cout<<"Regular"<<endl;
            }
            else{
                cout<<"Re-Exam"<<endl;
            }
        }
        int c;
        cout<<"\n\nEnter the exam you want to enroll for :\n1.Regular\n2.Re-exam ";
        cin>>c;

        if(c == 1){
            temp.regular = 'Y';
            srand(time(0)); 
            temp.enroll = rand()%1000;
            cout<<"You enrolled for the following exam on regular basis:\n1.C++\n2.Python\n3.Maths\n4.SRS(Software Requirement Skill)\n5.Computer Fundamentals\n"<<temp.enroll<<" is your Enrollment id please remember it\n";
        }
        else if(c == 2){

            if(temp.subject[0] <= 0 || temp.subject[0] > 100 ){
                cout<<"\nYou have not given any exam to be enrolled for Re-exam";
                goto rerun;
            }
            else{
                cout<<"\nYou are enrolled for re-exam go to section to check for available exams";
                srand(time(0)); 
                temp.enroll = rand()%1000;
                cout<<temp.enroll<<"is your Enrollment id please remember it\n";

                temp.regular = 'N';
            }

        }
        else{
            cout<<"\nWrong input"<<"\n\n";
            goto rerun;
        }
        goto rerun;
        break;
        case 2:
            if(toupper(temp.regular) == 'Y' || toupper(temp.regular) == 'N'){
                if(toupper(temp.regular) == 'Y')
                {
                    int password;
                    pass:
                        cout<<"\n\nPlease enter the enrollment id : ";
                        cin>>password;
                        if(!(password == temp.enroll)){
                            int y;
                            cout<<"\n\nIf you forgot press(0) or any other key to exit";
                            cin>>y;
                        }
                    cout<<"\n\nYou have to enter the marks as you enrolled for the following exam on regular basis:\n1.C++\n2.Python\n3.Maths\n4.SRS(Software Requirement Skill)\n5.Computer Fundamentals";
                    temp.chosen[0] = "C++";
                    temp.chosen[1] = "Python";
                    temp.chosen[2] = "Maths";
                    temp.chosen[3] = "SRS";
                    temp.chosen[4] = "Computer Fundamentals";
                    cout<<"\n\nEnter the marks for the following subs : ";
                    for(int i = 0 ; i < 5 ; i++){
                        func(&(temp.subject[i]),temp.chosen[i]);
                    }
                    temp.regular = 'x';
                    goto rerun;
                }
                else{
                    int a = sizeof(temp.chosen)/sizeof(temp.chosen[0]);
                    if( a > 0){
                        cout<<"\n\nYou were enrolled for regular and here is your marks \n";
                        int markscheck[a];
                        for(int i = 0 ; i < a ; i++){
                            cout<<temp.chosen[i]<<" : "<<temp.subject[i]<<endl;
                            markscheck[i] = temp.subject[i];
                        }
                        cout<<"\n\nFailed for these ones - : ";
                        for (int i = 0 ;i < a ; i++){
                            if(markscheck[i] < 40){
                                cout<<temp.chosen[i]<<endl;
                            }
                        }

                        cout<<"\n\nEnter the marks for that ones ";
                        for (int i = 0 ;i < a ; i++){
                            if(markscheck[i] < 40){
                                cout<<temp.chosen[i]<<" : ";
                                cin>>temp.subject[i];
                            }
                        }
                        temp.regular = 'x';
                        goto rerun;

                    }
                    else{
                        cout<<"\n\nYou are not enrolled in any";
                        goto rerun;
                    }

                }

            }
            else{
                cout<<"\n\nCurrently Not enrolled for any of the exam Please enroll ";
                goto rerun;
            }
            goto rerun;
        case 3:
            return 0;
        default:
            goto rerun;

    }




    return 0;
}