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
  
  int k= numRows+(numRows-2);
  
  for (int i=1; i<=numRows; i++){
      for (int space =0;space<k;space++){
          cout << " ";
      }
      for(int j=i; j>=1 ;j--){
          cout << n << " ";
      }
      cout<< endl;
      k-=2;
  }
  
  
return 0;
}