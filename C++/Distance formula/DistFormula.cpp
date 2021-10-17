#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double x1=0.0,y1=0.0;
    double x2=0., y2=0.0;
    double distance= 0.0; 
   
    cin>>x1>>y1;
    cin>>x2>>y2;
    
    distance= sqrt( (static_cast<double>(x2)-x1)*(x2-x1)+(y2-y1)*(y2-y1) );
    
    cout << distance << endl;
    
    return 0;
    
}
