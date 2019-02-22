//Its me Omee
//Parantheses are in order or not eg: {}[()] its correct {[}]) its not
#include<iostream.h>
#include<conio.h>
#include<string.h>

int stack[20],top=0;

void push(char x)
{
	top++;
	stack[top]=x;
}

void pop()
{
	top--;
}

int isempty()
{
	if(top==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void main()
{
	char str[10];
	int len,i;
	clrscr();
	cout<<"Enter the string";
	cin>>str;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='{'||str[i]=='['||str[i]=='(')
		{
			push(str[i]);
		}
		else if(isempty()&&str[i]=='}')
		{
			if(stack[top]=='{')
			{
				pop();
			}
		}
		else if(isempty()&&str[i]==']')
		{
			if(stack[top]=='[')
			{
				pop();
			}
		}
		else if(isempty()&&str[i]==')')
		{
			if(stack[top]=='(')
			{
				pop();
			}
		}
	}
		if(!(isempty()))
		{
			cout<<"Yes it matched";
		}
		else
		{
			cout<<"It dosen't match";
		}

	getch();
}

