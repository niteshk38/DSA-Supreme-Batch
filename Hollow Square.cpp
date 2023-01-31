/*
Print Pattern
* * * * * * * 
*           * 
*           * 
*           * 
* * * * * * * 
*/

#include <iostream>
using namespace std;
int main() {
  int rowCount, colCount;
  cout << "Enter rowCount \n";
  cin >> rowCount;
  cout << "Enter cowCount \n";
  cin >> colCount;
  for (int col = 0; col < colCount; col = col + 1) {
    if (col == 0 || col == colCount- 1) {
      for (int row = 0; row < rowCount; row++) {
        cout << "* ";
      }
    } else {
      cout << "* ";
      for (int i = 0; i < colCount; i++) {
        cout << "  ";
      }
      cout<<"* ";
    }
    cout<<endl;
  }
}
