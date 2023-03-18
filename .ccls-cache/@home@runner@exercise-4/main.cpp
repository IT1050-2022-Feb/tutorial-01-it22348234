#include <iostream>
using namespace std;
int main() {
  int i;
  for(i=1000;i>99;i=i-100)
    {
      cout<<i<<" ";
    }
  cout<<endl;
  
  i=1000;
  while(i>99)
    {
      cout<<i<<" ";
      i=i-100;
    }
  cout<<endl;
  i=1000;
  do{
    cout<<i<<" ";
    i=i-100;
  }while(i>99);
  
}