 #include<iostream>
using namespace std;

struct product
{
          int p_id;
          string p_name;
          string cat;
          int u_price;
};
int main()
  {
          struct product p[20],temp;
          int i,j,n,z,small;
          string name;
          int ret = 0;
          cout<<"Number of products:";
          cin>>n;
          for(i=0;i<n;i++)
    {
       cout << "Information of " << (i + 1) << "th product"<< endl;
       cout<<"Product ID: ";
       cin>>p[i].p_id;
       cout<<"Product Name: ";
       cin>>p[i].p_name;
       cout<<"Product Category: ";
       cin>>p[i].cat;
       cout<<"Product Price: ";
       cin>>p[i].u_price;
   }

   cout<<"OPtion:"<<endl;
   cout<<"1. Bubble sort Price wise "<<endl;
   cout<<"2. selection sort Price wise"<<endl;
   cout<<"3. Search based on Product Name"<<endl;
   cin>>z;

   switch (z)
        {
   case 1:
      for(i=0;i<n;i++)
          {
            for(j=i+1;j<n;j++)
            {
                if(p[j].u_price<p[i].u_price)
                {
                  temp=p[i];
                  p[i]=p[j];
                  p[j]=temp;
                }
            }
          }
           cout<<"Price Wise: "<<endl;
          for(j=0;j<n;j++)
           cout<<p[j].u_price<<endl;

   break;
   case 2:
         for(i=0; i<n-1; i++)
    {
        small = p[i].u_price;
        for(j=i+1; j<n; j++)
            if(p[j].u_price < p[small].u_price)

                small = p[j].u_price;
                temp=p[small];
                p[small]=p[i];
                p[i]=temp;

    }
    cout<<endl<<" Price Wise:\n";
    for(j=0; j<n; j++)
    cout<<p[j].u_price<<" ";
    cout<<endl;
    break;


    case 3:
       cout<< "Search Product Name:";
       cin>>name;
       for(i=0; i<n; i++)
        if(name == p[i].p_name){
        cout<<"Product ID:"<<p[i].p_id<<endl<<"Product Name:"<<p[i].p_name<<endl<<"Product Category:"<<p[i].cat<<endl<<"Product Price:"<<p[i].u_price<<endl<<endl;
        ret++;
        }
        if(ret == 1){
            cout<<"No Result";
        }
        cout<<endl;

   }

  }
