#include <iostream>
using namespace std;
int main() 
{
    string user;
    string LOL;
    string IDK;
    string BFF;
    string IMHO;
    string TMI;
    
    cout << "Input an abbreviation: " << endl;
    cin >> user;
     
     if (user == "LOL") {
      cout << "laughing out loud" << endl;
     }
     else if (user == "IDK") {
      cout << "I don't know" << endl;
     }
     else if (user == "BFF") {
      cout << "best friends forever" << endl;
     }
     else if (user == "IMHO") {
      cout << "in my humble opinion" << endl;
     }
     else if (user == "TMI") {
      cout << "too much information" << endl;
     }
     
     else  {
      cout << "Unknown" << endl;
     }
           
    return 0;
    
}
