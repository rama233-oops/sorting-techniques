#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n,int a[])
{
	for(int j=1;j<n;j++)//j=4
	{
		int key=a[j];//10
		int k=j-1;//3
		while((k>=0)&&(a[k]>key))//60>10-true
		{
			a[k+1]=a[k];//a[3]=40
			k--;
		}
		a[k+1]=key;//a[2]=40,
		for(int l=0;l<n;l++)//5 20 40 60 10 30
	    {                   //
		  cout<<a[l]<<" ";
		 
	    }
	     cout<<"\n";
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion_sort(n,arr);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
