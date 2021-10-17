#include <vector>
#include <iostream>
using namespace std;

const bool CLEAR_SCREEN = true;



void clearScreen() {
    cout << endl;
    if (CLEAR_SCREEN) {
        cout << "\033c";
    }
    cout << endl;
    return;
}



void drawBoard(const vector <char> & gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;
    return;
}




void initVector(vector <char> &v) {

    
        for (int i=0;i<v.size();i++){
             v.at(i) ='a' + i;
        }
    
    return;
}




int convertPosition(char boardPosition) {
   
    return boardPosition - 'a';
}





bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {
    if((positionIndex<0) || (positionIndex>=9)){   
        return false;
    }
    if((gameBoard.at(positionIndex) == 'X') && (gameBoard.at(positionIndex) =='O')){
        return false;
    }
      else{
          return true;
      }
}








int getPlay(const vector<char> &gameBoard) {
    char boardPosition = ' ';
    int index;
    do{
    cout << "Please choose a position: ";
    cin >>boardPosition;
    cout<< endl;
    index = convertPosition(boardPosition);
    }
    while ((!validPlacement(gameBoard,index)));
    return index;
}







bool gameWon(const vector<char> &gameBoard) {
    
        if (gameBoard.at(0)==gameBoard.at(1)  &&  gameBoard.at(1)==gameBoard.at(2)){
            return true;
        }
        else if (gameBoard.at(3)==gameBoard.at(4) && gameBoard.at(4)==gameBoard.at(5)){
            return true;
        }
        else if ((gameBoard.at(6)==gameBoard.at(7)) && (gameBoard.at(7)==gameBoard.at(8))){
            return true;
        }
        else if ((gameBoard.at(0)==gameBoard.at(3)) &&(gameBoard.at(3)==gameBoard.at(6))){
            return true;
        }
         else if ((gameBoard.at(1)==gameBoard.at(4)) &&(gameBoard.at(4)==gameBoard.at(7))){
            return true;
        }
         else if ((gameBoard.at(2)==gameBoard.at(5)) &&(gameBoard.at(5)==gameBoard.at(8))){
            return true;
        }
         else if ((gameBoard.at(0)==gameBoard.at(4)) &&(gameBoard.at(4)==gameBoard.at(8))){
            return true;
        }
         else if ((gameBoard.at(2)==gameBoard.at(4)) &&(gameBoard.at(4)==gameBoard.at(6))){
            return true;
        }
        else {
            return false;
        }
}
        






bool boardFull(const vector<char> &gameBoard) {
    
    for(int i=0;i<gameBoard.size(); i++){
        if ((gameBoard.at(i) != 'X') || (gameBoard.at(i) !='O')){
            return false;
        }
    }
      return true;
}







const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
    vector<char> gameBoard(9);
    int curPlay;
    int turn = PLAYER1; 
   
    initVector(gameBoard);
   
    drawBoard(gameBoard);
   
   
    while ((!boardFull(gameBoard)) && (!gameWon(gameBoard))){
       
       curPlay=getPlay(gameBoard);
       gameBoard.at(curPlay)=(turn ==PLAYER1)? 'X' : 'O';
       if(!boardFull(gameBoard) && !gameWon(gameBoard)){
      
        if(turn==PLAYER1){
            turn==PLAYER2;
        }
        else if(turn==PLAYER2){
            turn==PLAYER1;
        }
       }
       drawBoard(gameBoard);
    }
    

    if(turn==PLAYER1&& gameWon(gameBoard)){
        
        cout << "PLAYER 1 WINS!" << endl;
    }
    else if(turn==PLAYER2&& gameWon(gameBoard)) {
        cout << "PLAYER 2 WINS!" << endl;
    }
    
    else {
        cout << "No one wins"<< endl;
    }
    
    return 0;
}