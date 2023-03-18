#include <iostream>
#include<iomanip>
using namespace std;
int main() {
  float length,width;
  cout<<"Enter the length :";
  cin>>length;
  cout<<"Enter the width :";
  cin>>width;

  float peri=(length+width)*2;
   cout<<"The perimeter is "<<setprecision(2)<<setiosflags(ios::fixed)<<peri<<endl;
}