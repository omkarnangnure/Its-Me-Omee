#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char string[18],status='p';
	cout<<"Enter string:";
	cin>>string;	
	int len=strlen(string);
	int i=0;
	while(i<len)
	{
		if(status=='p')
		{
			switch(string[i])
			{
				case '1':status='q';
					 cout<<"\np->1 - q\n";
					 break;
				case '0':status='s';
					 cout<<"\np->0 - r\n";
					 break;
				default:cout<<"\nDoesn't recognized the input";
			}
		}				 
		else if(status=='q')
		{
			switch(string[i])
			{
				case '1':status='p';
					 cout<<"\nq->1 - p\n";
					 break;
				case '0':status='r';
					 cout<<"\nq->0 - r\n";
					 break;
				default:cout<<"\nDoesn't recognized the input";
			}
		}
		else if(status=='r')
		{
			switch(string[i])
			{
				case '1':status='s';
					 cout<<"\nr->1 - s\n";
					 break;
				case '0':status='q';
					 cout<<"\nr->0 - q\n";
					 break;
				default:cout<<"\nDoesn't recognized the input";
			}
		}
		else if(status=='s')
		{
			switch(string[i])
			{
				case '1':status='r';
					 cout<<"\ns->1 - r\n";
					 break;
				case '0':status='p';
					 cout<<"\ns->0 - p\n";
					 break;
				default:cout<<"\nDoesn't recognized the input";
			}
		}
		else
		{
			cout<<"\nInvalid status";
		}
		
		i++;
	}
	
	if(status=='p')
	{
		cout<<"\nString is accepted by the DFA";
	}
	else
	{
		cout<<"\nString is not accepted by the DFA";
	}
	
	return 0;
}
