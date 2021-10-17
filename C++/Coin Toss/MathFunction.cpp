#include <iostream> 
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}



int main() 
{
 
  int num1 = 0;
  int num2 = 0;
  int sum = 0;
  int diff = 0;
  
  cout<< "Enter the first integer: ";
  cin>> num1;
  cout<< "Enter the second integer: ";
  cin>> num2;
  cout<< endl<< endl;
  
  cout<< "First Integer: "<< num1<< endl;
  cout<< "Second Integer: "<< num2<< endl;
  cout<<endl;
  
  
  sum= add(num1, num2);
  diff= subtract(num1, num2);
  
  
  cout<< num1<<" + "<< num2<< " = "<< sum<< endl;
  cout<< num1<<" - "<< num2<< " = "<< diff<< endl;
    
    return 0;
    
}
