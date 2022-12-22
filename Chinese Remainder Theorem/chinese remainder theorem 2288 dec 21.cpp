/*
Topic:
*/
#include<iostream>
#include<cmath>
using namespace std;

//Checks if GCD is 1 or not;
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
// A ko mod M ma k xa inverse nikaalxa, kasari kaam garxa nasodh, malai thahaxaina
int modInverse(int A, int M)
{
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}

int main()
{
	int noE, ans;
	int M=1;
	int tot;
	cout<<"Enter number of equations: ";
	cin>> noE;
	int matA[noE], matM[noE], matm[noE], maty[noE];
	for(int i=0; i<noE; i++)
	{
		cout<<"Enter a"<<i<<" and m"<<i<<" : ";
		cin>>matA[i]>>matM[i];
	}
	for(int i=0; i<noE; i++)
	{
		for(int j=noE; j<i; j--)
		{
			if (GCD(matM[i],matM[j])==0)
			{
				cout<<matM[i]<<" and "<<matM[j]<<" are not relatively prime and hence the system has no solution.";
				return 0;
			}
			
		}
	}
	cout<<"Equations: "<<endl;
	for (int i=0;i<noE; i++)
	{
		cout<<"X= "<<matA[i]<<" (mod "<<matM[i]<<")"<<endl;
	}
	for (int i=0; i<noE; i++)
	{
		M *= matM[i];
	}
	cout<<"M= "<<M<<endl;
	for(int i=0; i<noE; i++)
	{
		matm[i]=M/matM[i];
		cout<<"m"<<i+1<<" = "<<matm[i]<<endl;
	}
	for (int i=0; i<noE; i++)
	{
		maty[i]=modInverse(matm[i], matM[i]);
		cout<<"y"<<i+1<<" = "<<maty[i]<<endl;
	}
	for (int i=0; i<noE; i++)
	{
		tot = maty[i]*matm[i]*matA[i];
		cout<<tot<<"+"<<endl;
		tot+=tot;
	}
	//fmod cmath ma define vako library function ho mod nikaalne
	ans= tot % M; 
	cout<<"Answer is "<<ans<<endl;
}

