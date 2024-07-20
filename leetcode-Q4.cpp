#include<iostream>
#include<cmath>
using namespace std;

int main()
{
//PROGRAM TO GIVE TRUE IF GIVEN NUMBER CAN BE WRITTEN IN POWER OF 2
int n;
cout<<"Enter any Number : ";
cin>>n;
for(int i=0;i<=30;i++)
{
 int ans = pow(2,i); 
 if(ans==n)
 {
cout<<"True"; 
 } 
}
cout<<"False";
}