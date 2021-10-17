#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector<double> &myVect)
{
    double userDouble = 0.0;

    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) {
      myVect.push_back(userDouble);
    }
    cout << endl; 
 
    return;
}

double meanVector(const vector <double> &v) {

  double sum=0;
  for(unsigned int i=0;i<v.size(); ++i)
  {
      sum+=v.at(i);
  }
   return sum /v.size();
}

double varianceVector(double vectorAvg, const vector <double> &v) {

   double sum = 0;
   for(unsigned int i=0; i < v.size(); ++i)
   {
       sum+= ((v.at(i) - vectorAvg) * (v.at(i) - vectorAvg));
       
   }
   return sum/v.size();
}

double standardDeviationForVariance(double vectorVariance) {

  
   return sqrt(vectorVariance);
}

int main() {
   vector <double> v;
   double avg = 0.0;
   double var = 0.0;
   double stdDev = 0.0;
   unsigned int i = 0;

   fillVector(v);
   cout << "You entered: ";
   for (i=0; i<v.size(); ++i){
       cout<<v.at(i)<<" ";
   }
   cout<<endl;

   avg = meanVector(v);

   var = varianceVector(avg, v);

   stdDev = standardDeviationForVariance(var);
   
   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0; 
}