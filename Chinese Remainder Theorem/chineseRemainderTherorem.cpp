/*
Topic:
*/
#include<iostream>
using namespace std;

// checking if GDC is one or not
bool GCD (int m1, int m2){
int t1, t2, t3, t4;

//setting t1 as greater modulo and t2 as smaller modulo
if (m1<m2)
{
  t1=m1;
  m1=m2;
  m2=t1;
  t1=00;
}
  t1=m1;
  t2=m2;
  
//cout<<"If was executed"<<endl;
do{
  t3=t1 % t2;
  cout <<t1<<" = "<< t2<<" * "<<t1/t2<<" + "<<t3<<endl;
  t1=t2;
  t2=t3;
  //cout <<t4<<" = "<< t2<<" * "<<t1/t2<<" + "<<t3<<endl;
  
} while (t3!=0);

if (t2==1)
{
  return true;
}
else 
{
  return false;
}

}
int main()
{
  int a, m;
  cout<<"Enter a and m: ";
  cin>>a>>m;
  cout<<"Is boolean?"<<endl<<GCD(a,m);
}
