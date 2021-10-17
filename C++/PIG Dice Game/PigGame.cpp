#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;
int previousRoll;
void printIntro();
int humanTurn(string,int);

void  printIntro() {
    
    cout<< "Welcome to the dice game Pig!"<< endl;
    cout<< "The objective is to be first to score 100 points." << endl;
}

int humanTurn( string playerName, int playerScore){
    
    cout << playerName << endl;
    int roll = ((rand()%6)+1);
    
    if(roll==1){
        cout <<"You rolled a 1 (PIG!)" << endl;
        cout << "Your turn is over" << endl;
        
           if(previousRoll!=1){
            
            playerScore-=previousRoll;
            cout << "Your score: "<< playerScore << endl;
            cout<< endl;
    
           }
     }      
    else {
        cout << "You rolled a "<< roll <<endl;
        playerScore+=roll;
        previousRoll+=roll;
        cout <<"Your score: "<< playerScore<< endl;
    }
    previousRoll=roll;
    return playerScore;

}



int main() {
    srand(4444);

    
    int turn = PLAYER1;
    int player1score = 0;
    int player2score = 0;
    string player1name;
    string player2name;
    char newturn;
   
    printIntro();

    
    cout <<endl<< "Player 1 - Enter your name: "<< endl;
    cin >> player1name;
    cout << "Player 2 - Enter your name: "<< endl;
    cin >> player2name;


    //play game
    while ((player1score < WINNING_SCORE) && player2score < WINNING_SCORE) {

        
        if (turn == PLAYER1) {
            player1score = humanTurn(player1name, player1score);
        }
        else {
            player2score = humanTurn(player2name, player2score);
        }

        
        //         based on whose turn it is, updates the turn variable to other player
        if (turn == PLAYER1) {
            if (previousRoll==1){
                turn =PLAYER2;
                previousRoll=0;
            }
            else if (player1score<WINNING_SCORE){
                cout<< "Do you want to roll again? (y/n): "<< endl;
                cin >> newturn;
                
                if(newturn=='y'){
                    turn=PLAYER1;
                }
                else{
                    turn=PLAYER2;
                    previousRoll=0;
                }
                }
            }
        
        else if(turn == PLAYER2){
            if(previousRoll==1){
                turn=PLAYER1;
                previousRoll=0;
            }
           
             else if (player2score<WINNING_SCORE){
            cout<< "Do you want to roll again? (y/n): "<< endl;
                cin >> newturn;
                
                if(newturn=='y'){
                    turn=PLAYER2;
                }
                else{
                    turn=PLAYER1;
                    previousRoll=0;
        }

    }
    }
    }

    // Outputs who won the game.
    if (player1score>=WINNING_SCORE){
     cout<< endl << player1name << " wins!"<< endl;
    }
    else if (player2score>=WINNING_SCORE){
     cout << endl<<  player2name << " wins!"<< endl;
 }
    return 0;
}