#include<iostream>
using namespace std;

int setbit(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
count++;
        }
        n=n>>1;
    }
return count;
}
int main()
{
int a,b;
cout<<"Enter two Number : ";
cin>>a>>b;
int ans1=setbit(a);
int ans2=setbit(b);
cout<<"Answer of a is : "<<ans1<<endl;
cout<<"Answer of b is : "<<ans2<<endl;
cout<<"Answer of Total setbits in A and B are : "<<ans1+ans2<<endl;

}