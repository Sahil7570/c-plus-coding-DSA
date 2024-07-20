#include<iostream>
using namespace std;

int main()
{
  //PROGRAM TO FIND COMPLIMENT OF GIVEN INTEGER NUMBER
int n,ans;
cout<<"Enter any Number : ";
int m=n;
int mask=0;
if(n==0)
cout<<1;
while(m!=0)
{
  mask=(mask<<1)|1;
  m=m>>1;  
}
ans=(~n)&mask;
cout<<ans;
}