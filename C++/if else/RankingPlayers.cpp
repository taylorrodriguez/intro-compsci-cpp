#include <iostream>
using namespace std;
int main() 
{
  string playerOneName;
  string playerTwoName;
  string playerThreeName;
  string playerOneYard;
  string playerTwoYard;
  string playerThreeYard;
  
  cout<< "Enter player 1's name: "<< endl;  
  cin>> playerOneName;
  cout<< "Enter player 1's yards gained: "<< endl;
  cin>> playerOneYard;
  cout<< "Enter player 2's name: "<< endl;
  cin>> playerTwoName;
  cout<< "Enter player 2's yards gained: "<<endl;
  cin>> playerTwoYard;
  cout<< "Enter player 3's name: "<<endl;
  cin>> playerThreeName;
  cout<< "Enter player 3's yards gained: "<<endl;
  cin>> playerThreeYard;
  cout<<endl;
  
  cout<< "Player 1 - "<<playerOneName<<": "<<playerOneYard<<endl;
  cout<< "Player 2 - "<<playerTwoName<<": "<<playerTwoYard<<endl;
  cout<< "Player 3 - "<<playerThreeName<<": "<<playerThreeYard<<endl;
  cout<<endl;
  
  if (playerOneYard>playerTwoYard && playerOneYard>playerThreeYard && playerTwoYard>playerThreeYard){
      cout<<"1. "<<playerOneName<<": "<<playerOneYard<<endl;
      cout<<"2. "<< playerTwoName<<": "<<playerTwoYard<<endl;
      cout<<"3. "<< playerThreeName<<": "<<playerThreeYard<<endl;
  }
  if (playerOneYard>playerThreeYard && playerOneYard>playerTwoYard && playerThreeYard>playerTwoYard){
      cout<<"1. "<<playerOneName<<": "<<playerOneYard<<endl;
      cout<<"2. "<< playerThreeName<<": "<<playerThreeYard<<endl;
      cout<<"3. "<< playerTwoName<<": "<<playerTwoYard<<endl;
  }
  if (playerTwoYard>playerOneYard && playerTwoYard>playerThreeYard && playerOneYard>playerThreeYard){
      cout<<"1. "<<playerTwoName<<": "<<playerTwoYard<<endl;
      cout<<"2. "<< playerOneName<<": "<<playerOneYard<<endl;
      cout<<"3. "<< playerThreeName<<": "<<playerThreeYard<<endl;
  }
  if (playerTwoYard>playerThreeYard && playerTwoYard>playerOneYard && playerThreeYard>playerOneYard){
      cout<<"1. "<<playerTwoName<<": "<<playerTwoYard<<endl;
      cout<<"2. "<< playerThreeName<<": "<<playerThreeYard<<endl;
      cout<<"3. "<< playerOneName<<": "<<playerOneYard<<endl;
  }
  if (playerThreeYard>playerOneYard && playerThreeYard>playerTwoYard && playerOneYard>playerTwoYard){
      cout<<"1. "<<playerThreeName<<": "<<playerThreeYard<<endl;
      cout<<"2. "<< playerOneName<<": "<<playerOneYard<<endl;
      cout<<"3. "<< playerTwoName<<": "<<playerTwoYard<<endl;
  }
  if (playerThreeYard>playerTwoYard && playerThreeYard>playerOneYard && playerTwoYard>playerOneYard){
      cout<<"1. "<<playerThreeName<<": "<<playerThreeYard<<endl;
      cout<<"2. "<< playerTwoName<<": "<<playerTwoYard<<endl;
      cout<<"3. "<< playerOneName<<": "<<playerOneYard<<endl;
  }
    return 0;
    
}
