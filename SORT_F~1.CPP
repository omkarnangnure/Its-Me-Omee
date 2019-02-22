//Omkar 
//Sort and find leftmost number in an array 
#include <iostream.h>
#include<conio.h>

int sort_find(int x,int number,int arr[])
{
	int left=0,right=number-1,i,mid=0,result=-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]<x)
		{
			left=mid+1;
		}
		else if(arr[mid]>x)
		{
			right=mid-1;
		}
		else
		{
			result=mid;
			right=mid-1;
		}
	}
	return result;

}

int main() {

	// your code here
	int arr[10],queries,number,i,j,x;
	clrscr();
	cout<<"Enter number of queries and number of elements";
	cin>>queries>>number;
	cout<<"\nEnter elements";
	for(i=0;i<number;++i)
	{
		cin>>arr[i];
	}
	for(i=0;i<queries;++i)
	{
		cout<<"\nEnter query number"<<i<<":";
		cin>>x;
		j=sort_find(x,number,arr);
		cout<<j<<"\n";
	}

	getch();
	return 0;
}