#include <iostream>
using namespace std;
int main() {
  float amount,discount;
  for(int i=0;i<3;i++)
    {
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

  cout<<"The discount amount is "<<discount<<endl;
    }


// entering prices until -1 is entered 

int i=0;
while(i!=-1)
  {
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
  cout<<"The discount amount is "<<discount<<endl;
    cout<<"Type -1 to END !!! :";
    cin>>i;
    }

  //enter data until user enters ‘y’ to continue and ‘n’ to stop
  char j;
  do{
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

  cout<<"The discount amount is "<<discount<<endl;
    cout<<"Do you want to continue (y/n) :";
    cin>>j;
    
      
    }while(j=='y');
  return 0;
  }




