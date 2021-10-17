#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int bff;
    int BFF;
    int idk;
    int IDK;
    int jk;
    int JK;
    int tmi;
    int TMI;
    int ttyl;
    int TTYL;
    
    cout << "Enter text: " << endl;
    getline(cin,text);
    
    cout<< "You entered: " << text << endl;
    getline(cin,text);
   
   
    while(bff>0||BFF>0 ||idk>0 ||IDK>0 ||jk>0 ||JK>0 ||tmi>0||TMI>0||ttyl>0||TTYL>0){
   
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
    //
    
    BFF=text.find("BFF");
    if(BFF>=0){
        text.replace(BFF,3,"best friend forever");
    }
    
    IDK=text.find("IDK");
    if(IDK>=0){
        text.replace(IDK,3,"I don't know");
    }
    
    JK=text.find("JK");
    if(JK>=0){
        text.replace(JK,2,"just kidding");
    }
    
    TMI=text.find("TMI");
    if (TMI>=0){
        text.replace(TMI,3,"too much information");
    }
    
    TTYL=text.find("TTYL");
    if (TTYL>=0){
        text.replace(TTYL,4,"talk to you later");
    }
    }
    cout << "Expanded: "<< text<< endl;
return 0;
}