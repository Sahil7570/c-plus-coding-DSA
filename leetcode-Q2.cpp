#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //PROGRAM TO FIND REVERSE OF GIVEN DIGITS BETWEEN THE INTEGER RANGE
    int n;
    cout<<"Enter any Digits : ";
    cin>>n;
    int max=pow(2,31)-1;
    int min=pow(-2,31)-1;
    
    int ans=0;
 while(n!=0)
 {
    if(ans<min || ans<max)
    {
        cout<<0;
    }
    int ld=n%10;
    ans=(ans*10)+ld;
    n=n/10;
 }
 cout<<ans;
}