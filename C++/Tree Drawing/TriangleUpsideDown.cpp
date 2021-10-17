#include <iostream>

using namespace std;

int main()
{
  char n;
  int numRows;
  
  cout << "Enter a character: ";
  cin >> n;
  cout<< "Enter number of rows: "<< endl;
  cin >> numRows;
  
  for (int i=numRows; i>=1; i--){
      for(int j=1; j<=i;++j){
          cout << n << " ";
      }
      cout<< endl;
  }
  
  
return 0;
}