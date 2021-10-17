#include<iostream>
#include<cstdlib>

using namespace std;

const int Heads=0;

double percentHeads(int tosses)
{
    int flip= -1;
    int count= 0;
    for (int i=0; i<tosses; ++i)
    {
        flip = rand()%2;
        if (Heads==flip)
        {
            count++;
        }
    }
 return static_cast<double>(count)/tosses*100;
 
}

int main() {
    srand(4444);
    int tosses =0;
    
    cout<<"Enter the number of times you want to toss the coin: ";
    cin>> tosses;
    cout<<endl;
    
    cout<< "Heads came up "<<percentHeads(tosses);
    cout<< "% of the time." << endl;
    
    return 0;
}