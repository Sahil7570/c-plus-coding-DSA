#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n)
{
for(int i=2;i<=n-1;i++)
{
if(n%i==0)
{
    return 0;
}
else{
    return 1;
}

}

}
int main()
{
int n;
cout<<"Enter any Number : ";
cin>>n;
int ans=isprime(n);
if(isprime(n))
{
    cout<<"Prime Number";
}
else{
    cout<<"Non Prime Number";
}

}