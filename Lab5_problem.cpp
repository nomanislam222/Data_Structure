 #include<iostream>
using namespace std;

struct student
{
          int s_ID;
          string name;
          int Credits;
          float CGPA;
};
int main()
    {
          struct student s[20],temp;
          int i,j,n,z,chk,index,big,f;
          cout<<"Number of Student:";
          cin>>n;
         for(i=0;i<n;i++)
   {
       cout << " Information of " << (i + 1) << "th student"<< endl;
       cout<<"Student ID: ";
       cin>>s[i].s_ID;
       cout<<"Name: ";
       cin>>s[i].name;
       cout<<"Credit Completed: ";
       cin>>s[i].Credits;
       cout<<"CGPA: ";
       cin>>s[i].CGPA;
   }

   cout<<"OPtion:"<<endl;
   cout<<"1. Apply Bubble sort to CGPA wise "<<endl;
   cout<<"2. Apply selection sort credit wise"<<endl;
   cout<<"3. Apply search based on CGPA"<<endl;

   cin>>z;
 switch (z)
        {
   case 1:
      for(i=0;i<=n-1;i++)
          {
            for(j=0;j<=n-1;j++)
            {
                if(s[j].CGPA<s[j+1].CGPA)
                {
                  temp=s[j];
                  s[j]=s[j+1];
                  s[j+1]=temp;
                }
            }
          }
           cout<<"CGPA Wise: "<<endl;
          for(j=0;j<n;j++)
           cout<<s[j].s_ID<<endl;

   break;

    case 2:
         for(i=0; i<(n-1); i++)
    {
        chk=0;
        big = s[i].CGPA;
        for(j=(i+1); j<n; j++)
        {
            if(big<s[j].CGPA)
            {
                big = s[j].CGPA;
                chk++;
                index = j;
            }
        }
    }
    cout<<endl<<"CGPA Wise:\n";
    for(i=0; i<n; i++)
        cout<<s[i].CGPA<<" ";
    cout<<endl;
   break;

    case 3:
        cout<<"Search Student ID:";
          cin>>f;


       if(s[i].s_ID == f)
       {
            cout<<s[i].CGPA<<endl;
       }
       break;
}
        }
