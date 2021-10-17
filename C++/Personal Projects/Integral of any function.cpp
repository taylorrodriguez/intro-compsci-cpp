#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int var, b1, b2, exponent, denominator,newExponent,newDenominator, function, integratedFunction;
    
    
    cout<< "Please input starting point ";
    cin>> b1;
    cout<< "Please input ending point ";
    cin>>b2;
    cout<< "Please enter the exponent of the variable ";
    cin>>exponent;
    
   
   //Integrate
   
   cout<< "Your function is x to the " << exponent<< "nd power, integrated from "<< b1<< " to " << b2 << ".";
   cout<< " Is this your function? If so type yes to integrate!";
   
   
   string decision;
   cin>> decision;
   
   if (decision == "yes"){
       int answer;
       newExponent= exponent+1;

       cout<< "Without the bounds we get x^"<< newExponent<< "/"<< newExponent;
       cout<<", and after plugging in the bounds we get ";
    
    answer= ((b1^newExponent/(static_cast<double>(newExponent))) - (b2^newExponent/(static_cast<double>(newExponent))));
    cout<< answer;
   }
   else {
       cout<< "Try again!";
   }
   

return 0;
}