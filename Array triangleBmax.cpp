#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size";
	cin>>n;
	int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
	int max=a[0][0];
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(a[i][j]>max)
				max=a[i][j];
			}
		}
		cout<<max;
}
