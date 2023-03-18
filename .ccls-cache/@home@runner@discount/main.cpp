#include <iostream>
using namespace std;
int main() {
  float amount,discount;
  cout<<"Enter the total amount :";
  cin>>amount;
  if(amount<3000)
  {
    discount=0;
  }
  else if(amount>=3000&&amount<5000)
  {
    discount = amount*0.1;
  }
  else if(amount>=5000&&amount<10000)
  {
    discount=amount*0.15;
  }
  else
  {
    discount=amount*0.25;
  }

  cout<<"The discount amount is "<<discount;
}