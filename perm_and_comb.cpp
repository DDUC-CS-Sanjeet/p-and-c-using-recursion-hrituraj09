#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(r==0)
	{
		return 1;
	}
	else
	{
		return n*permutation(n-1,r-1);
	}
}

int combination(int n, int r)
{ 
	if(r==0)
	{
		return 1;
	}
	else
	{
		return 1.0*n*combination(n-1,r-1)/r;
	}
}

int main()
{
	int x=1,n,r,p,c;
	cout<<"Enter values of n and r respectively: "<<endl;
	cin>>n>>r;
	if(r<=n)
	{
		try
		{
			if(n<0||r<0)
			{
				throw x;
			}
			else if(r==0)
			{
				p=1;
				c=1;
			}
			else
			{
				cout<<"Permutation :"<<permutation(n,r)<<endl;
				cout<<"Combination :"<<combination(n,r)<<endl;
			}
		}
		catch(int y)
		{
			cout<<"Invalid input!!";
		}
	}
	else
	cout<<"Invalid input!!"<<endl;
  return 0;
}
