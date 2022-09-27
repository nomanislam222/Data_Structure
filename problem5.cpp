#include <iostream>
using namespace std;

int main() {
      int i,j;
      int count =0;
      int arr1[] = {1,2,3,2,5};
      int visited[5];

 cout << "First Array: ";
      for (int i=0; i< 5; i++) {
        cout<< arr1[i] << ' ';
        }

        for(int i=0; i<5; i++){
        if(visited[i] == 1)
            continue;

        for(int j=0; j<5; j++){
            if(arr1[i] == arr1[j]){
                visited[j] = 1;
                count++;
            }
        }
        cout <<endl<< arr1[i] << ": " << count ;
 }
            return 0;
}
