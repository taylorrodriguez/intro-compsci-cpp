#include <stdio.h>

int CountNumWordsInString(const char* InString){

int numWords = 0;
int length = 0;

if (InString==NULL){
 return 0;
}

while(*InString){
 if(InString == ' '){
  length=0;
 }
 else if (length++ == 1){
  numWords++;
 }
}

return numWords;
}


int main(){
 
 const char sentence;
 scanf(sentence);
 
 CountNumWordsInString(sentence);


    return 0;
    
}
