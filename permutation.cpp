#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter 1st Number : ";
cin>>n;
int r;
cout<<"Enter 2nd Number : ";
cin>>r;
int fact1=1,fact2=1;
int ans=0;
if(n<r)
{
    cout<<"Please Enter 1st value>";
}
for(int i=1;i<=n;i++)
{
    fact1=fact1*i;
}
for(int i=1;i<=n-r;i++)
{
    fact2=fact2*i;
   
}
ans=fact1/fact2;

cout<<ans<<endl;

} 