#include <iostream>
#include <string>

using namespace std;

int main() 
{
 string word;
 
 cout << "Enter word: ";
 cin >> word;
 cout<< endl;

 cout << "You entered: " << word << endl;
 
 for (int i=0; i< word.size(); ++i)
  {
  
  if (word.at(i) == 'a'){
   word.at(i) = '@';
  }
  else if (word.at(i) == 'e'){
   word.at(i) = '3';
  }
  else if (word.at(i) == 'i'){
   word.at(i) = '!';
  }
  else if (word.at(i) == 'g'){
   word.at(i) = '9';
  }
  else if (word.at(i) == 's'){
   word.at(i) = '$';
  }
  else if (word.at(i) == 'x'){
   word.at(i) = '*';
  }
  }
  
  cout << "New word: " << word << endl;
    
    return 0;
    
}
