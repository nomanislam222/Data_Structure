#include <iostream>
using namespace std;

int main() {

        int arr1[] = {1,2,3,4,5};
        int arr2[] = {6,7,8};
        int arr3[8];

        for (int i=0; i< 5; i++) {
            arr3[i] = arr1[i];
        }
        for (int i=5; i< 8; i++) {
            arr3[i] = arr2[i-5];
        }
        // for (int i=0; i< 8; i++) {
         //cout<< arr3[i] << ' ';
        //}
         for (int i=(8-1); i>=0; i--) {
         cout<< arr3[i] << ' ';
        }




  return 0;
}
