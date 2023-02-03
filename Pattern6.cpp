/*
Print Pattern
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the Value of N = ";
  cin >> n;

  for (int row = 0; row < n; row = row + 1) {
    for (int col = 0; col < row+1; col = col + 1) {
      cout << row+1;
      if (col != row) {
        cout << "*";
      }
    }
    cout << endl;
  }
}
