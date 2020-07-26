#include<iostream>

using namespace std;
//Largest of three numbers

int main()
{
  float a ,b ,c;
  cout<<"Enter the 3 numbers please:";
  cin>>a>>b>>c;
  if (a>b)
  { if(a>c)
      {
      cout<<"The largest no is = "<<a;
      }
      else
      {
        cout<<"The largest no is = "<<c;
      }
  }else
    {
      if(b>c)
      {
        cout<<"The largest no is = "<<b;
      }
      else
      {
        cout<<"The largest no is = "<<c;
      }
    }
      return 0;
  }
