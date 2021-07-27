#include<iostream>
using namespace std;
int main()
{
		int n,sum=0,sum1=0;
		cout<<"Enter size";
		cin>>n;
		int a[n][n];
		int temp[n];
		int temp1[n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int k=0;k<n;k++)
			{
				sum=0;
				sum1=0;
				for(int j=0;j<n;j++)
				{
					sum+=a[i][j];
					sum1+=a[j][i];
				}
				temp[i]=sum;
				temp1[i]=sum1;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<temp[i];
		}
		for(int i=0;i<n;i++)
		{
			cout<<temp1[i];
		}
}
