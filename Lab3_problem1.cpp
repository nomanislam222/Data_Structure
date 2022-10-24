#include <iostream>
using namespace std;

int main() {
   int x[10][10], trans_x[10][10];
   int row, col;

   cout << "Rows of matrix: ";
   cin >> row;
   cout << "Columns of matrix: ";
   cin >> col;
   cout << endl << "Elements of matrix: " << endl;


   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << "Enter element x" << i + 1 << j + 1 << ": ";
         cin >> x[i][j];
      }
   }


   cout << endl << "Inputed Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << " " << x[i][j];
         if (j + 1 == col)
            cout << endl << endl;
      }
   }


   for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         trans_x[j][i] = x[i][j];
      }


   cout << endl << "Transpose Matrix: " << endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << trans_x[i][j];
         if (j+1 == row)
            cout << endl << endl;
      }
}
