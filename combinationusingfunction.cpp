#include<iostream>
using namespace std;

int factorial(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;

}
int ncr(int n,int r)
{
int num=factorial(n);
int demo=factorial(r);
int demo1=factorial(n-r);
int ans=num/(demo*demo1);
return ans;
}
int main()
{
int n,r;
cout<<"Enter 1st Number : ";
cin>>n;
cout<<"Enter 2nd Number : ";
cin>>r;
 int ans2=ncr(n,r);
 cout<<"Answer is "<<ans2;

}