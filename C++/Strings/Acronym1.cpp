#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    
    string meaning[5] = {"best friend forever", "I don't know", "just kidding", "too much information","talk to you later"};
    string abbreviations[5] = {"BFF", "IDK", "JK", "TMI","TTYL"};
    
    cout << "Enter text: " << endl;
    getline(cin,text);
    
    cout<< "You entered: " << text << endl;
    
    for (int i=0; i<5; i++){
        std::string::size_type index= text.find(meaning[i]);
        if (index==std::string::npos){
    }
        else {
        std::cout<<"Expanded: "<< text << endl;
        
    }
    cout<< "Expanded: " << text << endl;
}
return 0;
}


























