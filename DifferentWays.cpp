//Compute in how many different ways can you write the number N as a sum of 1 and 2. Note that '1+2' is different than '2+1'

#include<iostream>
using namespace std;

int main()
{
   int N,i;
   cout<<"Enter the number :";
   cin>>N;
   int dw[N];
   dw[0]=1;   //We are going to declare this value before they execute loop to initialize the values of N=1
   dw[-1]=0;
   for(i=1;i<=N;i++)
   {
      dw[i]=dw[i-1]+dw[i-2];

   }
   cout<<"The number of ways are:"<<dw[N];
   return 0;

}
