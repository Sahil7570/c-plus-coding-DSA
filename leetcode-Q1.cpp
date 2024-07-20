#include<iostream>
using namespace std;
int main()
{
    // Initializing values 
    int n,sum=0,prd=1,ans;
    cout<<"Enter Digits : ";
    cin>>n;
    // Adding and Multiply Digits
  while(n!=0)
  {
int ld=n%10;
 sum=sum+ld;
 prd=prd*ld;
  n=n/10;
  }
    
    // Calculate difference b/w Product and Sum
     ans=prd-sum;
     cout<<"Difference is "<<ans;
    
   

}