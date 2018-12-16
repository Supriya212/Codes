#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int arr[7];
	int sum[t];
	for(int i=0;i<t;i++)
	{
		sum[i]=0;
	}
	for(int a=0;a<t;a++)
	{
		cin>>n;
		int i=0;
		while(n)
		{
			arr[i]=n%10;//store remainders in array
			n/=10;
			i++;
		}
		//calculate sum of array
		int tot=0;
		
		for(int j=0;j<i;j++)
		{
			tot+=arr[j];
			
		}
		sum[a]=tot;
		
	}
	for(int i=0;i<t;i++)
	{
		cout<<sum[i]<<endl;
	}
}