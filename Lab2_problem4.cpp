#include <iostream>
using namespace std;

int main() {
    int count, n;
    int  visited[10];

    cout<<"Search Element:";
    cin>> n;
    int arr1[10] = {1,2,3,4,4,1,1,1,2,4};
     cout << "Array: ";
      for (int i=0; i< 10; i++) {
           cout<< arr1[i] << ' ';
        }

    cout <<endl;
    for(int i=0; i<10; i++){
        if(visited[i] == 1)
            continue;

        count = 0;
        for(int j=0; j<10; j++){
            if(n == arr1[j]){
                visited[j] = 1;
                count++;
            }
        }
        cout << n << ": " << count <<" times"<< endl;
        break;
    }

    return 0;
}
