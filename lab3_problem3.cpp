#include <iostream>
using namespace std;

struct Student
{
    int s_ID;
    int Credits;
    double CGPA;
};

int main()
{
   struct Student S[10];
   int n = 0;

   for(int i=0; i<10; i++)
   {
       cout << " Information of " << (i + 1) << "th student"<< endl;
       cout<<"Student ID: ";
       cin>>n;
        if((n >= 0) && (n <= 9))
       {
                S[i].s_ID = n;
                cout<<"Credit Completed: ";
                cin>>S[i].Credits;
               cout<<"CGPA: ";
               cin>>S[i].CGPA;
        }
   }

    cout<<"Student ID who have earn CGAP more than 3.75 : " << endl;
     for(int i=0;i<10;i++)
   {
       if(S[i].CGPA > 3.75)
       {
            cout<<S[i].s_ID<<endl;
       }
   }
       cout<<endl;

   cout<< endl <<"Student ID who have completed more than 50 credits : "<< endl;
   for(int i=0;i<10;i++)
   {
       if(S[i].Credits > 50)
       {
            cout<<S[i].s_ID<<endl;
       }
   }
   cout<<endl<<endl;
   }

