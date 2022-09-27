#include <iostream>
using namespace std;

int main() {
      int j;
     int arr1[] = {1,2,3,2,5};
     int arr2[] = {1,2,3};

      cout << "First Array: ";
      for (int i=0; i< 5; i++) {
           cout<< arr1[i] << ' ';
        }
 cout <<endl<<"Unique elements: ";

    for (int i=0; i<5; i++)
    {
        for (j=0; j<i; j++)
           if (arr1[i] == arr1[j])
               break;
         if (i == j)
          cout << arr1[i] << " ";
    }

    cout <<endl<<endl<< "Second Array: ";
      for (int i=0; i< 3; i++) {
           cout<< arr2[i] << ' ';
        }
 cout <<endl<<"Unique elements: ";

    for (int i=0; i<5; i++)
    {
        for (j=0; j<i; j++)
           if (arr2[i] == arr2[j])
               break;
         if (i == j){cout << arr1[i] << ' ' ;}
    }



        return 0;
}
