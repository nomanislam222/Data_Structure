#include <iostream>
using namespace std;

int main() {

     int arr1[] = {1,2,3,4,5};
     int arr2[] = {1,2,8};
     int arr3[] =  {1,2,3,4,5};
     int arr4[] = {6,7,8};

       cout << "First Array: ";
      for (int i=0; i< 5; i++) {
           cout<< arr1[i] << ' ';
        }

       cout <<endl << "Second Array: ";
      for (int i=0; i< 3; i++) {
            cout<< arr2[i] << ' ';
        }
      cout<<endl;

 cout <<"Common Element: ";
      for(int i=0;i<5;i++)
       {
        for(int j=0;j<3;j++)
        {
            if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            }


        }

    }
cout<<endl<<endl<<endl;
     cout << "Third Array: ";
      for (int i=0; i< 5; i++) {
           cout<< arr3[i] << ' ';
        }

       cout <<endl << "Fourth Array: ";
      for (int i=0; i< 3; i++) {
            cout<< arr4[i] << ' ';
        }
      cout<<endl;

cout <<"Common Element: ";
      for(int i=0;i<5;i++)
       {
        for(int j=0;j<3;j++)
        {
            if(arr3[i]==arr4[j]){
            cout<<arr1[i]<<" ";
            }
        }


    }



    return 0;
    }

