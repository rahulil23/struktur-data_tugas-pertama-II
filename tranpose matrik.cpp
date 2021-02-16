#include <iostream>
using namespace std;

int main() {
   int a[10][10], transpose[10][10], baris, kolom, i, j;

   cout << "masukan baris :";
   cin >> baris;
   cout <<"masukan kolom :";
   cin >>kolom;

   cout << "\nmasukkan elemen matrik: " << endl;

   // Storing matrix elements
   for (int i = 0; i < baris; ++i) {
      for (int j = 0; j < kolom; ++j) {
         cout << "masukkan angka " << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nbentuk matrik: " << endl;
   for (int i = 0; i < baris; ++i) {
      for (int j = 0; j < kolom; ++j) {
         cout << " " << a[i][j];
         if (j == kolom - 1)
            cout << endl << endl;
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < baris; ++i)
      for (int j = 0; j < kolom; ++j) {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose
   cout << "\nhasil tranpose: " << endl;
   for (int i = 0; i < kolom; ++i)
      for (int j = 0; j < baris; ++j) {
         cout << " " << transpose[i][j];
         if (j == baris - 1)
            cout << endl << endl;
      }

   return 0;
}
