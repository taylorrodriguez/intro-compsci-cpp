
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int bff;
    int idk;
    int jk;
    int tmi;
    int ttyl;
    
    cout << "Enter text: " << endl;
    getline(cin,text);
    
    cout<< "You entered: " << text << endl;
    getline(cin,text);
    
    bff=text.find("BFF");
    if(bff>=0){
        text.replace(bff,3,"best friend forever");
    }
    idk=text.find("IDK");
    if(idk>=0){
        text.replace(idk,3,"I don't know");
    }
    jk=text.find("JK");
    if(jk>=0){
        text.replace(jk,2,"just kidding");
    }
    tmi=text.find("TMI");
    if (tmi>=0){
        text.replace(tmi,3,"too much information");
    }
    ttyl=text.find("TTYL");
    if (ttyl>=0){
        text.replace(ttyl,4,"talk to you later");
    }
    cout << "Expanded: "<< text<< endl;
    
return 0;
}