#include <iostream>
using namespace std;

int main(){
    
    int trunkWidth;
    int trunkHeight;
    int leavesWidth;
    int space;
    
    
    cout << "Enter trunk height: ";
    cin >> trunkHeight;
    cout << "Enter trunk width: ";
    cin >> trunkWidth;
    
    
    while ((trunkWidth % 2) == 0) {
    cout << "Please enter an odd number for the width: ";
    cin >> trunkWidth;
    }
    
    cin >> leavesWidth;
    cout << "Enter leaves width: " << endl;
    cin >> leavesWidth;
    
    while ((leavesWidth % 2) == 0) {
    cout << "Please enter an odd number for the width: ";
    cin >> leavesWidth;
    }
    


// DRAWING THE TREE
    
    //LEAVES
    for (int i = 1; i <= leavesWidth; i=i+2){
        
        space = leavesWidth-i;
        for (int j = 0; j < space/2; j++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }
    
        cout << endl;
        }
        
    
    //TRUNK
    for (int i = 1; i <= trunkHeight; i++){
        
        space = leavesWidth - trunkWidth;
        for (int j = 0; j < space/2; j++){
            cout << " ";
        }
        for (int j = 0; j < trunkWidth; j++){
            cout << "*";
        }
    
        cout << endl;
    }
    

    return 0;
}