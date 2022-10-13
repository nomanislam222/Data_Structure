#include <iostream>
using namespace std;

int main()
{

   int id[5];
   int min_index =0;
   int temp=0;
   for (int i = 0; i < 5; i++) {
      cout << "Enter Student id " << i+1 << " : ";
      cin >> id[i];
   }

    cout<<endl<<"Sorting ID:";

    for(int i=0; i<5; i++){
        min_index = i;

        for(int j=i+1; j<5; j++){
            if(id[min_index] > id[j]){
                min_index = j;
            }
        }

        temp = id[min_index];
        id[min_index] = id[i];
        id[i] = temp;
    }

    for(int i=0; i<5;i++){
        cout<<id[i]<<" ";
    }

    cout<<endl;
    return 0;
}

