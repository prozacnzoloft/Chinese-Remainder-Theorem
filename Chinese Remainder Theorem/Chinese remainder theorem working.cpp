/*
Topic:
*/
#include<iostream>
using namespace std;

// checking if GDC is one or not
bool GCD(int m1, int m2)
{
	int num1, num2, hcf;
	
    num1 = m1;
	num2 = m2;
	hcf = 1;

    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    if(hcf==1)
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
	int a,m;
	cout<<"Enter a and m: ";
	cin>>a>>m;
	cout<<"Is relatively prime?"<<endl<<GCD(a,m);
}

